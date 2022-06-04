#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5


int main()
{
    srand(time(NULL));
    int m[TAM][TAM],c,l,mem = 0;

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

    for(l = 0 ;l < TAM;l++)
    {
        for(c = l;c < TAM;c++)
        {
            mem = m[l][c];
            m[l][c] = m[c][l];
            m[c][l] = mem;
            
        }
    }

    printf("\n\nMatriz Transposta: ");
    
    for(l = 0 ;l < TAM;l++)
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