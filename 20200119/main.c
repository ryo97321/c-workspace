#include <stdio.h>

char Atoa(char symbol) {
    char out;
    int count;

    count = symbol - 'A';
    out = 'a' + count;
    return out;
}

int main() {
    char symbol;
    char tmp;

    symbol = getchar();
    while(symbol != EOF) {
        if(symbol >= 'A' && symbol <= 'Z') {
            tmp = Atoa(symbol);
            putchar(tmp);
        } else {
            putchar(symbol);
        }
        symbol = getchar();
    }
}