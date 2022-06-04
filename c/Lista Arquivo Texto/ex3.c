#include <stdio.h>
#include <stdlib.h>

void alunos();
void disciplinas();

int main()
{

    printf("ALUNOS CADASTRADOS\n");
    printf("-----------------------\n");
    alunos();
    printf("-----------------------\n");
    printf("DISCIPLINAS CADASTRADAS\n");
    printf("-----------------------\n");
    disciplinas();
    printf("------------------");

    return 0;
}

void alunos()
{

    FILE *fp;
    int cont = 1, flag = 1;
    char alunos;
    fp = fopen("alunos.txt", "a+");

    if (fp == NULL)
    {
        printf("[ERRO]");
        return 0;
    }

    do
    {
        alunos = fgetc(fp);
        if (alunos != EOF)
        {
            if (flag == 1)
            {
                printf("%i | %c", cont, alunos);
                flag = 0;
            }
            else
            {
                printf("%c", alunos);
            }
            if (alunos == '\n')
            {
                cont++;
                flag = 1;
            }
        }

    } while (alunos != EOF);

    fclose(fp);
}

void disciplinas()
{
    FILE *fp;
    int cont = 1, flag = 1;
    char disciplinas;

    fp = fopen("disciplinas.txt", "a+");

    if (fp == NULL)
    {
        printf("[ERRO]");
        return 0;
    }

    do
    {
        disciplinas = fgetc(fp);
        if (disciplinas != EOF)
        {
            if (flag == 1)
            {
                printf("%i | %c", cont, disciplinas);
                flag = 0;
            }
            else
            {
                printf("%c", disciplinas);
            }
            if (disciplinas == '\n')
            {
                cont++;
                flag = 1;
            }
        }

    } while (disciplinas != EOF);

    fclose(fp);
}