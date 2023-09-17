#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;

    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite uma idade:\n");
    scanf("%d", &idade);

    printf("Idade informada: %d\n", idade);




    return 0;
}

/*  Especificadores de formato:

%d - > Inteiro
 X - > Número inteiro em base hexadecimal
 f - > Números em ponto flutuante
 e - > Números em notação científica
 c - > Caracteres alfanuméricos
 s - > Sequência de caracteres alfanuméricos
 [^chars] - > Lê todos os dados digitados, exceto os especificados em "chars"

*/
