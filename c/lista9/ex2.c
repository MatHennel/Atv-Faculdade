#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main()
{
    srand(time(NULL));
    char letras[TAM],palavra[TAM];
    int ind,ind2,cont = 0,cont2 = 0,flag = 0;

    printf("\nVetor aleatorio: ");

    for(ind = 0;ind < TAM;ind++)
    {
        if(rand() % 2 == 0)
        {
            letras[ind] = 65 + rand() % 25;
        }
        else
        {
            letras[ind] = 97 + rand() % 25;
        }
            
    }
   

    for(ind = 1;ind < TAM;ind++)
    {
        for(ind2 = 0;ind2 < TAM;ind2++)
        {
           if((letras[ind] == letras[ind2] || letras[ind] == letras[ind2] + 32 || letras[ind] == letras[ind2] - 32) && ind != ind2)
           {
               if(rand() % 2 == 0)
                {
                    letras[ind] = 65 + rand() % 25;
                }
                else
                {
                    letras[ind] = 97 + rand() % 25;
                }
            }
        }
    }

     for(ind = 1;ind < TAM;ind++)
    {
        for(ind2 = 0;ind2 < TAM;ind2++)
        {
           if((letras[ind] == letras[ind2] || letras[ind] == letras[ind2] + 32 || letras[ind] == letras[ind2] - 32) && ind != ind2)
           {
               if(rand() % 2 == 0)
                {
                    letras[ind] = 65 + rand() % 25;
                }
                else
                {
                    letras[ind] = 97 + rand() % 25;
                }
            }
        }
    }
   

    for(ind = 0;ind < TAM ; ind++)
    {
        printf(" %c",letras[ind]);
    }

    printf("\nPalavra: ");
    gets(palavra);
    fflush(stdin);

    for(ind = 0;ind < TAM ; ind++)
    {
        for(ind2 = 0;palavra[ind2] != '\0';ind2++)
        {
            if(palavra[ind2] == letras[ind] || palavra[ind2] == letras[ind] - 32 || palavra[ind2] == letras[ind] + 32)
            {
                cont++;
                letras[ind] = 0;
                
            }
        }
    }

    for(ind2 = 0;palavra[ind2] != '\0' ;ind2++)
    {
        cont2++;
        
    }

    


    if(cont == cont2 && cont <= 10)
    {
        printf("\n- [E possivel]");
    }
    else
    {
        printf("\n- [Nao e possivel]");
    }
    
    


    return 0;
}