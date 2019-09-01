#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}