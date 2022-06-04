#include <stdio.h>
#include <math.h>

int main()
{
    int a ;

    do
    {
        printf("1 - Saque \n2 - Depósito \n3 - Transferencia \n4 - Extrato \n5 - Sair\n>");

        scanf("%i",&a);
        if(a < 0 || a > 5)
        {
            printf("\n[Opcao Invalida] \n Digite Novamente\n");
        }
        fflush(stdin);
        printf("\n");
    }while(a != 5);

        








    return 0;
}