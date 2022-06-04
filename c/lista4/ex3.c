#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    printf("\n\n");
    
    
    printf("Digite um numero: ");
    scanf("%i",&n);

    if((n % 2) == 0)
    {
        printf("- PAR");
    }
    else
    {
        printf("-IMPAR");
    }

    
    printf("\n\n");
    return 0;
}