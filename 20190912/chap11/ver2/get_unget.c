#include <stdio.h>

#define BUFSIZE 256     // バッファの大きさ

static char buffer[BUFSIZE];   // バッファ
static int buf_no = 0;         // 現在の要素数
static int front = 0;          // 先頭要素カーソル
static int rear = 0;           // 末尾要素カーソル

// 1文字取り出す
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

// 1文字押し戻す
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