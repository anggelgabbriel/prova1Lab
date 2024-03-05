#include <stdio.h>

void printRoman(int num) {
    int valores[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romanos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; i < 9; i++) {
        while (num >= valores[i]) {
            printf("%s", romanos[i]);
            num -= valores[i];
        }
    }
}

int main() {
    printf("Tabela de algarismos romanos de 1 a 100:\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d: ", i);
        printRoman(i);
        printf("\n");
    }
    return 0;
}