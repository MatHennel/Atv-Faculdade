#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));//gera semente de numero aleatório

    int vetor[12] , ind , n2040 = 0, npar = 0, n35 = 0 , flag1 = 11;

    printf("\nVetor aleatorio: ");
    
    for(ind = 0;ind < 12;ind++)//laço para determinar os valores que cada ind do vetor irá receber
    {
        vetor[ind] = 10 + rand() % 40; // Números aleatórios entre 10 e 50
        printf(" %i",vetor[ind]);

        if(vetor[ind] >= 20 && vetor[ind] <= 40) // Condição para acrescentar na variavel n2040(numeros entre 20 e 40) , os números entre 20 e 40
                                                    
        {
            n2040++;
        }

        if(vetor[ind] > 35) // Condição para acrescentar na variável n35(numeros acima de 35) , os numeros maiores de 35
        {
            n35++;
        }

        if(flag1 == ind) // Flag para printar uma vez a frase
        {
            printf("\n- Qtde de numeros entre 20 e 40: %i",n2040);
            flag1 = 0;
        }

    }    

    for(ind = 0;ind < 12;ind++)//Segundo laço para fazer os números pares
    {
        if(flag1 == 0) // Flag para printar uma vez soh a frase
        {
            printf("\n- Numeros pares: ");
            flag1 = 1;
        }
        if(vetor[ind] % 2 == 0) // Condição para printar os números pares
        {
            printf(" %i",vetor[ind]);
        }
    }

    printf("\n- Qtde de numeros maiores que 35: %i",n35);

    printf("\n\n");
    return 0;
}