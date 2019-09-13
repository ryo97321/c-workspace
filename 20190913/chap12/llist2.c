#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Null -1

typedef enum {
    Term, Insert, Append, Delete, Print, Clear
} Menu;

typedef int Index;

// �m�[�h
typedef struct { 
    int no;             // ����ԍ�
    char name[10];      // ���O
    Index next;         // �㑱�v�f�̃C���f�b�N�X
    Index Dnext;        // �폜���X�g�|�C���^
} Node;

// ���`���X�g
typedef struct {
    Node *n;        // ���X�g�{�́i�z��j
    Index top;      // ���X�g�̐擪�v�f�̃C���f�b�N�X
    Index max;      // ���p���R�[�h�̍ő�C���f�b�N�X
    Index deleted;  // �폜���X�g�̐擪�v�f�̃C���f�b�N�X
} List;

#define Top (list->top)                 // ���X�g�̐擪
#define Second (list->n[Top].next)      // ���X�g��2�Ԗ�
#define Next(x) (list->n[(x)].next)     // ���R�[�hx�̌㑱�v�f

// �m�[�h�̊e�����o�ɒl��ݒ�
void SetNode(Node *x, int no, const char *name, Index next)
{
    x->no = no;
    x->next = next;
    strcpy(x->name, name);
}

// �}�����ׂ����R�[�h�̃C���f�b�N�X��Ԃ�
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

// �w�肵�����R�[�h���폜���X�g�ɓo�^����
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

// �擪�Ƀm�[�h��}��
void InsertNode(List *list, int no, const char *name)
{
    Index ptr = Top;
    Top = GetIndex(list);
    SetNode(&list->n[Top], no, name, ptr);
}

// �����Ƀm�[�h��ǉ�
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

// �擪�m�[�h���폜
void DeleteNode(List *list)
{
    if(Top != Null) {
        Index ptr = Second;
        DeleteIndex(list, Top);
        Top = ptr;
    }
}

// ���ׂẴm�[�h���폜
void ClearList(List *list)
{
    while (Top != Null) {
        DeleteNode(list);
    }
}

// ���ׂẴm�[�h��\��
void PrintList(List *list)
{
    Index ptr = Top;

    puts("�y �ꗗ�\ �z");
    while (ptr != Null) {
        printf("%5d %-10.10s\n", list->n[ptr].no, list->n[ptr].name);
        ptr = Next(ptr);
    }
}

// ���`���X�g�̏�����
void InitList(List *list, int size)
{
    list->n = calloc(size, sizeof(Node));
    list->top = list->max = list->deleted = Null;
}

// ���`���X�g�̌�n��
void TermList(List *list)
{
    ClearList(list);
    free(list->n);
}

// �f�[�^�̓���
Node Read(const char *message)
{
    Node temp;

    printf("%s����f�[�^����͂��Ă��������B\n", message);

    printf("�ԍ� : "); scanf("%d", &temp.no);
    printf("���O : "); scanf("%s", temp.name);

    return temp;
}

// ���j���[�I��
Menu SelectMenu(void)
{
    int ch;

    do {
        printf("\n(1) �擪�Ƀm�[�h�}�� (2) �����Ƀm�[�h�ǉ�\n");
        printf("(3) �擪�̃m�[�h���폜 (4) �S�m�[�h��\��\n");
        printf("(5) �S�m�[�h���폜 (0) �����I�� : ");
        scanf("%d", &ch);
    } while (ch < Term || ch > Clear);
    return (Menu)ch;
}

// ���C��
int main(void)
{
    Menu menu;
    List list;

    InitList(&list, 100);

    do {
        Node x;
        switch (menu = SelectMenu()) {
            case Insert: x = Read("�擪�ɑ}��");
                         InsertNode(&list, x.no, x.name);
                         break;
            case Append: x = Read("�����ɒǉ�");
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