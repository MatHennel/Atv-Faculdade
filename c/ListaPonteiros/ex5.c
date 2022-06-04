#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam,i;
    char *ptr;

    printf("\nDigite o tamanho: ");
    fflush(stdin);
    scanf("%i",&tam);

    ptr = malloc(tam * sizeof(char));

    printf("Digite a palavra: ");
    fflush(stdin);
    gets(ptr);

    printf("- Posicoes Impares: ");
    
    for(i = 0;i < tam;i++)
    {   
        if(i % 2 != 0)
        {
           printf("%c",ptr[i]); 
        }
        
    }

    printf("\n\n");
    return 0;
}