#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int consultaAlunosPorCurso(char[]);

struct Aluno
{
    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[30];
};

struct Aluno meusAlunos[100];

int main()
{
    strcpy(meusAlunos[0].nome, "Pedro");
    strcpy(meusAlunos[0].endereco, "Rua B");
    strcpy(meusAlunos[0].matricula, "2017123");
    strcpy(meusAlunos[0].curso, "Computação");

    strcpy(meusAlunos[1].nome, "José");
    strcpy(meusAlunos[1].endereco, "Rua X");
    strcpy(meusAlunos[1].matricula, "2017456");
    strcpy(meusAlunos[1].curso, "Computação");

    strcpy(meusAlunos[2].nome, "João");
    strcpy(meusAlunos[2].endereco, "Rua Y");
    strcpy(meusAlunos[2].matricula, "2017789");
    strcpy(meusAlunos[2].curso, "Física");

    printf("Nome: %s\n", meusAlunos[0].nome);
    printf("End: %s\n", meusAlunos[0].endereco);
    printf("Matrícula: %s\n", meusAlunos[0].matricula);
    printf("Curso: %s\n", meusAlunos[0].curso);

    putchar('\n');

    printf("Nome: %s\n", meusAlunos[1].nome);
    printf("End: %s\n", meusAlunos[1].endereco);
    printf("Matrícula: %s\n", meusAlunos[1].matricula);
    printf("Curso: %s\n", meusAlunos[1].curso);

    putchar('\n');

    printf("Nome: %s\n", meusAlunos[2].nome);
    printf("End: %s\n", meusAlunos[2].endereco);
    printf("Matrícula: %s\n", meusAlunos[2].matricula);
    printf("Curso: %s\n", meusAlunos[2].curso);

    putchar('\n');

    int contCurso = consultaAlunosPorCurso("Computação");
    printf("Alunos de computação: %d\n", contCurso );

 return 0;
}

unsigned int consultaAlunosPorCurso(char curso[]){
    int count = 0;
    for(int i = 0; i < strlen(meusAlunos); ++i){
        if(strcmp(meusAlunos[i].curso, curso) == 0){
            ++count;
        }
    }
    return count;
}
