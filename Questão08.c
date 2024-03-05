#include <stdio.h>

int reverseInt(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    printf("Digite um número inteiro para reverter: ");
    scanf("%d", &num);
    printf("Número revertido: %d\n", reverseInt(num));
    return 0;
}