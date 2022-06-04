#include <stdio.h>
 
 int main()
 {
    int n,l,c,erro = 0;
    
    do
    { 
       
        if(erro <  3 )
        {
           printf("\nDigite um numero impar maior ou igual a 3 ou menor ou igual a 15: ");
            scanf("%i",&n);
        }
        else if(erro > 3)
        {
            printf("\nVoce nao pode digitar um numero par , por favor digite um impar: ");
            scanf("%i",&n);
        }
        
        erro++;
    }
    while(n % 2 == 0);
    

    

    for(l = 0;l < n;l++)
    {
        printf("\n");
        for(c = 0;c < n;c++)
        {
            if(l == 0 || l == n - 1 || c == 0 || c == n - 1 || (l  == n / 2  && c == n / 2 ))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
            
           
        }
    }

    
    printf("\n\n");
    return 0;
 }