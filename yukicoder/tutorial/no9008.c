#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int numbers[N];

    char buffer[256];
    rewind(stdin);
    fgets(buffer, 256, stdin);

    char *p_buffer;
    p_buffer = strtok(buffer, " ");

    int numbersIndex = 0;
    while(p_buffer != NULL) {
        int number = atoi(p_buffer);
        numbers[numbersIndex++] = number;
        p_buffer = strtok(NULL, " ");
    }

    int sumNumbers = 0;
    for(int i=0; i<N; i++) {
        sumNumbers += numbers[i];
    }

    printf("%d\n", sumNumbers);

    return 0;
}