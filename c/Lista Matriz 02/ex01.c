#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

#define COR_VERDE   printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_ROXA    printf("\33[35m");
#define COR_BRANCO  printf("\33[37m");

int main()
{
    srand(time(NULL));

    int matriz[TAM][TAM],l,c,mc = 0,mb = 0,md = 0;

    printf("\nMatriz Aleatoria: ");

    for(l = 0;l < TAM;l++)
    {
        for(c = 0;c < TAM;c++)
        {
            matriz[l][c] = 10 + rand() % 41;
            
            if(l == c && matriz[l][c] > md)
            {
                md = matriz[l][c];
            }

            else if(l < c && matriz[l][c] > mc)
            {
                mc = matriz[l][c];
            }
            
            else if(l > c && matriz[l][c] > md)
            {
                mb = matriz[l][c];
            }
        }
    }

    

    for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c <TAM;c++)
        {
            
            if(l == c && matriz[l][c] == md)
            {
                COR_LARANJA
                printf("%i ",md);
                COR_BRANCO
            }
            
            else if(l < c && matriz[l][c] == mc)
            {
                COR_ROXA
                printf("%i ",mc);
                COR_BRANCO
            }
            
            else if(l > c && matriz[l][c] == mb)
            {
                COR_VERDE
                printf("%i ",mb);
                COR_BRANCO
            }
            else
            {
                printf("%i ",matriz[l][c]);
            }
            
        }
    }

  
    printf("\n\n");
    return 0;
}