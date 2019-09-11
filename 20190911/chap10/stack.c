#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int max;
    int ptr;
    int *stk;
} Stack;

int StackAlloc(Stack *s, int max)
{
    s->ptr = 0;
    if((s->stk = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;
        return -1;
    }
    s->max = max;
    return 0;
}

void StackFree(Stack *s)
{
    if (s->stk != NULL) {
        free(s->stk);
        s->max = s->ptr = 0;
    }
}

int StackPush(Stack *s, int x)
{
    if (s->ptr >= s->max)
        return -1;
    s->stk[s->ptr++] = x;
    return 0;
}

int StackPop(Stack *s, int *x)
{
    if (s->ptr <= 0)
        return -1;
    *x = s->stk[--s->ptr];
    return 0;
}

int StackPeek(const Stack *s, int *x)
{
    if(s->ptr <= 0)
        return -1;
    *x = s->stk[s->ptr - 1];
    return 0;
}

int StackSize(const Stack *s)
{
    return s->max;
}

int StackNo(const Stack *s)
{
    return s->ptr;
}

int StackEmpty(const Stack *s)
{
    return s->ptr <= 0;
}

int StackIsFull(const Stack *s)
{
    return s->ptr >= s->max;
}

void StackClear(Stack *s)
{
    s->ptr = 0;
}

int main(void)
{
    Stack stk;

    if (StackAlloc(&stk, 100) == -1) {
        puts("�X�^�b�N�̊m�ۂɎ��s���܂����B");
        return 1;
    }
    while (1) {
        int m, x;

        printf("���݂̃f�[�^�� : %d/%d\n", StackNo(&stk), StackSize(&stk));
        printf("(1) �v�b�V�� (2) �|�b�v (0) �I�� : ");
        scanf("%d", &m);
        if (m == 0) break;

        switch(m) {
            case 1: printf("�f�[�^ : "); scanf("%d", &x);
                    if (StackPush(&stk, x) == -1)
                        puts("�v�b�V���ł��܂���B");
                    break;
            case 2: if (StackPop(&stk, &x) == -1)
                        puts("�|�b�v�ł��܂���B");
                    else
                        printf("�|�b�v�����f�[�^��%d�ł��B\n", x);
                    break;
        }
    }
    StackFree(&stk);

    return 0;
}