#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "display.h"

// 色の文字列
char *color_str[] = {
    "BLACK", "BLUE", "RED", "GREEN", "MAGENTA", "CYAN", "YELLOW", "WHITE",
    "GRAY", "BRIGHT_BLUE", "BRIGHT_RED", "BRIGHT_GREEN", "BRIGHT_MAGENTA",
    "BRIGHT_CYAN", "BRIGHT_YELLOW", "BRIGHT_WHITE"
};

// 文字列を比較
int strcmpx(const char *s1, const char *s2)
{
    while (toupper(*s1) == toupper(*s2)) {
        if(*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return toupper((unsigned char)*s1) - toupper((unsigned char)*s2);
}

// 色の文字列をコードに変換
int get_color(char *str)
{
    int i;

    for(i = 0; i < sizeof(color_str) / sizeof(color_str[0]); i++)
        if(!strcmpx(str, color_str[i]))
            return i;
    return -1;
}

// エラーメッセージと使い方を表示して強制終了
void error(int code)
{
    switch (code) {
        case 1: fprintf(stderr, "文字色・背景色を指定してください。\n"); break;
        case 2: fprintf(stderr, "文字色の指定が正しくありません。\n");   break;
        case 3: fprintf(stderr, "背景色の指定が正しくありません。\n");   break;
    }

    fprintf(stderr, "-------------------------------------\n");
    fprintf(stderr, "SETCOLOR 文字色 [背景色]\n");
    fprintf(stderr, "-------------------------------------\n");
    fprintf(stderr, "文字色には以下に示す16色を、\n");
    fprintf(stderr, "背景色には左側の8色を指定してください。\n");
    fprintf(stderr, "背景色を省略すると黒とみなします。\n");
    fprintf(stderr, "-------------------------------------\n");
    fprintf(stderr, "BLACK                GRAY\n");
    fprintf(stderr, "BLUE                 BRIGHT_BLUE\n");
    fprintf(stderr, "RED                  BRIGHT_RED\n");
    fprintf(stderr, "GREEN                BRIGHT_GREEN\n");
    fprintf(stderr, "MAGENTA              BRIGHT_MAGENTA\n");
    fprintf(stderr, "CYAN                 BRIGHT_CYAN\n");
    fprintf(stderr, "YELLOW               BRIGHT_YELLOW\n");
    fprintf(stderr, "WHITE                BRIGHT_WHITE\n");

    exit(1);
}

int main(int argc, char *argv[])
{
    int fg;
    int bg = BLACK;

    if(argc < 2)
        error(1);
    if(argc >= 2)
        if ((fg = get_color(argv[1])) == -1) error(2);
    if(argc >= 3)
        if ((bg = get_color(argv[2])) == -1) error(3);

    colorx(fg, bg);

    return 0;
}