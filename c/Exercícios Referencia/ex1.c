#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void referencia(char *ponteiro);



int main()
{
    char *p1 = malloc(100 * sizeof(char));
    
     
    printf("\nDigite um nome completo: ");
    gets(p1);

    referencia(p1);

   

    return 0;
}

void referencia(char *ponteiro)
{
    char *p2 = malloc(100 * sizeof(char));
    char *p3 = malloc(100 * sizeof(char));
    int i,j,cont = 0,m,n,l;

    for(i = 0;ponteiro[i] != '\0';i++)
    {
        if(ponteiro[i] == ' ')
        {
            j = i;
        }
    }
    n = j - 1;
    j++;
    

    for(i = 0;ponteiro[i] != '\0';i++,j++)
    {
        p2[i] = toupper(ponteiro[j]);
    }
    
    
    strcat(p2,",");

    for(i = 0;ponteiro[i] != ' ';i++)
    {
        cont++;
    }

    strncat(p2,ponteiro,cont);

    for(i = 0;p2[i] != ',';i++)
    {
        j = i;
    }
    j = j + 2;

    p2[j] = toupper(ponteiro[0]);

   for(m = 0;p2[m] != '\0';m++){}

    
    for(i = 0;i <= n;i++)
    {
        if(ponteiro[i] == ' ')
        {
            j = i;
            j++;
            p2[m] = ' ';
            m++;
            p2[m] = toupper(ponteiro[j]);
            m++;
            p2[m] = '.';
            m++;
        }
    }
    


    
    printf("%s",p2);
    
    
    
}