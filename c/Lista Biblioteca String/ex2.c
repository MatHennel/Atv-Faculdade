#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1,n2,n3;
    char *nome1 = malloc(30 * sizeof(char));
    char *nome2 = malloc(30 * sizeof(char));
    char *nome3 = malloc(30 * sizeof(char));
    printf("\nDigite tres nomes: ");
    fflush(stdin);
    gets(nome1);
    gets(nome2);
    gets(nome3);

    n1 = strlen(nome1);
    n2 = strlen(nome2);
    n3 = strlen(nome3);

    if(n1 < n2 && n2 < n3)
        {
            strcat(nome1, "-");
            strcat(nome1,nome2);
            strcat(nome1, "-");
            strcat(nome1,nome3);
            printf("- Ordem Crescente: %s",nome1);
        }
        else if(n1 < n2 && n3 < n2)
        {
            strcat(nome1, "-");
            strcat(nome1,nome3);
            strcat(nome1, "-");
            strcat(nome1,nome2);
            printf("- Ordem Crescente: %s",nome1);
        }
        else if(n2 < n1 && n1 < n3)
        {
            strcat(nome2, "-");
            strcat(nome2,nome1);
            strcat(nome2, "-");
            strcat(nome2,nome3);
            printf("- Ordem Crescente: %s",nome2);
        }
        else if(n2 < n3 && n3 < n1)
        {
            strcat(nome2, "-");
            strcat(nome2,nome3);
            strcat(nome2, "-");
            strcat(nome2,nome1);
            printf("- Ordem Crescente: %s",nome2);
        }
        else if(n3 < n1 && n1 < n2)
        {
            strcat(nome3, "-");
            strcat(nome3,nome1);
            strcat(nome3, "-");
            strcat(nome3,nome2);
            printf("- Ordem Crescente: %s",nome3);
        }
         else if(n3 < n1 && n2 < n1)
        {
            strcat(nome3, "-");
            strcat(nome3,nome2);
            strcat(nome3, "-");
            strcat(nome3,nome1);
            printf("- Ordem Crescente: %s",nome3);
        }
    
    return 0;
}