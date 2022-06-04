#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int *vetor);

int main()
{
    srand(time(NULL));

    int vetor[10],i;

    printf("\nVetor Aleatorio: ");

    for(i = 0;i < 10;i++)
    {
        vetor[i] = 10 + rand() % 90;
        printf("%i ",vetor[i]);
    }

    ordenar(vetor);

    printf("\nVetor Ordenado: ");
    for(i = 0;i < 10;i++)
    {
        printf("%i ",vetor[i]);
    }

    return 0;
}

void ordenar(int *vetor)
{
    int i,j,mem;
    for(i = 0;i < 10;i++)
    {
        for(j = i;j < 10;j++)
        {
            if(vetor[j] < vetor[i])
            {
                mem = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = mem;
            }
        }
    }
}

