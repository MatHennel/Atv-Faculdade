#include <stdio.h>

int main()
{
    int nt , n1 = 1 , n2 = 1, n3 = n1 + n2, cont;
    
    printf("\n");
    printf("Numero de termos: ");
    scanf("%i" , &nt);

    printf("\n");
    printf("- Serie de Fibonacci[%i]: 1  1 ",nt);

    for(cont = 2;cont < nt; cont++)
    {
        printf(" %i ",n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }



    printf("\n\n");
    return 0;
}