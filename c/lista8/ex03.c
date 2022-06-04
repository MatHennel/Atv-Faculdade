#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int vetor[4], ind , soma = 0;

    printf("\nVetor aleatorio: ");

    for(ind = 0;ind < 4;ind++)
    {
        vetor[ind] = 10 + rand() % 90;
        printf("%i ",vetor[ind]);
        soma = soma + vetor[ind];
    }

    printf("\n- Valor medio: %i", soma / 4);
    return 0;
}