#include <stdio.h>
#include <math.h>

double fatorial(int );
double maiorPrimo(int );

int main()
{
    int n1,n2;
    printf("\nFatorial: ");
    scanf("%i",&n1);
    printf("Maior primo: ");
    scanf("%i",&n2);

    printf(" - Resultado: %.0lf x %.0lf  = %.0lf",fatorial(n1),maiorPrimo(n2),fatorial(n1) * maiorPrimo(n2));
    
    return 0;
}

double fatorial(int n1)
{
    int i;
    double somafat = 1;

    for(i = n1;i > 1;i--)
    {
        somafat = somafat * i;
    }

    return somafat;
}

double maiorPrimo(int n2)
{
    int i,mprimo,cont;

    for(i = 2;i <= n2;i++)
    {
        int cont2 = 0;
       
        for(cont = 1;cont <= i;cont++)
        {
            if(i % cont == 0)
            {
                cont2++;
            }
            
        }
            if(cont2 == 2)
            {
                mprimo = i;
            }
    }
    return mprimo;
}