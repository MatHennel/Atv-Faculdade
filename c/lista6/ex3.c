#include <stdio.h>
#include <math.h>

int main()
{
    char l1 , l2;

    printf("Digite dois caracteres: ");
    scanf("%c %c",&l1 , &l2);
    fflush(stdin);
    if(l1 >= 97 && l1 <= 122)
    {
        l1 = l1 - 32;
    }
    if(l2 >= 97 && l2 <= 122)
    {
        l2 = l2 - 32;
    }
    printf("-");

    
        if(l1 < l2)
        {
            while( l1 <= l2)
            {
                 printf(" %c ",l1);
                l1++;
              }
       }

       else
       {
           while( l2 <= l1)
       {
           printf(" %c ",l2);
           l2++;
       }
       }
      
       
    
    
    
    
    





    return 0;
}