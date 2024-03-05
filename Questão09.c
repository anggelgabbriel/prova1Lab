#include <stdio.h>

int multiply(int x1, int x2) {
    if (x2 == 0)
        return 0;
    else
        return x1 + multiply(x1, x2 - 1);
}

int main() {
    int x1, x2;
    printf("Digite dois números inteiros para multiplicar: ");
    scanf("%d %d", &x1, &x2);
    printf("O resultado da multiplicação é: %d\n", multiply(x1, x2));
    return 0;
}