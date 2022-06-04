#include <stdio.h>
#include <math.h>

int main()
{

    int n1, n2;

    printf("\nDigite dois valores inteiros: ");
    scanf("%i %i", &n1, &n2);
    fflush(stdin);

    printf("- Raiz = %.1lf", sqrt(pow(n1, n2)));

    return 0;
}