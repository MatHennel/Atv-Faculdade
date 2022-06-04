#include <stdio.h>


int main()
{
    int n1 , n2 , cont, cont1 = 1 , soma = 0;
    printf("\n");
    printf("Digite 2 valores inteiros em ordem crescente: ");
    scanf("%i %i",&n1 , &n2);
    printf("\n");
    
        for(;n1 > n2;)
        {
            printf("Valores incorretos.\nDigite os numeros em ordem crescente: ");
            scanf("%i %i", &n1 , &n2);
            printf("\n");
        }
    
    printf("Somando valores pares: ");

    for(cont = n1 + 1;cont < n2; cont++)
    {
        if(cont % 2 == 0)
        {
            if(cont1 == 1)
            {
                 printf(" %i ",cont);
            }
            else
            {
                printf("+ %i ",cont);
            }
           
            soma = soma + cont;
            cont1++;
        }
    }

    printf(" = %i",soma);





    printf("\n\n");
    return 0;
}