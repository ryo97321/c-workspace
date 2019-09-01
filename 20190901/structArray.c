#include <stdio.h>

typedef struct {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person;

person init(char *name, char sex, int age, char *add, char *job) {
    person p;
    p.name = name;
    p.sex = sex;
    p.age = age;
    p.add = add;
    p.job = job;
    return p;
}

int main(void) {
    person p[3];

    p[0] = init("T.Tanaka", 'm', 30, "Tokyo", "teacher");
    p[1] = init("S.Sato", 'f', 25, "osaka", "nurse");
    p[2] = init("K.Sato", 'm', 35, "Nagoya", "doctor");

    for(int i = 0; i < 3; i++) {
        printf("%s‚Í%dÎ‚Å, %s‚Å%s‚ð‚µ‚Ä‚¢‚Ü‚·\n", p[i].name, p[i].age, p[i].add, p[i].job);
    }

    return 0;
}