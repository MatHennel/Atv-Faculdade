#include <stdio.h>



void ordenar(char *);

int main()
{
    int i;
    char vetor[5];


    for(i = 0;i < 5;i++)
    {
        printf("\nDigite a %i letra: ", i+1);
        scanf(" %c",&vetor[i]);
    }

    ordenar(vetor);

    printf("- Ordenado: ");
    
    for(i = 0;i < 5;i++)
    {
        printf("%c ", vetor[i]);
    }



    return 0;
}

void ordenar(char *vetor)
{
    int i,j;
    char mem;
    for(i = 0;i < 5;i++)
    {
        if(vetor[i] >= 97)
        {
            vetor[i] = vetor[i] - 32;
        }
    }

        for(i = 0;i < 5;i++)
        {
            for(j = i;j < 5;j++)
            {
                if(vetor[j] < vetor[i])
                {
                    mem = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = mem;
                }
            }
        }

}