#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    int a, b;

    printf("Informe o valor a: ");
    scanf("%d", &a);

    printf("Informe o valor b: ");
    scanf("%d", &b);

    printf("O valor %d + %d = %d\n", a, b, somar(a,b));
    printf("O valor %d - %d = %d\n", a, b, subtrair(a,b));
    printf("O valor %d * %d = %d\n", a, b, multiplicar(a,b));
    printf("A soma dos lados %d de um quadrado é: %d\n", a, calcular_perimetro_quadrado(a));



    return 0;
}
