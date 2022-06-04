#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));      //semente de valor aleatório

    int vetor[12]/*vetor principal*/ , ind , ordem[12]/*vetor secundario*/ , ord, flag; 
    printf("\n- Vetor aleatorio: ");

    for(ind = 0;ind < 12;ind++)     //Laço para acrecentar valor ao ind do vetor principal
    {
        vetor[ind] = 10 + rand() % 80;      //Valor aleatório sendo acrescentado em cada ind do vetor
        printf("%i ",vetor[ind]);
    }

    printf("\n- Vetor ordenado: ");
   
     
    for(ord = 0;ord < 12;ord++)     //Laço para acrescentar em ordem descresente o maior valor do vetor principal para o vetor secundario 
    {
        ordem[ord] = 0;         //Toda vez que recomeçar o laço , o valor d cada variavel dentro do vetor ordem, será 0 , para poder entrar na condição daqui a pouco
        
        for(ind = 0;ind < 12;ind++)     //Laço para verificar os valores do vetor principal , para pegarmos o maior valor 
        {
            if(vetor[ind] > ordem[ord])     //condição para acrescentar o maior valor do vetor principal, em ordem para o vetor secundario
            {
                ordem[ord] = vetor[ind];
            }
        }
        flag = 0;   //flag que irá ser usado , para se houver números repetidos , não transformar os outros em 0 , pois irá pegar apenas o primeiro valor igual e transformar todos em 0
        
        for(ind = 0;ind < 12;ind++)     //laço para transformar o maior valor do vetor principal em 0 , pois se não fizer , todas as variáveis do vetor secundário terão o maior valor apenas,todos terão o msm valor
        {
           if(flag == 0)    //condição para transoformar apenas uma vez o valor em 0 , pois se houver numeros repetidos , eles serão acrescentados na proximas variáveis depois
           {
               if(ordem[ord] == vetor[ind])     //Condição para quando o maior valor do momento da secundaria for igual o valor da principal , transformar em 0 , para ir pegando os menores que ele nas proximas repetições
                {
                    vetor[ind] = 0;
                    flag = 1;
                } 
                
           }
           
        }
        printf("%i ",ordem[ord]);

       
    }
    
    return 0;
} 


/*int main()
{
    srand(time(NULL));

    int vetor[12] , ind , cont, flag = 0;

    printf("- Vetor aleatorio: ");

    for(ind = 0;ind < 12;ind++)
    {
        vetor[ind] = 10 + rand() % 99;
        printf("%i ",vetor[ind]);
    }

    for(cont = 99;cont > 10;cont--)
    {
        if(flag == 0)
        {
            printf("\n -Vetor ordenado: ");
            flag = 1;
        }
        
        if(cont == vetor[0])
        {
            printf("%i ",vetor[0]);
        }
        
            else if(cont == vetor[1])
            {
                printf("%i ",vetor[1]);
            }
        
            else if(cont == vetor[2])
            {
                printf("%i ",vetor[2]);
            }
            else if(cont == vetor[3])
            {
                printf("%i ",vetor[3]);
            }

            else if(cont == vetor[4])
            {
                printf("%i ",vetor[4]);
            }

        else if(cont == vetor[5])
        {
            printf("%i ",vetor[5]);
        }
        else if(cont == vetor[6])
        {
            printf("%i ",vetor[6]);
        }
        else if(cont == vetor[7])
        {
            printf("%i ",vetor[7]);
        }
        else if(cont == vetor[7])
        {
            printf("%i ",vetor[7]);
        }
        else if(cont == vetor[8])
        {
            printf("%i ",vetor[8]);
        }
        else if(cont == vetor[9])
        {
            printf("%i ",vetor[9]);
        }
        else if(cont == vetor[10])
        {
            printf("%i ",vetor[10]);
        }
        else if(cont == vetor[11])
        {
            printf("%i ",vetor[11]);
        }
        else if(cont == vetor[12])
        {
            printf("%i ",vetor[12]);
        }
    }
    return 0;
}*/
