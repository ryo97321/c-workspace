#include <stdio.h>

double sqr(double x)
{
    return x * x;
}

int main(void)
{
    double x;

    printf("À”’l‚ğ“ü—Í‚¹‚æ : ");
    scanf("%lf", &x);

    printf("‚»‚Ì”‚Ì‚Qæ‚Í%.3f‚Å‚·B\n", sqr(x));

    return 0;
}