#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

#define COR_BRANCO  printf("\33[37m");
#define COR_ROXA    printf("\33[35m");


int main() 
{
    srand(time(NULL));
    char m[TAM][TAM],palavra1[TAM],palavra2[TAM];
    int d1,d2,l,c,me[TAM][TAM] = {{0},{0}},sort = 0,flag = 0,cont = 0,n,n1,arm = 0,erro = 0,erro1 = 0;

    d1 = rand() % TAM;
    d2 = rand() % TAM;
    

    do
    {
        n = 0;
        if(erro < 3)
        {
            printf("\nDigite a primeira palavara(max  4 letras): ");
            fflush(stdin);
            gets(palavra1); 
        }
        else if(erro > 3)
        {
            printf("\nVoce esta digitando uma palavra com mais de 4 letras,por favor digite com menos: ");
            fflush(stdin);
            fflush(stdin);
            gets(palavra1); 
        }
       
        for(c = 0;palavra1[c] != '\0';c++)
        {
            n++;
        }
        erro++;

        
    }while(n > 4);
    

   do
    {
        n1 = 0;
        if(erro1 < 3)
        {
            printf("\nDigite a segunda palavara(max  4 letras): ");
            fflush(stdin);
            gets(palavra2); 
        }
        else
        {
            printf("\nVoce esta digitando uma palavra com mais de 4 letras,por favor digite com menos: ");
            fflush(stdin);
            gets(palavra2); 
        }
       
        for(c = 0;palavra2[c] != '\0';c++)
        {
            n1++;
        }
        erro1++;

        
    }while(n1 > 4);

    for(l = 0;l < TAM;l++)
    {
        
        for(c = 0;c < TAM;c++)
        {
            m[l][c] = 65 + rand() % 26;
            
        }
    }

    
    
    

    for(c = 0;palavra1[c] != '\0';c++)
    {
        if(palavra1[c] >= 97 || palavra1[c] <= 122)
        {
            palavra1[c] = palavra1[c] - 32;
        }

        m[d1][c] = palavra1[c];
        me[d1][c] = 1;
    }

    for(c = 0;palavra2[c] != '\0';c++)
    {
        if(palavra2[c] >= 97 || palavra2[c] <= 122)
        {
            cont++;
        }
    }
    
    
   



        for(c = 0;c < cont;c++)
        {
           while(me[c][d2] == 1)
           {
               d2 = rand() % TAM;
              
           }
            
        }

    

    for(c = 0;palavra2[c] != '\0';c++)
    {
        if(palavra2[c] >= 97 || palavra2[c] <= 122)
        {
            palavra2[c] = palavra2[c] - 32;
            m[c][d2] = palavra2[c];
            me[c][d2] = 1;
           
        }
    }


    
    for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            printf("%i ",me[l][c]);
        }
    }

    printf("\n");

    for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
            if(me[l][c] == 1)
            {
                COR_ROXA
                printf("%c ",m[l][c]);
                COR_BRANCO
            }
            else
            {
                printf("%c ",m[l][c]); 
            }
           
            
        }
    }

    

    





    return 0;
}