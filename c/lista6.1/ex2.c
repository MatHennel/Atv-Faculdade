#include <stdio.h>
#include <math.h>

int main()
{
    int n1 , n2 ,contador1 , contador2;
    printf("Largura e Altura: ");
    scanf("%i %i",&n1 , &n2);

    if(n1 < 0 || n2 < 0)
    {
        printf("Numero invalido");
    }
    
    else
    {
        contador2 = 1;

        while(contador2 <= n2)
        {
            contador1 = 1;
            while(contador1 <= n1)
            {
                printf(" * ");
                contador1++;
            }
            printf("\n");
            contador2++;
        }
    }
    
    
}