#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1,t2,i,j;
    char *ptr_1,*ptr_2,*ptr_3;

    printf("\nDigite 2 tamanhos: ");
    scanf("%i %i",&t1,&t2);

    ptr_1 = malloc(t1 * sizeof(char));
    ptr_2 = malloc(t2 * sizeof(char));
    ptr_3 = malloc((t2 + t2 + 1) * sizeof(char));


    printf("Digite a primeira palavra: ");
    fflush(stdin);
    gets(ptr_1);

    
    printf("Digite a segunda palavra: ");
    fflush(stdin);
    gets(ptr_2);

    for(i = 0;ptr_1[i] != '\0';i++)
    {
        ptr_3[i] = ptr_1[i];
    }
    ptr_3[i] = '-';
    i++;
    for(j = 0;ptr_2[j] != '\0';j++,i++)
    {
        ptr_3[i] = ptr_2[j];
    }

    printf("\t-Concatenada: %s",ptr_3);

    return 0;
}