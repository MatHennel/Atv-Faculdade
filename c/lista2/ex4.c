#include <stdio.h>

int main(){

    int a , b , c , n , r ;
    printf("Digite um número (3 dígitos): ");
    fflush(stdin);
    scanf("%i", &n);

    a = n / 100 ; 
    b = n % 100 / 10 ; 
    c = n % 10 ;
    r = a + b + c ;

    printf("- Soma = %i + %i + %i = %i", a , b , c , r);


    return 0;
}