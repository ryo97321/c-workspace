#include <stdio.h>

int main(void)
{
    int nx, ny;

    printf("nx‚Ì’l : ");    scanf("%d", &nx);
    printf("ny‚Ì’l : ");    scanf("%d", &ny);

    printf("nx < ny : %d\n", nx < ny);
    printf("nx <= ny : %d\n", nx <= ny);
    printf("nx > ny : %d\n", nx > ny);
    printf("nx >= ny : %d\n", nx >= ny);
    printf("nx == ny : %d\n", nx == ny);
    printf("nx != ny : %d\n", nx != ny);

    return 0;
}