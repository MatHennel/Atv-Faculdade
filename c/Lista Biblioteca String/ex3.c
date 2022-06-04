#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *nome1 = malloc(30 * sizeof(char));
    char *nome2 = malloc(30 * sizeof(char));
    char *nome3 = malloc(30 * sizeof(char));
    char *nometotal = malloc(50 * sizeof(char));
    printf("\nDigite tres nomes: ");
    fflush(stdin);
    gets(nome1);
    gets(nome2);
    gets(nome3);
    
    strcpy(nometotal,nome1);
    strcat(nometotal,nome2);
    strcat(nometotal,nome3);
    printf("- Concatenado: %s",nometotal);
    return 0;
}