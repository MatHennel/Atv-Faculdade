#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int erros = 0, dicas = 2, cont,flag = 1, sorteio, fim, jogada, dica, first = 0, jog = 1;
    char palavra[50], tema[50],under[50],letra;

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
    
    do
    {
        if(jogada != 2)
        {
            printf("\tForca");
            printf("\n\tTotal de erros: %i | Dicas disponiveis: %i",erros , dicas);
        }
        
        if(first == 1)
        {
            printf("\n\t1) Tema [%s]", tema);
        }
        
        if(jogada != 2)
        {
            printf("\n\tPalavra: ");
        }
       
        
        if(first == 2 || first == 3)
        {
            under[sorteio] = palavra[sorteio];
            for(cont = 0;under[cont] != '\0';cont++)
            {
                printf("%c ",under[cont]);
            }
        }
        if(first != 2 && jog == 0)
        {
            for(cont = 0;under[cont] != '\0';cont++)
            {
                printf("%c ",under[cont]);
            }
        }

        switch (jogada)
        {
        case 1:
                printf(">Digite uma letra (a-z): ");
                fflush(stdin);
                scanf("%c",&letra);
                for(cont = 0;palavra[cont] != '\0';cont++)
                {
                    if(palavra[cont] == letra)
                    {
                        under[cont] == letra;
                    }
                }
                
                break;
        case 2:
                jogada = 1;
                printf("\n\t1) Tema");
                printf("\n\t2) Mostrar uma letra");
                printf("\n\t> ");
                scanf("%i",&dica);
                if(dica == 1)
                {
                    first ++;
                }
                else
                {
                    first = first + 2;
                }
                break;
        
        default:
            break;
        }

       

        
        
            printf("\n\t1) Efetuar jogada ");
            printf("\n\t2) Solicitar dica ");
            printf("\n\t3) Adivinhar palavra ");
            printf("\n\t4) Visualizar forca");
            printf("\n\t> ");
            scanf("%i", &jogada);
        
    
        system("cls");
    }while(fim != 1);
        
    printf("\n\n");
    return 0;
}