#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    // ["r"] = Abre o arquivo se exister e mantém o conteúdo
    fp = fopen("aula.txt","r");
    
    if(fp == NULL)
    {
        printf("\n[ERRO] Nao foi possivel abrir o arquivo!");
        return 0;
    }

    fclose(fp);
    return 0;
}