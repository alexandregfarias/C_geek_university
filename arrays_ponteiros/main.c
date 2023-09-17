#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe o valor %d/5: ", (i+1));
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    printf("%p\n", &valores[0]);
    printf("%p\n", valores);



    return 0;
}
