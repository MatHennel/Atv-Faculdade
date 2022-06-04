#include <stdio.h>

int main() {
	

	int a , b , soma , sub , div , mult , res ;
    //float --> variável para números com vírgula
    //char --> variável para letras

    a = 10 ;
    b = 2 ;
    soma = a + b ;
    sub = a - b ; 
    mult = a * b ;
    div = a / b ;
    res = a % b ;

    printf("\nsoma : %i + %i = %i ", a , b , soma ) ;
    printf("\nsubtraçao: %i - %i = %i",a , b , sub );
    printf("\nmultiplicaçao : %i * %i = %i" , a , b , mult);
    printf("\ndivisao: %i / %i = %i" , a , b , div );
    printf("\nresto: %i %% %i = %i", a , b , res ); 
	
	
	
	return 0;
}