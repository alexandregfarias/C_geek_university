#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);

void mensagem();

int main()
{
    int n1,n2, ret;

    mensagem();

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Informe o segundo n�mero: ");
    scanf("%d", &n2);

    ret = soma(n1,n2);

    printf("A soma de %d com %d � %d", n1, n2, ret);



    return 0;
}

int soma(int a, int b){
    return a + b;
}

void mensagem(){
    printf("Ol�, mundo.\n");
}
