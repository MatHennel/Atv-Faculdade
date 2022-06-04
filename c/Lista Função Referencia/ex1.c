#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void baskhara(int a,int b,int c, double *x1, double *x2);

int main()
{
    int a,b,c;
    double x1,x2;
    printf("\nDigite os coeficientes (a), (b) e (c): ");
    fflush(stdin);
    scanf("%i %i %i",&a,&b,&c);
    baskhara(a,b,c,&x1,&x2);
    printf("- Raizes: (x1) = %.1lf",x1);
    printf("\n          (x2) = %.1lf",x2);
    return 0;
}

void baskhara(int a,int b,int c, double *x1, double *x2)
{
    *x1 = (-b + sqrt(pow(b,2) - 4 * a * c))/(2*a);
    *x2 = (-b - sqrt(pow(b,2) - 4 * a * c))/(2*a);

    
}