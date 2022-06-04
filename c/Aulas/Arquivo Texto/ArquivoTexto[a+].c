#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    // ["a"] = Abre/cria  o arquivo e mantém o conteúdo
    fp = fopen("aula.txt","a+");
    
    if(fp == NULL)
    {
        printf("[ERRO] Nao foi possivel abrir o arquivo!");
        return 0;
    }

    fclose(fp);
    return 0;
}