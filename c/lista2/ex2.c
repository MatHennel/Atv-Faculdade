#include <stdio.h>

int main(){

     char a,b,c ;
     printf("Digite três letras:");
     fflush(stdin);
     scanf("%c %c %c", &a , &b , &c);

     printf("\n- Combinação 1 = %c%c%c", a, b, c);
     printf("\n- Combinação 2 = %c%c%c", a, c, b);
     printf("\n- Combinação 3 = %c%c%c", b, a, c);
     printf("\n- Combinação 4 = %c%c%c", b, c, a);
     printf("\n- Combinação 5 = %c%c%c", c, a, b);
     printf("\n- Combinação 6 = %c%c%c", c, b, a);



    return 0;
}