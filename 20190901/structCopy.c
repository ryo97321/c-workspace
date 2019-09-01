#include <stdio.h>

typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;

int main(void) {
    person2 sato = {"S.Sato", 'f', 25, "Osaka", "nurse"};
    printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ğ‚µ‚Ä‚¢‚Ü‚·B\n", sato.name, sato.age, sato.add, sato.job);

    person2 *p1;
    p1 = &sato;
    person2 sato2, *p2;
    p2 = &sato2;

    *p2 = *p1;
    printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ğ‚µ‚Ä‚¢‚Ü‚·B\n", sato2.name, sato2.age, sato2.add, sato2.job);

    return 0;
}