#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    // ["w"] = Abre/cria  o arquivo e não mantém o conteúdo
    fp = fopen("aula.txt","w");
    
    if(fp == NULL)
    {
        printf("[ERRO] Nao foi possivel abrir o arquivo!");
        return 0;
    }

    fclose(fp);
    return 0;
}