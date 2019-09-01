#include <stdio.h>

typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;

int main(void) {
    person2 sato, *p1;
    p1 = &sato;
    p1->age = 20;
    printf("%d\n", sato.age);

    person2 kato, *p2;
    p2 = &kato;
    *p2 = *p1;
    printf("%d\n", kato.age);

    return 0;
}