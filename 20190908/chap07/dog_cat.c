#include <stdio.h>

typedef union {
    struct {
        int type;
    } code;

    struct {
        int type;
        char *name;
    } dog;

    struct {
        int type;
        double weight;
    } cat;
} Animal;

void print_animal(const Animal *x)
{
    switch (x->code.type) {
        case 1: printf("���B���O��%s�ł��B\n", x->dog.name);     break;
        case 2: printf("�L�B�̏d��%.1f�ł��B\n", x->cat.weight); break;
    }
}

int main(void)
{
    Animal a, b;

    a.dog.type = 1;
    a.dog.name = "Taro";

    b.cat.type = 2;
    b.cat.weight = 3.5;

    print_animal(&a);
    print_animal(&b);

    return 0;
}