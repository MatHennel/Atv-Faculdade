#ifndef _CADASTRO_
#define _CADASTRO_

#include <stdio.h>
#include <stdlib.h>
#define RED   "\x1B[31m"
#define RESET "\x1B[0m"
#define GRN   "\x1B[32m"

void cadastro_Aluno()
{
    FILE *fp;
    fp = fopen("alunos.txt", "a+");

    char alunos[50];

    printf("\n- Aluno: ");
    fflush(stdin);
    gets(alunos);

    fputs(alunos, fp);
    fputs("\n", fp);
    fclose(fp);

    printf(GRN "\n[CADASTRADO COM SUCESSO]" RESET);
    _sleep(2000);
}

void cadastro_Disciplina()
{
    FILE *fp;
    fp = fopen("disciplinas.txt", "a+");

    char disciplinas[50];

    printf("\n- Disciplina: ");
    fflush(stdin);
    gets(disciplinas);

    fputs(disciplinas, fp);
    fputs("\n", fp);
    fclose(fp);

    printf(GRN "\n[CADASTRADO COM SUCESSO]" RESET);
    _sleep(2000);
}

void view_Alun_Disc()
{
    system("cls");
    printf("ALUNOS CADASTRADOS\n");
    printf("-----------------------\n");
    alunos();
    printf("-----------------------\n");
    printf("DISCIPLINAS CADASTRADAS\n");
    printf("-----------------------\n");
    disciplinas();
    printf("------------------");

    printf("\nAperte enter para voltar para o menu!");
    fflush(stdin);
    getchar();

    
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

void matricular_Aluno()
{
    FILE *fp1,*fp2,*fp3;
    fp1 = fopen("alunos.txt","a+");
    fp2 = fopen("disciplinas.txt","a+");
    fp3 = fopen("matriculas.txt","a+");

    int cont = 1,lin1,lin2;
    char alunos,disciplinas;

    printf("\n - Linha Aluno: ");
    fflush(stdin);
    scanf("%i",&lin1);

    printf(" - Linha Disciplina: ");
    fflush(stdin);
    scanf("%i",&lin2);

    do
    {
        alunos = fgetc(fp1);

        if(alunos == '\n')
        {
            cont++;
        }
        else if(cont == lin1 && alunos != EOF)
        {
            fputc(alunos,fp3);
        }
        
    } while (alunos != EOF);

        
    
    fputs("<=>",fp3);

    cont = 1;

    do
    {
        disciplinas = fgetc(fp2);

        if(disciplinas == '\n')
        {
            cont++;
        }
        else if(cont == lin2 && disciplinas != EOF)
        {
            fputc(disciplinas,fp3);
        }
        
    } while (disciplinas != EOF);

        fputs("\n",fp3);
        
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);

        printf(GRN "\n[MATRICULA FEITA COM SUCESSO]" RESET);
        _sleep(2000);
    
}

void View_Matriculas()
{
    printf("MATRICULAS EFETUADAS\n");
    printf("-----------------------\n");
    matriculas();
    printf("-----------------------\n");
    printf("\nAperte enter para voltar para o menu!");
    fflush(stdin);
    getchar();

}
void matriculas()
{
    FILE *fp;
    int cont = 1, flag = 1;
    char matriculas;
    fp = fopen("matriculas.txt", "a+");

    if (fp == NULL)
    {
        printf("[ERRO]");
        return 0;
    }

    do
    {
        matriculas = fgetc(fp);
        if (matriculas != EOF)
        {
            if (flag == 1)
            {
                printf("%i | %c", cont, matriculas);
                flag = 0;
            }
            else
            {
                printf("%c", matriculas);
            }
            if (matriculas == '\n')
            {
                cont++;
                flag = 1;
            }
        }

        } while (matriculas != EOF);

        fclose(fp);
    }
   

#endif
