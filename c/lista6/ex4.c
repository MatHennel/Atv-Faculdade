#include <stdio.h>
#include <math.h>

int main()
{
    int n, valor,contador = 0;

        printf("Digite um numero: ");
        scanf("%i", &n);
        fflush(stdin);

        valor = n - 1;

       while( valor > 1 && valor < n)
       {
           if(n % valor == 0)
           {
               contador++;
           }
           
           
           
           valor--;
       }

        if(n == 1)
        {
            printf("- [NAO PRIMO]");
        }       
       
        else if(contador > 0)
        {
            printf("- [NAO PRIMO]");
        }
        else if(contador == 0)
        {
            printf("- [PRIMO]");
        }

        printf("\n\n");


    return 0;
}