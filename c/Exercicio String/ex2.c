#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char *p1 = malloc(20 * sizeof(char));
    char *p2 = malloc(20 * sizeof(char));
    char *p3 = malloc(20 * sizeof(char));
    char *p4 = malloc(20 * sizeof(char));
    

    printf("Digite um valor inteiro: ");
    fflush(stdin);
    scanf("%i",&n);

    printf("Digite tres palavras:\n");
    fflush(stdin);
    gets(p1);
    fflush(stdin);
    gets(p2);
    fflush(stdin);
    gets(p3);
    
    p4[0] = '\0';

  


    strncat(p4,p1,n);
    strncat(p4,p2,n);
    strncat(p4,p3,n);

    printf("- Concatenado: %s",p4);

    return 0;
}