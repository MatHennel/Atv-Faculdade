#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n_a , cont, maior, menor , media , flag = 1;

    printf("\nValores Aleatorios: ");
    

    for(cont = 0; cont < 10;cont++)
    {
        n_a = 10 + rand() % 90; // pega um número aleatório

        printf(" %i " , n_a);

            if(flag == 1)
            {
                maior = n_a;
                menor = n_a;
                flag = 0;
            }

            else if(n_a > maior)
            {
                maior = n_a;
            }
            else if(n_a < menor)
            {
                menor = n_a;
            }
    }

    media = (maior + menor) / 2;

    printf("\n- Maior: %i",maior);
    printf("\n- Menor: %i",menor);
    printf("\n- Media: %i",media);     

    printf("\n\n");
    return 0;
}