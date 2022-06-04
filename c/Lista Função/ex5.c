#include <stdio.h>
#define RED   "\x1B[31m"
#define RESET "\x1B[0m"


int agregar(int , int);

int main()
{
    int n1, n2,cont = 0;

    do
    {
        if(cont < 3)
        {
            printf("Digite 2 numeros inteiros com 3 digitos: ");
            fflush(stdin);
            scanf("%i %i",&n1 , &n2);
        }
        else
        {
            printf(RED "VOCE ESTA DIGITANDO UM NUMERO INVALIDO,POR FAVOR DIGITE OS NUMEROS COM 3 DIGITOS APENAS: " RESET);
            fflush(stdin);
            scanf("%i %i",&n1 , &n2);
        }
       
        cont++;
    }while((n1 < 100 || n1 > 999) || (n2 < 100 || n2 > 999));

    agregar(n1,n2);
    

    return 0;
}

int agregar(int n1, int n2)
{
    int centenas1 = n1 / 100, centenas2 = n2 / 100, dezenas1 = (n1 / 10) % 10, dezenas2 = (n2 / 10) % 10 , unidades1 = n1 % 10,unidades2 = n2 % 10;

   int soma1 = 0,soma2 = 0,soma3 = 0;

   soma1 = centenas1 + centenas2;

   if(soma1 >= 10)
   {
       soma1 = 0;
   }

   soma2 = dezenas1 + dezenas2;

   if(soma2 >= 10)
   {
       soma2 = 0;
   }

   soma3 = unidades1 + unidades2;

   if(soma3 >= 10)
   {
       soma3 = 0;
   }

   

    printf( "\n- Resultado: %i%i%i",soma1,soma2,soma3);
}