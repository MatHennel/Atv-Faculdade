#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15


int main()
{
    srand(time(NULL));

    char vetor[TAM],ind,ind2;

    printf("\nVetor Aleatorio: ");
    
    for(ind = 0;ind < TAM ; ind++)
    {
        vetor[ind] = 65 + rand() % 25;
        printf("%c ",vetor[ind]);
    }

    printf("\n- Vetor Alterado: ");

    for(ind = 0;ind < TAM ;ind++)
    {
        for(ind2 = ind + 1;ind2 < TAM;ind2++)
        {
            if(vetor[ind] == vetor[ind2])
            {
                vetor[ind2] = '@';
            }
        }
        
        printf("%c ",vetor[ind]);
        
    }



    printf("\n\n");
    return 0;
}