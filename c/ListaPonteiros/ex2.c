#include <stdio.h>

int main()
{
    int n1,n2,*ptr_n1,*ptr_n2;
    
    ptr_n1 =&n1;
    ptr_n2 =&n2;


    printf("\nDigite dois valores inteiros: ");
    scanf("%i %i",&n1,&n2);

    printf("\n- Soma = %i",*ptr_n1 + *ptr_n2);

    



    printf("\n\n");
    return 0;
}