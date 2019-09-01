#include <stdio.h>
#include <string.h>

typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;

int buf_equal(person2 *p1, person2 *p2) {
    if(p1->sex != p2->sex || p1->age != p2->age) {
        return 1;
    }
    if(strcmp(p1->name, p2->name) != 0) {
        return 1;
    }
    if(strcmp(p1->add, p2->add) != 0) {
        return 1;
    }
    if(strcmp(p1->job, p2->job) != 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    person2 sato = {"S.Sato", 'f', 25, "Osaka", "nurse"};
    printf("%s��%d�΂�, %s��%s�����Ă��܂��B\n", sato.name, sato.age, sato.add, sato.job);

    person2 *p1;
    p1 = &sato;
    person2 sato2, *p2;
    p2 = &sato2;

    *p2 = *p1;
    printf("%s��%d�΂�, %s��%s�����Ă��܂��B\n", sato2.name, sato2.age, sato2.add, sato2.job);

    if(buf_equal(&sato, &sato2) == 0) {
        printf("�\���̂̎���%s��%s�͓����ł��B", "sato", "sato2");
    } else {
        printf("�\���̂̎���%s��%s�͕ʂł��B", "sato", "sato2");
    }

    return 0;
}