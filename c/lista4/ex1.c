#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("\n\nDigite um numero inteiro:");
    scanf("%i", &n);

    if (n == 0)
    {
        printf("- Neutro\n\n");
    }
    else if (n < 0)
    {
        printf("- Negativo\n\n");
    }
    else
    {
        printf("- Positivo\n\n");
    }

    return 0;
}