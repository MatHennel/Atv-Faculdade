#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int erros = 0, dica1 = 0, dicas = 2, cont, cont2, flag = 1, sorteio;
    char palavra[50], tema[50],under[50];
    int jogada = 0, fim = 0;

    if(flag == 1)
    {
        printf("\nPalavra: ");
        fflush(stdin);
        gets(palavra);

        printf("Tema: ");
        fflush(stdin);
        gets(tema);

        flag = 0;

        system("cls");
    }

    for(cont = 0;palavra[cont] != '\0';cont++)
    {
        under[cont] = '_';
    }

    sorteio = rand() % cont;
    
    do{
        if(jogada != 2)
        {
            printf("\t-------------------------------------------------");
            printf("\n\t--------------------- FORCA ---------------------");
            printf("\n\t-------------------------------------------------");
            printf("\n\t---- Total de erros: %i | Dicas Disponives: %i ----", erros, dicas);
            printf("\n\t-------------------------------------------------");
        }

        if(dica1 == 0)//inical
        {
            printf("\n\t----- Palavra:");
            for(cont = 0;under[cont] != '\0';cont++)
            {
                printf(" %c",under[cont]);
            }
        }

        switch (jogada)
        {
            case 2:
                printf("\n\t1)Tema \n\t2)Letra ");
                printf("\n\t> ");
                scanf("%i", &dica1);

                if(dica1 == 1)//dica 1
                {
                    printf("\t-------------------------------------------------");
                    printf("\n\t--------------------- FORCA ---------------------");
                    printf("\n\t-------------------------------------------------");
                    printf("\n\t---- Total de erros: %i | Dicas Disponives: %i ----", erros, dicas);
                    printf("\n\t-------------------------------------------------");
                    printf("\n\t----- Dica 1: [%s]", tema);
                    printf("\n\t----- Palavra:");
                    for(cont = 0;under[cont] != '\0';cont++)
                    {
                        printf(" %c",under[cont]);
                    }
                    dicas--;
                }
                else//dica 2
                {
                    printf("\t-------------------------------------------------");
                    printf("\n\t--------------------- FORCA ---------------------");
                    printf("\n\t-------------------------------------------------");
                    printf("\n\t---- Total de erros: %i | Dicas Disponives: %i ----", erros, dicas);
                    printf("\n\t-------------------------------------------------");
                    printf("\n\t----- Dica 1: [%s]", tema);
                    printf("\n\t----- Palavra: ");
                    under[sorteio] = palavra[sorteio];
                    for(cont = 0;under[cont] != '\0';cont++)
                    {
                        printf(" %c",under[cont]);
                    }
                    dicas--;
                }
            break;

            case 5:
                fim = 1;
            break;
        }
        if(dica1 != 2)
        {
            printf("\n\t-------------------------------------------------");
            printf("\n\t--- 1) Efetuar jogada: --------------------------");
            printf("\n\t--- 2) Solicitar dica: --------------------------");
            printf("\n\t--- 3) Adivinhar palavra ------------------------");
            printf("\n\t--- 4) Visualizar forca -------------------------");
            printf("\n\t--- 5) Sair -------------------------------------");
            printf("\n\t-------------------------------------------------");
            printf("\n\t> ");
            scanf("%i", &jogada);
        }

        system("cls");

    }while (fim != 1);

    printf("\n\n");
    return 0;
}