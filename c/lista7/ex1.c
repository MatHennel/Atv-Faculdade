#include <stdio.h>
#include <math.h>

int main()
{
    int n, contador , mult = 1;
    printf("\n");
    printf("Digite um valor inteiro: ");
    scanf("%i",&n);

    printf("\n");
    printf("- Fatorial(%i) = ",n);
    

    for(contador = n;contador > 1 ; contador-- )
    {
        if(contador == n)
        {
            printf("%i",contador);
        }

        else
        {
            printf(" x %i" , contador);
        }

        mult = mult*contador;
    }

    printf(" = %i",mult);

    printf("\n\n");

    return 0;
}