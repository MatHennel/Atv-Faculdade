#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, r1, r2, delta;
    
    printf("coeficiente (a, b, c):");
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    fflush(stdin);

    delta = (pow(b, 2) - 4 * a * c);
    
    r1 = (-b + sqrt(delta)) / (2 * a);
    
    r2 = (-b - sqrt(delta)) / (2 * a);
    
    printf("\n -raizes=%.1lf %.1lf ", r1, r2);

    return 0;
}