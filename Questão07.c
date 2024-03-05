#include <stdio.h>

int isPrime(int n, int i) {
    if (i == 1) return 1; // Base case, when i reaches 1, it's prime
    if (n % i == 0) return 0; // If divisible by any number other than 1 and itself, not prime
    return isPrime(n, i - 1); // Check for next divisor
}

int main() {
    int num;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    if (isPrime(num, num / 2) == 1)
        printf("%d � um n�mero primo.\n", num);
    else
        printf("%d n�o � um n�mero primo.\n", num);
    return 0;
}