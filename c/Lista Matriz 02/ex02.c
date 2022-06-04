#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main()
{
    srand(time(NULL));

    int m[TAM][TAM],m2[TAM][TAM],l,c,r,flag,flag1 = 0,flag2 = 0,result,l2 = 0,c2;

    for(l = 0;l < TAM; l++)
    {
        for(c = 0;c < TAM;c++)
        {
            m[l][c] = 2 + rand() % 4;
            
        }
    }
    for(l = 0;l < TAM; l++)
    {
        for(c = 0;c < TAM;c++)
        {
            m2[l][c] = 2 + rand() % 4;
            
        }
    }

    for(l = 0;l < TAM;l++)
    {
        
        printf("\n");
        for(r = 0;r < TAM; r++)
        {
            flag = 0;
            for(c = 0;c < TAM;c++)
            {
                if(r == 0)
                {
                    printf("%i ",m[l][c]);
                }

                if(flag == 0 && r != 0 && l != 1)
                {
                    printf("    ");
                    flag = 1;
                }
                
                if(l == 1 && r == 1 && flag1 == 0)
                {
                    printf(" x  ");
                    flag1 = 1;
                }

                if(r == 1)
                {
                    printf("%i ",m2[l][c]);
                }

                 

                if(l == 1 && r == 2 && flag2 == 0)
                {
                    printf(" =  ");
                    flag2 = 1;
                }

                if(r == 2)
                {
                    result = 0;
                    for(c2 = 0;c2 < TAM;c2++)
                    {
                        result = result + (m[l][c2] * m2[c2][c]);
                                
                    }
                        
                    
                    printf("%i ",result);  
                    l2++;
                    
                }
                
            }
        }
    }

    
   



    
    printf("\n\n");
    return 0;
}