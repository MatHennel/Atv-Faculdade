#include <stdio.h>
#include <stdlib.h>

void progressao(int *p,int tam,int termo,int razao);

int main()
{
    int tam,termo,razao,*p;

    printf("\nTamanho vetor (impar): ");
    fflush(stdin);
    scanf("%i",&tam);

    p = malloc(tam * sizeof(int));

    printf("Termo Inicial e Razao: ");
    fflush(stdin);
    scanf("%i %i",&termo,&razao);
    


    progressao(p,tam,termo,razao);

    return 0;
}

void progressao(int *p,int tam,int termo,int razao)
{
    
    int postermo = (tam/2),termoinicial;

    p[postermo] = termo;

    int i;

    termoinicial = termo - ((tam/2) * razao);

    for(i = 0;i < postermo;i++)
    {
        p[i] = termoinicial;
        termoinicial = termoinicial + razao;
    }

    i++;
    termoinicial = termoinicial + razao;

    for(;i < tam;i++)
    {
        p[i] = termoinicial;
        termoinicial = termoinicial + razao;
    }

    printf("- Progressao Aritmetica: ");

    for(i = 0;i < tam;i++)
    {
        printf("%i ",p[i]);
    }

}