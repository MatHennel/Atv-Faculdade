#include <stdio.h>

int main () {

int v1 , v2 , v3 , v4 , v5 = 10 , v6 = -200 ;

v1 = v5 + v6 ; //Soma de 10 + (-200) = -190
v2 = v5 - v6 ; // Subtração de 10 - (-200) = 210
v3 = v5 * v6 ; // Multiplicação de 10 x -200 = -1900
v4 = v6 / v5 ; //Divisão de -200 / 10 = -20

printf("\n>Valor de (v6) = %i",v6);
printf("\n>Valor de (v5) = %i",v5);
printf("\n>Soma: %i + %i = %i",v5 , v6 , v1);
printf("\n>Subtração: %i - %i = %i",v5 , v6 , v2);
printf("\n>Multiplicação: %i * %i = %i", v5, v6, v3);
printf("\n>Divisão: %i / %i = %i" , v6 , v5 , v4);



    return 0 ;
}