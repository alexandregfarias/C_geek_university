#include <stdio.h>
#include <stdlib.h>

void mensagem(){
    printf("Bem-vindo!\n");
}

int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}

void proximo_char(char caractere){
    printf("%c", caractere+1);
}

int main()
{
    mensagem();
    printf("%d\n",(10,20));
    int retorno = soma(30,20);
    printf("%d\n", retorno);
    proximo_char(103);

    return 0;
}
