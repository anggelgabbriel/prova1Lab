#include <stdio.h>

int main() {
    int i;
    for (i = 0; i <= 127; i++) {
        printf("%c ", i);
        if (i % 10 == 0 && i != 0) printf("\n");
    }
    return 0;
}