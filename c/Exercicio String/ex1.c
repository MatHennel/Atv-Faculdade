#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,result = 0,cont = 0;
    char *p1 = malloc(20 * sizeof(char));
    char *p2 = malloc(20 * sizeof(char)); 

    printf("Digite duas palavras:\n");
    fflush(stdin);
    gets(p1);
    fflush(stdin);
    gets(p2);

    for(i = 1;result == 0;i++)
    {
        result = strncmp(p1,p2,i);
        if(result == 0)
        {
            cont++;
        }
    }

   p1 = realloc(NULL,cont * sizeof(char));

    strncpy(p1,p2,cont);

    printf("- Letras iguais: %i / %s",cont,p1);

    return 0;
}