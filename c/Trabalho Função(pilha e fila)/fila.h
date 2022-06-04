#ifndef _FILA_
#define _FILA_

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int pf;
int *fila;

int INIT_FILA()
{
    pf = 0;
    fila = malloc(1 * sizeof(int));
}

int ENQUEUE(int dado)
{
    if(pf < TAM) 
    {
        fila[pf] = dado;
        pf++;
        fila = realloc(fila, (pf + 1) * sizeof(int));
        return 1;
    }
    
    return -1;
}

int DEQUEUE()
{
    
    int valor_r,i,mem;
    
    if(pf > 0)
    {
        
        valor_r = fila[0];
        fila[0] = NULL;
        if(pf > 1)
        {
            for(i = 0;i < pf;i++)
            {
                fila[i] = fila[i + 1];
            }
        }
        
        fila = realloc(fila,(pf) * sizeof(int));
        pf--;    
        return valor_r;
    }
    else
    {
        return -1;
    }
}

void VIEW_FIFO()
{
    system("cls");
    int i;
    printf("FILA\n");
    for(i = 0;i < pf;i++)
    {
        printf("%i ",fila[i]);
        
    }
    printf("\nAperte enter para voltar para o menu");
    fflush(stdin);
    getchar();
}

#endif