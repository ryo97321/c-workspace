#include <stdio.h>

int main(void) {
    int num = 1;
    int *p_num;
    p_num = &num;

    int **pp_num;
    pp_num = &p_num;

    printf("int型変数numの値:%d\n", num);
    printf("int型ポインタ変数p_num:%p\n", p_num);
    printf("int型ポインタ変数のポインタpp_num:%p\n", pp_num);

    return 0;
}