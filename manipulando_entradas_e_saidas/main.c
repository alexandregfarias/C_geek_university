#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;


    arq = fopen("arquivo.txt", "w");
    // sempre que finalizar manipula��o o arquivo dever� ser fechado.
    fclose(arq);

    return 0;
}

    /*
      fopen("Dois", "Par�mtros");
      1 - Nome do arquivo.
      2 - forma de abertura do arquivo:
       . w  - Abrir o arquivo para escrita (se o arquivo j� existir, ser� sobrescrito com um novo zerado)
       . r  - Abrir o arquivo para leitura (n�o � permitido escrever no arquivo)
       . wa - Abrir o arquivo para edi��o (se arquivo existir, conte�do ser� adicionado nas linhas abaixo)
    */
