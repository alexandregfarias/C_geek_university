#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n; // vari�vel que guarda seu valor na mem�ria.

    int* p; // Ponteiro � um valor que aponta para o endere�o de mem�ria.

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    // Inicializando o ponteiro.
    p = &n;

    printf("O n�mero informado foi: %d\n", n);

    printf("Endere�o de mem�ria: %d\n", &n);

    printf("Endere�o do ponteiro: %p\n", p);


    return 0;
}
