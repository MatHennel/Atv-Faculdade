#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ponteiro1,*ponteiro2;
    int i,flag = 0,cont = 0;   
    ponteiro1 = malloc(20 * sizeof(char));
    ponteiro2 = malloc(20 * sizeof(char));
    printf("\nPrimeira palavra: ");
    fflush(stdin);
    gets(ponteiro1);
    printf("Segunda palavra: ");
    fflush(stdin);
    gets(ponteiro2);

 


    

    for(i = 0;ponteiro1[i] != '\0' && ponteiro2[i] != '\0';i++)
    {
        if(ponteiro1[i] != ponteiro2[i])
        {
            if(flag == 0)
            {
                printf("\n- Diferentes");
            }
            flag = 1;
            printf("\n posicao %i: '%c' != '%c' ",i,ponteiro1[i],ponteiro2[i]);
            cont++;
        }

        
    }
    if(cont == 0)
    {
        printf(" - Nao ha letras diferentes! ");
    }
    
   

    return 0;
}