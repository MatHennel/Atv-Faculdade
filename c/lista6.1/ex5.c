#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, n3, n4, n5, n6,contador1 = 0;
    printf("Numeros: ");
    scanf("%i %i %i %i %i %i",&n1, &n2 , &n3, &n4, &n5, &n6);

        while(contador1 <= n1 || contador1 <= n2 || contador1 <= n3 || 
        contador1 <= n4 || contador1 <= n5 || contador1 <= n6)
        {
            if(contador1 == 0)
            {
                printf("- Ordenado ");
            }
            else
            {
                if(contador1 == n1)
                {
                    printf(" %i ",n1);
                }
                    else if(contador1 == n2)
                    {
                        printf(" %i ",n2);
                    }
                        else if(contador1 == n3)
                        {
                            printf(" %i ",n3);
                        }

                            else if(contador1 == n4)
                            {
                                printf(" %i ",n4);
                            }
                                else if(contador1 == n5)
                                {
                                    printf(" %i ",n5);
                                }
                                    else if(contador1 == n6)
                                    {
                                        printf(" %i ",n6);
                                    }


                            
            }
            
            contador1++;
        }
  



    return 0;
}