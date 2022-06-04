#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int i;
    char *nome1 = malloc(30 * sizeof(char));
    char *nome2 = malloc(30 * sizeof(char));
    char *nome3 = malloc(30 * sizeof(char));
    printf("\nDigite tres nomes: ");
    fflush(stdin);
    gets(nome1);
    gets(nome2);
    gets(nome3);

    
        if(nome1[0] < nome2[0] && nome2[0] < nome3[0])
        {
            strcat(nome1, "-");
            strcat(nome1,nome2);
            strcat(nome1, "-");
            strcat(nome1,nome3);
            printf("- Concatenada: %s",nome1);
        }
        else if(nome1[0] < nome3[0] && nome3[0] < nome2[0])
        {
            strcat(nome1, "-");
            strcat(nome1,nome3);
            strcat(nome1, "-");
            strcat(nome1,nome2);
            printf("- Concatenada: %s",nome1);
        }
        else if(nome2[0] < nome1[0] && nome1[0] < nome3[0])
        {
            strcat(nome2, "-");
            strcat(nome2,nome1);
            strcat(nome2, "-");
            strcat(nome2,nome3);
            printf("- Concatenada: %s",nome2);
        }
        else if(nome2[0] < nome3[0] && nome3[0] < nome1[0])
        {
            strcat(nome2, "-");
            strcat(nome2,nome3);
            strcat(nome2, "-");
            strcat(nome2,nome1);
            printf("- Concatenada: %s",nome2);
        }
        else if(nome3[0] < nome1[0] && nome1[0] < nome2[0])
        {
            strcat(nome3, "-");
            strcat(nome3,nome1);
            strcat(nome3, "-");
            strcat(nome3,nome2);
            printf("- Concatenada: %s",nome3);
        }
         else if(nome3[0] < nome2[0] && nome2[0] < nome1[0])
        {
            strcat(nome3, "-");
            strcat(nome3,nome2);
            strcat(nome3, "-");
            strcat(nome3,nome1);
            printf("- Concatenada: %s",nome3);
        }
    

    
    
    return 0;
}