#include <stdio.h>

typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;

void subst(person2 *new_p2, person2 p2) {
    *new_p2 = p2;
}

int main(void) {
    person2 sato = {"S.Sato", 'f', 25, "Osaka", "nurse"};
    printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ğ‚µ‚Ä‚¢‚Ü‚·\n", sato.name, sato.age, sato.add, sato.job);

    person2 p2 = {"K.Sato", 'm', 35, "Nagoya", "doctor"};
    subst(&sato, p2);
    printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ğ‚µ‚Ä‚¢‚Ü‚·\n", sato.name, sato.age, sato.add, sato.job);

    return 0;
}