#include <stdio.h>

struct person1 {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
};
typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;

person2 init(char *name, char sex, int age, char *add, char *job) {
    person2 p2;
    p2.name = name;
    p2.sex = sex;
    p2.age = age;
    p2.add = add;
    p2.job = job;
    return p2;
}

int main(void) {
    struct person1 tanaka;
    tanaka.name = "T.Tanaka";
    tanaka.sex = 'm';
    tanaka.age = 30;
    tanaka.add = "Tokyo";
    tanaka.job = "teacher";
    printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ğ‚µ‚Ä‚¢‚Ü‚·\n", tanaka.name, tanaka.age, tanaka.add, tanaka.job);

    person2 sato = {"S.Sato", 'f', 25, "Osaka", "nurse"};
    printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ğ‚µ‚Ä‚¢‚Ü‚·\n", sato.name, sato.age, sato.add, sato.job);

    sato = init("K.Sato", 'm', 35, "Nagoya", "doctor");
    printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ğ‚µ‚Ä‚¢‚Ü‚·\n", sato.name, sato.age, sato.add, sato.job);

    return 0;
}