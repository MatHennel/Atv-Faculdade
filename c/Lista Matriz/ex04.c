#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5


int main()
{
    srand(time(NULL));
    int m[TAM][TAM],c,l,mem = 0,v,le;

    printf("\nMatriz Aleatoria: ");

    for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            m[l][c] = 10 + rand() % 41;
            printf("%i ",m[l][c]);
        }
    }

    printf("\n\n - Escolha uma linha: ");
    scanf("%i",&le);

    printf(" - Escolha um valor: ");
    scanf("%i",&v);
    

    printf("\nMatriz Modificada: ");
    
    for(l = 0 ;l < TAM;l++)
    {   
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            if(l + 1 != le )
            {
                m[l][c] = v;
            }
            printf("%i ",m[l][c]);
        }
    }

        
        
    printf("\n\n");
    return 0;
}