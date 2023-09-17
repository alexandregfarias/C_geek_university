#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;


    arq = fopen("arquivo.txt", "w");
    // sempre que finalizar manipulação o arquivo deverá ser fechado.
    fclose(arq);

    return 0;
}

    /*
      fopen("Dois", "Parêmtros");
      1 - Nome do arquivo.
      2 - forma de abertura do arquivo:
       . w  - Abrir o arquivo para escrita (se o arquivo já existir, será sobrescrito com um novo zerado)
       . r  - Abrir o arquivo para leitura (não é permitido escrever no arquivo)
       . wa - Abrir o arquivo para edição (se arquivo existir, conteúdo será adicionado nas linhas abaixo)
    */
