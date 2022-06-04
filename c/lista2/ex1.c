#include <stdio.h>

int main(){

    int v1 , v2 ;

    printf("\nDigite um número: ");
    fflush(stdin) ;
    scanf( "%i" , &v1 );
    
    printf("- Quadrado = %i", v1*v1 );
    printf("\n- Cubo = %i", v1*v1*v1 ) ;

    printf("\n\nDigite um número: ");
    fflush(stdin);
    scanf("%i",&v2);
    printf("- Qudrado = %i" , v2*v2 );
    printf("\n- Cubo = %i ", v2*v2*v2 ) ;

    return 0;
}