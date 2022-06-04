#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

#define COR_VERDE   printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_BRANCO  printf("\33[37m");



int main()
{
    srand(time(NULL));
    int m[TAM][TAM],c,l,mem = 0,maior = 0;

    
    printf("\nMatriz Aleatoria: ");

    for(l = 0;l < TAM;l++)
    {
        
        for(c = 0;c < TAM;c++)
        {
            m[l][c] = 10 + rand() % 41;
            
        }
    }

    for(l = 0 ;l < TAM;l++)
    {
       
        for(c = 0;c < TAM;c++)
        {
            if(c == l)
            {
                mem = m[l][c];
               
                if(mem > maior)
                {
                    maior = mem;
                }
            }
            
        }    
    }
     for(l = 0 ;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            if(c == l && m[l][c] != maior)
            {
                COR_LARANJA
                mem = m[l][c];
                printf("%i ",m[l][c]);
                COR_BRANCO
                
            }
            else if(c == l && m[l][c] == maior)
            {
                COR_VERDE
                printf("%i ",maior);
                COR_BRANCO
            }
            
           else
           {
               printf("%i ",m[l][c]);
           } 
        }//51 for
    }//48 for

    printf("\n\nMaior valor: %i",maior);

    printf("\n\n");
    return 0;
    
}//13 main