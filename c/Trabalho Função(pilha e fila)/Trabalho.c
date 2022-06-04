#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main()
{

    INIT_PILHA();
    INIT_FILA();

    int trabalho = 0, valor, menu;
    int v_retornado;

    while (trabalho == 0)
    {
        system("cls");
        printf("\n\n");
        printf("---------------------------------");
        printf("\n1 - Inserir dados na pilha");
        printf("\n2 - Inserir dados na fila");
        printf("\n3 - Remover dados da pilha");
        printf("\n4 - Remover dados da fila");
        printf("\n5 - Visualizar os dados da pilha");
        printf("\n6 - Visualizar os dados da fila");
        printf("\n7 - Sair");
        printf("\n----------------------------------");
        printf("\n>");

        scanf("%i", &menu);

        switch (menu)
        {
        case 1:

            printf("[Inserir valor na pilha] ");
            printf("\n>");
            scanf("%i", &valor);

            
            
            if (PUSH(valor) == 1)
            {
                printf("Dado foi inserido com sucesso!");
                _sleep(1000);
            }
            else
            {
                printf("[ERRO]Pilha esta cheia!");
                _sleep(1000);
            }

            break;

        case 2:
            printf("[Inserir valor na fila] ");
            printf("\n>");
            scanf("%i", &valor);

            if(ENQUEUE(valor) == 1)
            {
                printf("Dado foi inserido com sucesso!");
                _sleep(1000);
            }
             else
            {
                printf("[ERRO]Fila esta cheia!");
                _sleep(1000);
            }
            
           

            break;

        case 3:

            
            v_retornado = POP();
            if(v_retornado != -1)
            {
                printf("O valor (%i) foi removido da pilha!", v_retornado);
                _sleep(1000);
            
            }
            else
            {
                printf("Nao e possivel retirar da pilha,ela esta vazia!");
                _sleep(1000);
            }
            break;

        case 4:

            v_retornado = DEQUEUE();

            if(v_retornado != -1)
            {
                printf("O valor (%i) foi removido da fila!", v_retornado);
                _sleep(1000);
            }
            else
            {
                printf("Nao e possivel retirar da fila,ela esta vazia!");
                _sleep(1000);
            }

            break;
            

        case 5:
            VIEW_LIFO();

            break;

        case 6:
            VIEW_FIFO();

            break;

        case 7:
            return 0;
        }
    }

    return 0;
}