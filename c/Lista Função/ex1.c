#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pitagoras(int ,int );

int main()
{
    int c1,c2;


    printf("Digite valor dos catetos: ");
    scanf("%i %i",&c1,&c2);


    printf("- Hipotenusa: %.1lf", pitagoras(c1,c2));


    return 0;
}

    double pitagoras(int c1,int c2)
    {
        double hip;

        hip = sqrt(pow(c1,2) + pow(c2,2));

    return hip;

    }
