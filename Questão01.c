#include <stdio.h>

int main() {
    int num;
    printf("Digite cinco números entre 1 e 30:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        for (int j = 0; j < num; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}