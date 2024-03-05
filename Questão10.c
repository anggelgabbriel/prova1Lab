#include <stdio.h>

int A(int m, int n) {
    if (m == 0) return n + 1;
    if (m > 0 && n == 0) return A(m - 1, 1);
    if (m > 0 && n > 0) return A(m - 1, A(m, n - 1));
}

void printA(int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("A(%d,%d) = %d\n", i, j, A(i, j));
        }
    }
}

int main() {
    int x, y;
    printf("Digite dois números inteiros para A(x, y): ");
    scanf("%d %d", &x, &y);
    printA(x, y);
    return 0;
}