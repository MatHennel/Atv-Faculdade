#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam,i,j;
    char *ptr,mem;

    printf("\nDigite o tamanho: ");
    fflush(stdin);
    scanf("%i",&tam);

    ptr = malloc(tam * sizeof(char));

    printf("Digite a palavra: ");
    fflush(stdin);
    gets(ptr);

    for(i = 0,j = tam - 1;i < tam/2 ;i++,j--)
    {
        mem = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = mem;
        
    }

    printf("- Invertida: %s",ptr);

    printf("\n\n");
    return 0;
}