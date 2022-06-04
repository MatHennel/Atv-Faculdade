#include <stdio.h>
#include <math.h>

int main()
{
    int n , div, soma ,contador1 = 0;
    printf("\nNumero inteiro: ");
    scanf("%i",&n);

    printf("- Divisivel por: ");

    div = 1;
    soma = 0;
    
    
    while(div < n)
    {
        if(n % div == 0)
        {
            if(contador1==0)
            {
                printf(" %i ",div);
            }    
             else
             {  
                printf(" + ");
                printf(" %i ",div );
            } 
            
            soma = soma + div;
         contador1++;
            }
        div++;
    }
    printf(" = %i",soma);
    
    if(soma == n)
    {
        printf(" [PERFEITO]");
    }
    else
    {
        printf(" [IMPERFEITO]");
    }


    printf("\n\n");
    return 0;
}