#include <stdio.h>

#define BUFSIZE 256

extern char buffer[BUFSIZE];
extern int buf_no;
extern int front;
extern int rear;

// 1•¶Žš‰Ÿ‚µ–ß‚·
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