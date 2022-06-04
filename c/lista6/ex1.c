#include <stdio.h>
#include <math.h>

int main()
{

    int n , maior , menor , contador1 = 1 , contador2 = 1;

   printf("Digite um numero: ");
   scanf("%i", &n);
   fflush(stdin);

   while(n < 0)
   {
       if(contador1 < 3)
        {
        printf("\nNumero invalido\nDigite outro numero: ");
        scanf("%i",&n);
        
        }
        
        if(contador1 > 3)
        
       {
           printf("\nVoce digitou muitos numeros negativos , digite um positivo para iniciar o programa: ");
           scanf("%i",&n);
           
       }
       contador1++;
   }
   
   while ( n > -1)
   {
       
    if(contador2 == 1)
        {
            maior = n;
            menor = n;
        } 
        
        else if(n > maior)
        {
            maior = n;
        }
        else if(n < menor && n > 0)
        {
            menor = n;
        }

        printf("Digite um numero positivo para continuar ou um numero negativo para sair: ");
        scanf("%i", &n);
        fflush(stdin);
        contador2++;
    }
        
    if(contador2 > 1)
    {
        printf("\n\tMaior: %i \n\tMenor: %i",maior ,menor);
    }
   
   /*do 
   {
        printf("Numero: ");
        scanf("%i", &n);
        fflush(stdin);

        if(contador == 1)
        {
            menor = n;
            maior = n;
        }

        
        if(n > maior)
        {
            maior = n;
        }
        else if(n < menor && n > 0)
        {
            menor = n;        
        }
        
        
        contador++;
    } while (n > -1);

    if(contador > 2)
    {
    printf("\n\tMaior: %i", maior );
    printf("\n\tMenor: %i", menor);
    }*/

    return 0;   
}