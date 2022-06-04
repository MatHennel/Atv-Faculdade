#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("alunos.txt","a+");
    char alunos[50];

    if(fp == NULL)
    {
        printf("[ERRO]");
        return 0;
    }

    printf("Aluno: ");
    fflush(stdin);
    gets(alunos);

    fputs(alunos,fp);
    fputs("\n",fp);   
    return 0;
}