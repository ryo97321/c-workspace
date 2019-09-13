#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Null -1

typedef enum {
    Term, Insert, Append, Delete, Print, Clear
} Menu;

typedef int Index;

// ノード
typedef struct { 
    int no;             // 会員番号
    char name[10];      // 名前
    Index next;         // 後続要素のインデックス
    Index Dnext;        // 削除リストポインタ
} Node;

// 線形リスト
typedef struct {
    Node *n;        // リスト本体（配列）
    Index top;      // リストの先頭要素のインデックス
    Index max;      // 利用レコードの最大インデックス
    Index deleted;  // 削除リストの先頭要素のインデックス
} List;

#define Top (list->top)                 // リストの先頭
#define Second (list->n[Top].next)      // リストの2番目
#define Next(x) (list->n[(x)].next)     // レコードxの後続要素

// ノードの各メンバに値を設定
void SetNode(Node *x, int no, const char *name, Index next)
{
    x->no = no;
    x->next = next;
    strcpy(x->name, name);
}

// 挿入すべきレコードのインデックスを返す
int GetIndex(List *list)
{
    if(list->deleted == Null)
        return ++(list->max);
    else {
        Index rec = list->deleted;
        list->deleted = list->n[rec].Dnext;
        return rec;
    }
}

// 指定したレコードを削除リストに登録する
void DeleteIndex(List *list, Index idx)
{
    if(list->deleted == Null) {
        list->deleted = idx;
        list->n[idx].Dnext = Null;
    } else {
        Index ptr = list->deleted;
        list->deleted = idx;
        list->n[idx].Dnext = ptr;
    }
}

// 先頭にノードを挿入
void InsertNode(List *list, int no, const char *name)
{
    Index ptr = Top;
    Top = GetIndex(list);
    SetNode(&list->n[Top], no, name, ptr);
}

// 末尾にノードを追加
void AppendNode(List *list, int no, const char *name)
{
    if(Top == Null)
        InsertNode(list, no, name);
    else {
        Index ptr = Top;
        while(Next(ptr) != Null) {
            ptr = Next(ptr);
        }
        Next(ptr) = GetIndex(list);
        SetNode(&list->n[Next(ptr)], no, name, Null);
    }
}

// 先頭ノードを削除
void DeleteNode(List *list)
{
    if(Top != Null) {
        Index ptr = Second;
        DeleteIndex(list, Top);
        Top = ptr;
    }
}

// すべてのノードを削除
void ClearList(List *list)
{
    while (Top != Null) {
        DeleteNode(list);
    }
}

// すべてのノードを表示
void PrintList(List *list)
{
    Index ptr = Top;

    puts("【 一覧表 】");
    while (ptr != Null) {
        printf("%5d %-10.10s\n", list->n[ptr].no, list->n[ptr].name);
        ptr = Next(ptr);
    }
}

// 線形リストの初期化
void InitList(List *list, int size)
{
    list->n = calloc(size, sizeof(Node));
    list->top = list->max = list->deleted = Null;
}

// 線形リストの後始末
void TermList(List *list)
{
    ClearList(list);
    free(list->n);
}

// データの入力
Node Read(const char *message)
{
    Node temp;

    printf("%sするデータを入力してください。\n", message);

    printf("番号 : "); scanf("%d", &temp.no);
    printf("名前 : "); scanf("%s", temp.name);

    return temp;
}

// メニュー選択
Menu SelectMenu(void)
{
    int ch;

    do {
        printf("\n(1) 先頭にノード挿入 (2) 末尾にノード追加\n");
        printf("(3) 先頭のノードを削除 (4) 全ノードを表示\n");
        printf("(5) 全ノードを削除 (0) 処理終了 : ");
        scanf("%d", &ch);
    } while (ch < Term || ch > Clear);
    return (Menu)ch;
}

// メイン
int main(void)
{
    Menu menu;
    List list;

    InitList(&list, 100);

    do {
        Node x;
        switch (menu = SelectMenu()) {
            case Insert: x = Read("先頭に挿入");
                         InsertNode(&list, x.no, x.name);
                         break;
            case Append: x = Read("末尾に追加");
                         AppendNode(&list, x.no, x.name);
                         break;
            case Delete: DeleteNode(&list);
                         break;
            case Print: PrintList(&list);
                        break;
            case Clear: ClearList(&list);
                        break;
        }
    } while (menu != Term);

    TermList(&list);

    return 0;
}