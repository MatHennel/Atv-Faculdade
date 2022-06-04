#include <stdio.h>

int main()
{
    int n1 , n2 ,cont , flag = 1;
    printf("Digite dois numero: ");
    scanf("%i %i", &n1 , &n2);

    if(n1 <= n2)
    {
        cont = n1;
        for(;n1 <= n2;n1++)
        {
            if(flag == 1)
            {
                printf("%i = %i",n1 ,n1);
                flag = 0;
            }
       
            else
            {
                printf("\n%i ",cont);
                cont = cont + n1;
                printf("+ %i = %i",n1,cont);
            
            }
        }
    }
    
    else
    {
        
    
        for(cont = n2;n2 <= n1;n2++)
        {
            if(flag == 1)
            {
                printf("%i = %i",n2 ,n2);
                flag = 0;
            }
       
            else
            {
                printf("\n%i ",cont);
                cont = cont + n2;
                printf("+ %i = %i",n2,cont);
            
            }
        }
    }




    return 0;
}