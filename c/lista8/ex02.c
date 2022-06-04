#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // Semente de número aleatório

    int vetor[12] , ind , maior = 0, menor = 0, pme , pma;

    printf("\nVetor aleatorio: ");

    for(ind = 0;ind < 12;ind++)//Laço para acrescentar valores nos ind do vetor. Ex: vetor[0] = 2 , vetor[1] = 4, etc
    {
        vetor[ind] = 10 + rand() % 90;//Números aleatórios entre 10 e 99
        printf("%i ",vetor[ind]);
        
        if(vetor[ind] > maior)/*Condição para se o valor que estiver no vetor for 
                                maior que está na variável maior , subistituir o resultado na variavel maior*/
        {
            maior = vetor[ind];
            pma = ind; // Variável pma(posição do maior),para receber o valor que estiver no ind, ou seja , vai dizer qual "casa" está o valor.
        }

        else if(vetor[ind < menor])/*Condição para se o valor que estiver no vetor for 
                                menor que está na variável menor , subistituir o resultado na variavel menor*/
        {
            menor = vetor[ind];
            pme = ind;//Variável pme(posição do menor),para receber o valor que estiver no ind, ou seja , vai dizer qual "casa" está o valor.
        }
    }

    printf("\n- Maior elemento: %i / Posicao: %i",maior,pma);
    printf("\n- Menor elemento: %i / Posicao: %i",menor,pme);
    
    return 0;
}