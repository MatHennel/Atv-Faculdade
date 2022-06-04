#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

    int lin = 4 , col = 4, cont1 , cont2, n_a , maior, menor, flagzao = 1,flagzinha = 1;

    for(cont1 = 0 ;cont1 < lin; cont1++)
    {
        for(cont2 = 0;cont2 < col ; cont2++ )
        {
            n_a = 10 + rand() % 90;
            printf("%i ",n_a);

            if(cont2 > cont1)
            {
                if(flagzao == 1)
                {
                    maior = n_a;
                    flagzao = 0;
                }
                else if(n_a > maior)
                {
                    maior = n_a;
                }
            }
            if(cont1 > cont2)
            {
                if(flagzinha == 1)
                {
                    menor = n_a;
                    flagzinha = 0;
                }
                else if(n_a < menor)
                {
                    menor = n_a;
                }
            }
        }
        printf("\n");
    }

    printf("- Maior acima da diagonal: %i",maior);
    printf("\n- Menor acima da diagonal: %i",menor);


   

    return 0;
}