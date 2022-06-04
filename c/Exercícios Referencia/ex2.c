#include <stdio.h>
#include <stdlib.h>

void desembaralhar(char *p1,char *p2);

int main()
{
    char *p1 = malloc(30 * sizeof(char)); 
    char *p2 = malloc(30 * sizeof(char)); 

    printf("\nDigite uma palavra: ");
    gets(p1);

    printf("Digite a mesma palavra embalharada: ");
    gets(p2);

    desembaralhar(p1,p2);

    printf("- Desembaralhada: %s",p2);

    return 0;
}

void desembaralhar(char *p1,char *p2)
{
    int i,j;
    char mem;

    for(i = 0;p1[i] != '\0';i++)
    {
        for(j = i; p1[j] != '\0';j++)
        {
            if(p1[i] == p2[j])
            {
                mem = p2[i];
                p2[i] = p2[j];
                p2[j] = mem;

            }
        }
    }
}