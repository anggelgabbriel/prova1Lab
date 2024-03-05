#include <stdio.h>
#include <math.h>

void verificarRaizes(int a, int b, int c) {
    int discriminante = b*b - 4*a*c;
    if (discriminante > 0)
        printf("A fun��o tem duas ra�zes reais.\n");
    else if (discriminante == 0)
        printf("A fun��o tem uma raiz real.\n");
    else
        printf("A fun��o n�o tem ra�zes reais.\n");
}

void calcularRaizes(int a, int b, int c) {
    float discriminante = b*b - 4*a*c;
    if (discriminante >= 0) {
        float raiz1 = (-b + sqrt(discriminante)) / (2*a);
        float raiz2 = (-b - sqrt(discriminante)) / (2*a);
        printf("Raiz 1: %f\n", raiz1);
        printf("Raiz 2: %f\n", raiz2);
    } else {
        printf("A fun��o n�o tem ra�zes reais.\n");
    }
}

int main() {
    int a, b, c;
    printf("Digite os coeficientes da fun��o do segundo grau (ax^2 + bx + c): ");
    scanf("%d %d %d", &a, &b, &c);
    verificarRaizes(a, b, c);
    calcularRaizes(a, b, c);
    return 0;
}