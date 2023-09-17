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
 X - > N�mero inteiro em base hexadecimal
 f - > N�meros em ponto flutuante
 e - > N�meros em nota��o cient�fica
 c - > Caracteres alfanum�ricos
 s - > Sequ�ncia de caracteres alfanum�ricos
 [^chars] - > L� todos os dados digitados, exceto os especificados em "chars"

*/
