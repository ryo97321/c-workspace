#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};

void complex_add2(struct complex *com_1, struct complex *com_2, struct complex *com_3) {
    // (*com_3).real = (*com_1).real + (*com_2).real;
    com_3->real = com_1->real + com_2->real;
    // (*com_3).imaginary = (*com_1).imaginary + (*com_2).imaginary;
    com_3->imaginary = com_1->imaginary + com_2->imaginary;
}

int main() {
    struct complex com01, com02, com03;

    com01.real = 2;
    com01.imaginary = 3;
    com02.real = 4;
    com02.imaginary = 8;

    complex_add2(&com01, &com02, &com03);

    printf("com03 is %f + i %f\n", com03.real, com03.imaginary);
    return 0;
}