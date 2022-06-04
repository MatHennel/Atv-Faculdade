#include <stdio.h>

int main(){

    float a , b;
    printf("Digite a temperatura em Celcius (ºC): ");
    fflush(stdin);
    scanf("%f",&a);

    b = (9*a + 160) / 5 ;

    printf("- Temperatura em Fahrenheit = %.1f" , b);


    return 0;
}