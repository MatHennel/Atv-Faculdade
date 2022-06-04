#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("disciplinas.txt","a+");
    char disciplinas[50];

    if(fp == NULL)
    {
        printf("[ERRO]");
        return 0;
    }

    printf("Disciplina: ");
    fflush(stdin);
    gets(disciplinas);

    fputs(disciplinas,fp);
    fputs("\n",fp);


    return 0;
}