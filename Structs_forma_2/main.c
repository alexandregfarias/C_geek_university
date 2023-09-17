#include <stdio.h>
#include <stdlib.h>

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}alunos[2];

int main()
{

    for(int i = 0; i < 2; i++) {
        printf("Informe a matrícula do aluno: ");
        fgets(alunos[i].matricula, 10, stdin);
        printf("Informe o nome do aluno: ");
        fgets(alunos[i].nome, 100, stdin);
        printf("Informe o curso do aluno: ");
        fgets(alunos[i].curso, 50, stdin);
        printf("Informe o ano de nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);
        getchar();
    }

    for(int i =0; i < 2; i++) {
        printf("========== DADOS DO ALUNO %d ===========\n", (i+1));
        printf("Matrícula: %s\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
    }


    return 0;
}
