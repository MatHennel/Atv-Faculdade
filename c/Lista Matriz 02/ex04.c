#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

#define COR_BRANCO  printf("\33[37m");
#define COR_ROXA    printf("\33[35m");

int main()
{
    srand(time(NULL));
    char m[TAM][TAM],palavra[TAM];
    int d,l,c,flag = 0,sort,cont = 0,erro = 0,n;

    do
    {
        if(erro < 3)
        {
            printf("\nPalavra(no max 4 letras): ");
            fflush(stdin);
        }
        else
        {
            printf("\nvoce esta digitando uma palavra com mais de 4 letras , por favor digite com menos: ");
            fflush(stdin);
        }
        
        gets(palavra);
        for(n = 0;palavra[n] != '\0';n++){ }
        erro++;

            
    }while(n > 4);    
    
    
    printf("\nDirecao(1-HORIZ/2-VERT): ");
    fflush(stdin);
    scanf("%i",&d);

    for(l = 0;l < TAM;l++)
    {
        for(c = 0;c < TAM;c++)
        {
            m[l][c] = 65 + rand() % 26;
        }
    }

        for(c = 0;palavra[c] != '\0';c++)
        {
            if(palavra[c] >= 97 ||palavra[c] <= 122)
            {
                palavra[c] = palavra[c] - 32;
            }
            if(d == 1)
            {
                if(flag == 0)
                {
                    sort = rand() % 5;
                    flag = 1;
                }
                
                m[sort][c] = palavra[c];
            }

            else
            {
                if(flag == 0)
                {
                    sort = rand() % 5;
                    flag = 1;
                }
                m[c][sort] = palavra[c];
            }
        }
    

     for(l = 0;l < TAM;l++)
    {
        printf("\n");
        for(c = 0;c < TAM;c++)
        {
           

            if(d == 1 && l == sort && cont < n)
            {
                COR_ROXA
                printf("%c ",m[sort][c]);
                COR_BRANCO
                cont++;
            }

            else if(d == 2 && c == sort && cont < n)
            {
                COR_ROXA
                printf("%c ",m[l][sort]);
                COR_BRANCO
                cont++;
            }

            else
            {
                printf("%c ",m[l][c]);
            }
            
        }
    }




    return 0;
}