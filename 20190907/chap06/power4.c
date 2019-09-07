#include <stdio.h>

double pow(double, double);

int main(void)
{
    double x;

    printf("À”’l‚ğ“ü—Í‚¹‚æ : ");
    scanf("%lf", &x);

    printf("‚»‚Ì”‚Ì‚Ræ‚Í%.3f‚Å‚·B\n", pow(x, 3));

    return 0;
}