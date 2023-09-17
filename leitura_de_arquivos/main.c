#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r");

    if(arq){
        while((c = getc(arq)) != EOF); // End Of File
        printf("%c", c);
    } else{
        printf("Não achei o arquivo");
    }

    return 0;
}
