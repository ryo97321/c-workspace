#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    Term, Insert, Append, Delete, Print, Clear
} Menu;

typedef struct __node {
    int no;                 // ����ԍ�
    char name[10];          // ���O
    struct __node *next;    // �㑱�m�[�h�ւ̃|�C���^
} Node;

// �m�[�h�̊e�����o�ɒl��ݒ�
void SetNode(Node *x, int no, const char *name, const Node *next)
{
    x->no = no;
    x->next = next;
    strcpy(x->name, name);
}

// ��̃m�[�h���m��
Node *AllocNode(void)
{
    return calloc(1, sizeof(Node));
}

// �擪�փm�[�h��}��
void InsertNode(Node **top, int no, const char *name)
{
    Node *ptr = *top;
    *top = AllocNode();
    SetNode(*top, no, name, ptr);
}

// �����ւ̃m�[�h�ǉ�
void AppendNode(Node **top, int no, const char *name)
{
    if(*top == NULL)
        InsertNode(top, no, name);
    else {
        Node *ptr = *top;
        while(ptr -> next != NULL)
            ptr = ptr->next;
        ptr->next = AllocNode();
        SetNode(ptr->next, no, name, NULL);
    }
}

// �擪�m�[�h�̍폜
void DeleteNode(Node **top)
{
    if(*top != NULL) {
        Node *ptr = (*top)->next;
        free(*top);
        *top = ptr;
    }
}

// ���ׂẴm�[�h�̍폜
void ClearList(Node **top)
{
    while(*top != NULL) {
        DeleteNode(top);
    }
}

// ���ׂẴm�[�h�̕\��
void PrintList(const Node **top)
{
    Node *ptr = *top;

    puts("�y �ꗗ�\ �z");
    while(ptr != NULL) {
        printf("%5d %-10.10s\n", ptr->no, ptr->name);
        ptr = ptr->next;
    }
}

// ���`���X�g�̏�����
void InitList(Node **top)
{
    *top = NULL;
}

void TermList(Node **top)
{
    ClearList(top);
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
        printf("\n(1) �擪�Ƀm�[�h��}�� (2) �����Ƀm�[�h��ǉ�\n");
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
    Node *list;

    InitList(&list);

    do {
        Node x;
        switch(menu = SelectMenu()) {
            case Insert: x = Read("�擪�ɑ}��");
                         InsertNode(&list, x.no, x.name);
                         break;
            case Append: x = Read("�����ɒǉ�");
                         AppendNode(&list, x.no, x.name);
                         break;
            case Delete: DeleteNode(&list);
                         break;
            case Print:  PrintList(&list);
                         break;
            case Clear:  ClearList(&list);
                         break;
        }
    } while(menu != Term);

    TermList(&list);

    return 0;
}