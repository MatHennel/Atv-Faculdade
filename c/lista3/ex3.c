#include <stdio.h>
#include <math.h>

int main()
{

    double ca, co, resultado;
    printf("Catetos (CO CA):");
    scanf("%lf %lf", &co, &ca);
    fflush(stdin);

    resultado = sqrt(pow(co,2) + pow(ca,2));
    printf("- Hipotenusa = %.1lf", resultado);

    return 0;
}