#include <stdio.h>
#include <math.h>

int main()
{
    int n , l1 , l2 , l3 ;
    printf("Lados do triangulo: ");
    scanf("%i",&n);
    fflush(stdin);

    l1 = n / 100 ; // Primeiro número

    l2 = (n % 100)/10;//Segundo número

    l3 = n % 10; // Terceiro número

    if(l1 == l2 && l1 == l3)
    {
        printf("- Equilatero");
    } 
    else if((l1 == l2 && l1 != l3) || (l2 != l1 && l2 == l3) || (l3 == l1 && l3 != l2))
    {
        printf("- Isosceles");
    }
    else if(l1 != l2 && l2 != l3 && l1 != l3)
    {
        printf("- Escaleno");
    } 







    return 0;
}