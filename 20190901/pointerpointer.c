#include <stdio.h>

int main(void) {
    int num = 1;
    int *p_num;
    p_num = &num;

    int **pp_num;
    pp_num = &p_num;

    printf("int�^�ϐ�num�̒l:%d\n", num);
    printf("int�^�|�C���^�ϐ�p_num:%p\n", p_num);
    printf("int�^�|�C���^�ϐ��̃|�C���^pp_num:%p\n", pp_num);

    return 0;
}