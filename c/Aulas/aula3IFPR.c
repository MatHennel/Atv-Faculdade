#include <stdio.h>
#include <math.h>

// a == 0: se dois valores sao iguais(==)
// a != 0: se dois valores são difretens(!=)
// a > 0: se um valor é maior que o outro (>)
// a < 0: se um valor é menor que o outro (<)
// a >= 0: se um valor é maior ou igual ao outro (>=)
// a <= 0: se um valor é menor ou igual ao outro (<=)

int main()
{
    char conc = 'D';
    printf("\nSeu conceito:");
    scanf("%c", &conc);

    if (conc == 'D')
    {
        printf("Reprovado!\n\n");
    }
    else if (conc == 'C')
    {
        printf("Aprovado\n\n");
    }
    else if (conc == 'B')
    {
        printf("Aprovado!\n\n");
    }
    else if (conc == 'A')
    {
        printf("Aprovado!\n\n");
    }
    else
    {
        printf("Conceito Inválido!\n\n");
    }

    return 0;
}