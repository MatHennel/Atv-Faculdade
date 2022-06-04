/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int vetor[12] , ind , ordem[12], ord, flag; 
    printf("\n- Vetor aleatorio: ");

    for(ind = 0;ind < 12;ind++)
    {
        vetor[ind] = 10 + rand() % 90;
        printf("%i ",vetor[ind]);
    }

    printf("\n- Vetor ordenado: ");
   
     
    for(ord = 0;ord < 12;ord++)
    {
        ordem[ord] = 0;
        for(ind = 0;ind < 12;ind++)
        {
            if(vetor[ind] > ordem[ord])
            {
                ordem[ord] = vetor[ind];
            }
        }
        flag = 0;
        for(ind = 0;ind < 12;ind++)
        {
           if(flag == 0)
           {
               if(ordem[ord] == vetor[ind])
                {
                    vetor[ind] = 0;
                    flag = 1;
                } 
                
           }
           
        }
        printf("%i ",ordem[ord]);

       
    }
    
    return 0;
} */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int vetor[12] , ind , cont, flag, memoria = 0; 
    printf("\n- Vetor aleatorio: ");

    for(ind = 0;ind < 12;ind++)
    {
        vetor[ind] = 10 + rand() % 90;
        printf("%i ",vetor[ind]);
    }

    printf("\n- Vetor ordenado: ");
   
     
    for(ind = 0;ind < 12;ind++)
    {
       for(cont = 0;cont < 12;cont++)
       {
           if(vetor[cont] > vetor[ind])
           {    
               memoria = vetor[ind];
               vetor[ind] = vetor[cont]; 
               vetor[cont] = memoria;
           }
       }
        
           printf("%i ",vetor[ind]);
    }
        

       
    
    
    return 0;
}
