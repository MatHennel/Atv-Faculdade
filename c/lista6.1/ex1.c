#include <stdio.h>
#include <math.h>

int main()
{
    int n1 , n2 , div, contador;
    printf("Digite dois numeros: ");
    scanf("%i %i",&n1 , &n2);

    printf("Numeros primos entre (%i) e (%i): ",n1 , n2);

    if(n1<=n2)
    {

    
    while(n1 <= n2) 
    {
        contador = 0;
        div = 1;

        while(div <= n1)
        {
            if(n1 % div == 0)
            {
            contador++;
            }       
            
            div++;
        }
        
        if(contador == 2)
        {
            printf(" %i ", n1 );
        }            
        

        n1++;
    }

}
       else
       {

       
       while(n2 <= n1) 
    {
        contador = 0;
        div = 1;

        while(div <= n2)
        {
            if(n2 % div == 0)
            {
            contador++;
            }       
            
            div++;
        }
        
        if(contador == 2)
        {
            printf(" %i ", n2 );
        }            
        

        n2++;
    }
     
} 
   




    return 0;
}