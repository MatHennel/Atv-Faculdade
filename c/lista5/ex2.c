#include <stdio.h>
#include <math.h>

int main()
{
    int idade ; 
    printf("Digite a idade: ");
    scanf("%i",&idade);
    fflush(stdin);

    if(idade >= 0 && idade <=11)
    {
        printf("\n- Crianca");
    }

    else if(idade >= 12 && idade <= 17)
    {
        printf("\n- Adolescente");
    }

    else if(idade >= 18 && idade <= 59)
    {
        printf("\n- Adulto");
    }

    else if(idade >= 60)
    {
        printf("\n- Idoso");
    }

    else
    {
        printf("\n [ERRO]  \nIdade invalida");
    }




    printf("\n\n");
    return 0;
}