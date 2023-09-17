#include <stdio.h>
#include <stdlib.h>

void mensagem() {
    printf("Olá\n");
}

int soma(int num1, int num2) {
    return num1 + num2;
}

void proximo_char(char caractere) {
    printf("%c", caractere+1);
}

int main()
{
    mensagem();
    int somar = soma(5,10);
    printf("%d\n", somar);

    return 0;
}
