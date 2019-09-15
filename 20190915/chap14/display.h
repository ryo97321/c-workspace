#ifndef __DISPLAY
#define __DISPLAY

enum {
    BLACK,
    BLUE,
    RED,
    GREEN,
    MAGENTA,
    CYAN,
    YELLOW,
    WHITE,
    GRAY,
    BRIGHT_BLUE,
    BRIGHT_RED,
    BRIGHT_GREEN,
    BRIGHT_MAGENTA,
    BRIGHT_CYAN,
    BRIGHT_YELLOW,
    BRIGHT_WHITE,
    BRIGHT_GRAY,
};

// 画面消去
void cls(void);

// カーソル位置を(x, y)に設定
void locate(int __x, int __y);

// 文字色を__fgに背景色を__bgに設定
void colorx(int __fg, int __bg);

// 文字色を__colに設定
void color(int __col);

#endif