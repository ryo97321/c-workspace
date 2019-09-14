#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128
#define STK_SIZE 100

typedef enum {
    Term, Insert, Search, Next, Prev, Print
} Menu;

// �񕪖؂̃m�[�h
typedef struct __bnode {
    char name[MAX_LEN];
    struct __bnode *left;
    struct __bnode *right;
} BinNode;

// �m�[�h�̊m��
BinNode *AllocNode(void)
{
    return (BinNode *)calloc(1, sizeof(BinNode));
}

BinNode *stk[STK_SIZE];     // �T���p�|�C���^�̃X�^�b�N
int ptr;                // �X�^�b�N�|�C���^

// �G���[�\��
void Error(void)
{
    puts("ERROR");
}

// �m�[�h�̑}��
BinNode *InsertNode(BinNode *p, const BinNode *w)
{
    int cond;

    if (p == NULL) {
        p = AllocNode();
        strcpy(p->name, w->name);
        p->left = p->right = NULL;
    } else if ((cond = strcmp(w->name, p->name)) == 0)
        printf("�y �G���[ �z%s�͊��ɓo�^����Ă��܂��B\n", w->name);
    else if (cond < 0)
        p->left = InsertNode(p->left, w);
    else
        p->right = InsertNode(p->right, w);

    return p;
}

// �m�[�h�̒T��
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
                    printf("%s�͓o�^����Ă��܂��B\n", w->name);
                    ptr--;
                    break;
                }
                p = (cond < 0) ? p->left : p->right;
            } else {
                printf("%s�͓o�^����Ă��܂���B\n", w->name);
                ptr = -1;
                break;
            }
        }
    }
}

// root�����Ƃ��镔���؂���ŏ��isw=0�j / �ő�isw=1�j��T��
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

// ���̃m�[�h�i��傫���L�[�l�j�̒T��
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
            printf("�f�[�^�́y%s�z�ł��B\n", p->name);
    }
}

// �O�̃m�[�h�i��������L�[�l�j�̒T��
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
            printf("�f�[�^�́y%s�z�ł��B\n", p->name);
    }
}

// �؂̑S�v�f���L�[�̏����ɕ\���i��ċA�Łj
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

// �؂̑S�v�f�����
void FreeTree(BinNode *p)
{
    if (p != NULL) {
        FreeTree(p->left);
        FreeTree(p->right);
        free(p);
    }
}

// �f�[�^�̓���
BinNode Read(const char *message)
{
    BinNode temp;

    printf("%s���閼�O����͂��Ă������� : ", message);
    scanf("%s", temp.name);
    return temp;
}

// ���j���[�I��
Menu SelectMenu(void)
{
    int ch;

    do {
        printf("\n(1) �}�� (2) �T�� (3) ���m�[�h (4) �O�m�[�h (5) �\�� (0) �I�� : ");
        scanf("%d", &ch);
    } while (ch < Term || ch > Print);
    return (Menu)ch;
}

// ���C���֐�
int main(void)
{
    Menu menu;
    BinNode *root;

    root = NULL;
    ptr = -1;
    do {
        BinNode x;
        switch (menu = SelectMenu()) {
            case Insert: x = Read("�}��");
                         root = InsertNode(root, &x);
                         break;
            case Search: x = Read("�T��");
                         SearchNode(root, &x);
                         break;
            case Next:   SrchNext();
                         break;
            case Prev:   SrchPrev();
                         break;
            case Print:  puts("--- �ꗗ�\ ---");
                         PrintTree(root);
                         break;
        }
    } while (menu != Term);

    FreeTree(root);

    return 0;
}