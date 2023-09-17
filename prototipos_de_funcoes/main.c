#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);

void mensagem();

int main()
{
    int n1,n2, ret;

    mensagem();

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    ret = soma(n1,n2);

    printf("A soma de %d com %d é %d", n1, n2, ret);



    return 0;
}

int soma(int a, int b){
    return a + b;
}

void mensagem(){
    printf("Olá, mundo.\n");
}
