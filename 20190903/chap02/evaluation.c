#include <stdio.h>

int main(void)
{
    int nx, ny;

    printf("nx�̒l : ");    scanf("%d", &nx);
    printf("ny�̒l : ");    scanf("%d", &ny);

    printf("nx < ny : %d\n", nx < ny);
    printf("nx <= ny : %d\n", nx <= ny);
    printf("nx > ny : %d\n", nx > ny);
    printf("nx >= ny : %d\n", nx >= ny);
    printf("nx == ny : %d\n", nx == ny);
    printf("nx != ny : %d\n", nx != ny);

    return 0;
}