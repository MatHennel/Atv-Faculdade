#include <stdio.h>
#include <stdlib.h>

int tamp;

void piramide(int **piramide,int l,int c);

int main()
{
    int **piramide,l,c,i;

    printf("Altura da piramide: ");
    fflush(stdin);
    scanf("%i",&l);

    tamp = l;
    c = l;

    piramide = malloc(l * sizeof(int *));
    for(i = 0;i <= c;i++)
    {
        piramide[i] = malloc(c * sizeof(int));
    }

    progressao(piramide,l,c);

    int cont,cont2 = 1;

    for(l = 0;l < tamp;l++)
    {
        cont = tamp - cont2;
        while(cont > 0)
        {
           printf(" ");
           cont--;
        }
        cont2++;
        
        for(c = 0;c < tamp;c++)
        {
            printf("%c ",piramide[l][c]);
        }
        printf("\n");
    }

    
    
    return 0;
}

void progressao(int **piramide,int l,int c)
{

    
    for(l = 0;l < tamp;l++)
    {
        
        for(c = 0;c < tamp;c++)
        {
            if(c <= l)
            {
                piramide[l][c] = '*';
            }
            else
            {
                piramide[l][c] = ' ';
            }
           
        }
      
    }

   
}

