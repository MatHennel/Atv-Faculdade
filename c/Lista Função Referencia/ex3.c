#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void transposta(int **matriz);

int main()
{  
    srand(time(NULL));
    int **matriz;
    int i,j;

    printf("\n");

    matriz = malloc(3 * sizeof(int *));
    for(i = 0;i <= 3;i++)
    {
        matriz[i] = malloc(3 * sizeof(int));
    }

    printf("Matriz: ");

    for(i = 0;i < 3;i++)
    { 
        printf("\n");
        for(j = 0;j < 3;j++)
        {
            matriz[i][j] = 10 + rand() % 90;
            printf("%i ",matriz[i][j]);
        }
       
    }

    transposta(matriz);

    printf("\n\nTransposta: ");

    for(i = 0;i < 3;i++)
    {
        printf("\n");
        for(j = 0;j < 3;j++)
        {
            
            printf("%i ",matriz[i][j]);
        }
        
    }


    return 0;
}

void transposta(int **matriz)
{
    int l,c,mem;

    for(l = 0;l < 3;l++)
    {
        for(c = l;c < 3;c++)
        {
            mem = matriz[l][c];
            matriz[l][c] = matriz[c][l];
            matriz[c][l] = mem;
            

        }
        
    }
}