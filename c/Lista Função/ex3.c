#include <stdio.h>

int primo(int );

int main()
{
    int n;
    printf("\nDigite um valor: ");
    scanf("%i",&n);

    if(primo(n) == 2)
    {
        printf("\n- PRIMO");
    }
    else
    {
        printf("\n- NAO PRIMO");
    }

    printf("\n\n");
    return 0;
}

int primo(int n)
{
    int i,cont = 0;
    for(i = 1;i <= n;i++)
    {
        if(n % i == 0)
        {
            cont++;
        }
    }

    return cont;
}