#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main()
{
    srand(time(NULL));
    int ma[TAM][TAM],col,lin,maior = 0,memo = 0;

    printf("\nMatriz Aleatoria:");

    for(lin = 0;lin < TAM;lin++)
    {
        printf("\n");
        for(col = 0;col < TAM;col++)
        {
            ma[lin][col] = 10 + rand() % 41;
            printf("%i ",ma[lin][col]);
        }
    }

    for(lin = 0;lin < TAM;lin++)
    {
        for(col = 0;col < TAM;col++)
        {
            if(col == lin)
            {
                memo = ma[lin][col];
            }
            if(memo > maior)
            {
                maior = memo;
            }
            
        }
    }

    printf("\n\nMaior valor: %i",maior);


    return 0;
}