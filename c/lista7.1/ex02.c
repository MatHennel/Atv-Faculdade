#include <stdio.h>

int main()
{
   int n1 , n2 , cont1, div, soma, flag = 0;

   printf("\nDigite dois numeros: ");
   scanf("%i %i", &n1, &n2);

   for(cont1 = n1 + 1;cont1 < n2;cont1++)
   {
      soma = 0; 
       for(div = 1;div < cont1;div++)
       {
           
           if(cont1 % div == 0)
           {
                soma = soma + div;
           }

        }
        if(cont1 == soma) 
        {
            flag++;
            if(flag==1)
            {
                printf("- Numeros perfeitos entre (%i) e (%i): ", n1, n2);
            }
            printf(" %i ",cont1);
        }           
       
   }
   
   if(flag == 0)
   {
       printf("Nao ha numeros perfeitos entre (%i) e (%i)!",n1 , n2);
   }

    printf("\n\n");
    return 0;
}