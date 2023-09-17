#include <stdio.h>
#include <stdlib.h>

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};

struct st_agenda{
    struct st_contato contatos[2];

}agenda;

int main()
{

    for(int i = 0; i < 2; i++) {
        printf("Informe o nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();

        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);

        printf("Informe o e-mail: ");
        fgets(agenda.contatos[i].email, 100, stdin);
    }

    for(int i =0; i < 2; i++) {
        printf("==========Agenda de Contatos %d ===========\n");
        printf("=============== CONTATO ===============\n");
        printf("Nome: %s\n", agenda.contatos[i].nome);
        printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
        printf("Telefone: %s\n", agenda.contatos[i].telefone);
        printf("E-mail: %s\n", agenda.contatos[i].email);
    }


    return 0;
}
