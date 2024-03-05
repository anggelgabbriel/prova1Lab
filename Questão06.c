#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

int main() {
    int num1, num2;
    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("O MDC de %d e %d �: %d\n", num1, num2, mdc(num1, num2));
    return 0;
}