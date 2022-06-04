#include <stdio.h>

int main()
{
    int altura , ast , lin, esp , topo , flag1 = 1,flag2 = 0, flag3, flag4 , cont;

    printf("Digite a altura(impar): ");
    scanf("%i",&altura);
    
    for(cont = 1;altura % 2 == 0;cont++)
    {
        printf("Digite a altura(impar): ");
        scanf("%i",&altura);

        if(cont >= 2)
        {
            printf("Voce esta digitando um numero par,por favor, digite um numero impar: ");
            scanf("%i",&altura);
        }
    } 
     
    
    
    for(topo = 1; topo <= altura;topo = topo + 2)
    {
        esp = (altura - flag1)/2 ;
        esp = esp - flag2;
        for(;esp >= 1 ; esp--)
        {
            printf(" ");
        }
        
        for(ast = 1;ast <= topo;ast++)
        {
            printf("*");

        }
        printf("\n");   
        
        flag2++;
    }

    
    flag4 = 1;
    for(topo = altura - 2;topo >= 1;topo = topo - 2)
    {
        for(flag3 = 1;flag3 <= flag4;flag3++)
        {
            printf(" ");
        }
        for(ast = 1;ast <= topo;ast++)
        {
            printf("*");
        }
        
        printf("\n");
        flag4++;
    }
    
    
    

    
    

    
        

    
        
        

 

   

    return 0;
}