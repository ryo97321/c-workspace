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

// ��ʏ���
void cls(void);

// �J�[�\���ʒu��(x, y)�ɐݒ�
void locate(int __x, int __y);

// �����F��__fg�ɔw�i�F��__bg�ɐݒ�
void colorx(int __fg, int __bg);

// �����F��__col�ɐݒ�
void color(int __col);

#endif