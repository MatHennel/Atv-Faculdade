#include <stdio.h>
#include <math.h>

int main()
{
    int base , topo , contador1 ,contador3 ,contador4 = 0;
    printf("Base e Topo: ");
    scanf("%i %i",&base , &topo);
    printf("\n");

    while(base == topo)
    {
        printf("Numero invalido , digite novamente");
        printf("\nBase e Topo: ");
        scanf("%i %i",&base , &topo);
        printf("\n");
    }
    
    if(base < topo)
    {
        
        while(topo >= base)
        {
            contador3 = 0;
            while(contador3 < contador4)
            {
                printf(" ");
                contador3++;
            }  
            contador4++; 
                
            
            
            contador1 = 1;
            while(contador1 <= topo)
            {
                printf("* ");
                contador1++;
            }
            printf("\n");
            
            topo--;
            
           
        }    


    }
    
    else
    {
        while(topo <= base)
        {
            contador3 = base - topo;
            while(contador3 > 0)
            {
                printf(" ");
                contador3--;
            }
        
            contador1 = 1;
            while(contador1 <= topo)
            {
                printf("* ");
                contador1++;
            }
            printf("\n");
            topo++;
        }
        
        printf("\n");
    }    
        
    printf("\n");
    return 0;
}