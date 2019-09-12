#include <stdio.h>

#define BUFSIZE 256     // �o�b�t�@�̑傫��

static char buffer[BUFSIZE];   // �o�b�t�@
static int buf_no = 0;         // ���݂̗v�f��
static int front = 0;          // �擪�v�f�J�[�\��
static int rear = 0;           // �����v�f�J�[�\��

// 1�������o��
int getchr(void)
{
    if(buf_no <= 0)
        return getchar();
    else {
        int temp;

        buf_no--;
        temp = buffer[front++];
        if(front == BUFSIZE)
            front = 0;
        return temp;
    }
}

// 1���������߂�
int ungetchr(int ch)
{
    if(buf_no >= BUFSIZE)
        return EOF;
    else {
        buf_no++;
        buffer[rear++] = ch;
        if(rear == BUFSIZE)
            rear = 0;
        return ch;
    }
}