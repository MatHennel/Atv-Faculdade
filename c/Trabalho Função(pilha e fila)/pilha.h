#ifndef _PILHA_
#define _PILHA_

#include <stdio.h>
#include <stdlib.h>
#define TAM 4   

int pp,*pilha;


void INIT_PILHA()
{
    
    pp = 0;
    pilha = malloc(1 * sizeof(int));
    
}

int PUSH(int dado)
{
   if(pp < TAM) 
    {
        
        pilha[pp] = dado;
        pp++;
        pilha = realloc(pilha, (pp + 1) * sizeof(int));
        
        
        return 1;
    }
    
    return -1;
}

int POP()
{
    if(pp > 0)
    {
        int valor_r;
        valor_r = pilha[pp - 1];
        pilha[pp] = NULL;
        pilha = realloc(pilha,(pp) * sizeof(int));
        pp--;    
        return valor_r;
    }
    else
    {
        return -1;
    }
    
    
    
    
}

void VIEW_LIFO()
{
    system("cls");
    int i;
    printf("PILHA");
    for(i = pp - 1 ;i >= 0;i--)
    {
        printf("\n|%i|",pilha[i]);
        
    }
    printf("\nAperte enter para voltar para o menu!");
    fflush(stdin);
    getchar();
}

#endif