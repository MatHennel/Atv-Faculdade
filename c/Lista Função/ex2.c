#include <stdio.h>
#include <math.h>

double fatorial(int );

int main()
{
    int n;
    printf("\nDigite um valor: ");
    scanf("%i",&n);

    printf("\n- Fatorial: %.0lf",fatorial(n));
    printf("\n\n");
    return 0;
}

double fatorial(int n)
{
    double soma = 1;
    int i;
    for(i = n;i >= 1;i--)
    {
        soma = soma * n;
        n--;
    }

    return soma;
}