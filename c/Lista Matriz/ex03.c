#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5


int main()
{
    srand(time(NULL));
    int m[TAM][TAM],c,l,co,lo,mem = 0;

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


    printf("\n\nMatriz Ordenada: ");
    
    for(l = 0 ;l < TAM;l++)
    {
        for(c = 0;c < TAM;c++)
        {
            for(lo = 0;lo < TAM;lo++)
            {
                for(co = 0;co < TAM;co++)
                {
                    if(m[l][c] < m[lo][co])
                    {
                        mem = m[l][c];
                        m[l][c] = m[lo][co];
                        m[lo][co] = mem; 
                    }
                }
            }
        }
    }

    for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            
            printf("%i ",m[l][c]);
        }
    }

        
        
    printf("\n\n");
    return 0;
}