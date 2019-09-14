#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128
#define STK_SIZE 100

typedef enum {
    Term, Insert, Search, Next, Prev, Print
} Menu;

// 二分木のノード
typedef struct __bnode {
    char name[MAX_LEN];
    struct __bnode *left;
    struct __bnode *right;
} BinNode;

// ノードの確保
BinNode *AllocNode(void)
{
    return (BinNode *)calloc(1, sizeof(BinNode));
}

BinNode *stk[STK_SIZE];     // 探索用ポインタのスタック
int ptr;                // スタックポインタ

// エラー表示
void Error(void)
{
    puts("ERROR");
}

// ノードの挿入
BinNode *InsertNode(BinNode *p, const BinNode *w)
{
    int cond;

    if (p == NULL) {
        p = AllocNode();
        strcpy(p->name, w->name);
        p->left = p->right = NULL;
    } else if ((cond = strcmp(w->name, p->name)) == 0)
        printf("【 エラー 】%sは既に登録されています。\n", w->name);
    else if (cond < 0)
        p->left = InsertNode(p->left, w);
    else
        p->right = InsertNode(p->right, w);

    return p;
}

// ノードの探索
void SearchNode(BinNode *root, const BinNode *w)
{
    if (root != NULL) {
        BinNode *p = root;
        ptr = 0;

        while (1) {
            if (p != NULL) {
                int cond;

                stk[ptr++] = p;
                if ((cond = strcmp(w->name, p->name)) == 0) {
                    printf("%sは登録されています。\n", w->name);
                    ptr--;
                    break;
                }
                p = (cond < 0) ? p->left : p->right;
            } else {
                printf("%sは登録されていません。\n", w->name);
                ptr = -1;
                break;
            }
        }
    }
}

// rootを根とする部分木から最小（sw=0） / 最大（sw=1）を探索
BinNode *SearchMinMax(const BinNode *root, int sw)
{
    if (root == NULL)
        return NULL;
    else {
        BinNode *p = root;

        while (p != NULL) {
            stk[++ptr] = p;
            p = (sw == 0) ? p->left : p->right;
        }
        return stk[ptr];
    }
}

// 次のノード（一つ大きいキー値）の探索
void SrchNext(void)
{
    if (ptr == -1)
        Error();
    else {
        BinNode *p;

        if (stk[ptr]->right != NULL)
            p = SearchMinMax(stk[ptr]->right, 0);
        else {
            char *name = stk[ptr]->name;
            while (1) {
                if (--ptr < 0) {
                    p = NULL;
                    break;
                }
                if (strcmp(stk[ptr]->name, name) > 0) {
                    p = stk[ptr];
                    break;
                }
            }
        }
        if (p == NULL)
            Error();
        else
            printf("データは【%s】です。\n", p->name);
    }
}

// 前のノード（一つ小さいキー値）の探索
void SrchPrev(void)
{
    if (ptr == -1)
        Error();
    else {
        BinNode *p;

        if (stk[ptr]->left != NULL)
            p = SearchMinMax(stk[ptr]->left, 1);
        else {
            char *name = stk[ptr]->name;
            while (1) {
                if (--ptr < 0) {
                    p = NULL;
                    break;
                }
                if (strcmp(stk[ptr]->name, name) < 0) {
                    p = stk[ptr];
                    break;
                }
            }
        }
        if (p == NULL)
            Error();
        else
            printf("データは【%s】です。\n", p->name);
    }
}

// 木の全要素をキーの昇順に表示（非再帰版）
void PrintTree(const BinNode *root)
{
    if (root != NULL) {
        BinNode *p = root;
        BinNode *stk[STK_SIZE];
        int ptr = 0;

        while (1) {
            if (p != NULL) {
                stk[ptr++] = p;
                p = p->left;
            } else if (ptr > 0) {
                p = stk[--ptr];
                printf("%s\n", p->name);
                p = p->right;
            } else
                break;
        }
    }
}

// 木の全要素を解放
void FreeTree(BinNode *p)
{
    if (p != NULL) {
        FreeTree(p->left);
        FreeTree(p->right);
        free(p);
    }
}

// データの入力
BinNode Read(const char *message)
{
    BinNode temp;

    printf("%sする名前を入力してください : ", message);
    scanf("%s", temp.name);
    return temp;
}

// メニュー選択
Menu SelectMenu(void)
{
    int ch;

    do {
        printf("\n(1) 挿入 (2) 探索 (3) 次ノード (4) 前ノード (5) 表示 (0) 終了 : ");
        scanf("%d", &ch);
    } while (ch < Term || ch > Print);
    return (Menu)ch;
}

// メイン関数
int main(void)
{
    Menu menu;
    BinNode *root;

    root = NULL;
    ptr = -1;
    do {
        BinNode x;
        switch (menu = SelectMenu()) {
            case Insert: x = Read("挿入");
                         root = InsertNode(root, &x);
                         break;
            case Search: x = Read("探索");
                         SearchNode(root, &x);
                         break;
            case Next:   SrchNext();
                         break;
            case Prev:   SrchPrev();
                         break;
            case Print:  puts("--- 一覧表 ---");
                         PrintTree(root);
                         break;
        }
    } while (menu != Term);

    FreeTree(root);

    return 0;
}