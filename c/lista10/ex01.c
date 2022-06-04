#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5


int main()
{
    srand(time(NULL));
    
    int ma[TAM][TAM],lin , col,mat[TAM][TAM];

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

    printf("\n\nMatriz transposta:");  

    
    
    for(lin = 0;lin < TAM;lin++)
    {
        
        for(col = 0;col < TAM;col++)
        {
          mat[col][lin] = ma[lin][col];
         
        }
    }

    for(lin = 0;lin < TAM;lin++)
    {
        printf("\n");
        for(col = 0;col < TAM;col++)
        {
          
          printf("%i ",mat[lin][col]);
         
        }
    }



    printf("\n\n");
    return 0;
}