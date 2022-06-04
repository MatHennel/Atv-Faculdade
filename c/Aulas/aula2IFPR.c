#include <stdio.h>
#include <math.h>

int main()
{

    int quadrado, numero;

    printf("\n\tDigite um numero:");
    scanf("%i", &numero);

    quadrado = numero * numero;

    prinft("\n\tVoce digitou:%i", numero);
    printf("\n\tQuadrado de %i eh %i", numero, quadrado);

    ///////////////////////////////////////////////

    int resultado, numero, pot, raiz;

    printf("\n\tDigite um numero:");
    scanf("%i", &numero);

    printf("\n\tDigite uma potencia:");
    scanf("%i", &pot);

    resultado = pow(numero, pot);
    raiz = sqrt(numero);

    printf("\n\tVoce digiou: %i", numero);
    printf("\n\tResultado de %i elevado a %i eh igual a %i", numero, pot, resultado);
    printf("\n\tA raiz é %i ", raiz);

    ///////////////////////////////////////////////////////////

    double baixo, cima, y = 5.6;

    baixo = floor(y);
    cima = ceil(y);

    printf("%5.1lf - %5.1lf", baixo, cima);

    double seno, cosseno;

    seno = sin(3.14 / 6); //o valor tem q ser em radiano
    cosseno = cos(3.15 / 6);

    return 0;
}