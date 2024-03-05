#include <stdio.h>

void triplosPitagoricos(int n) {
    int a, b, c;
    for (a = 1; a <= n; a++) {
        for (b = a; b <= n; b++) {
            for (c = b + 1; c <= n; c++) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Triplos pitagóricos até %d:\n", n);
    triplosPitagoricos(n);
    return 0;
}