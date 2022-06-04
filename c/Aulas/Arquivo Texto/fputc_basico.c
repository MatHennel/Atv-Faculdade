#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen("aula.txt","a+");

    if(fp == NULL)
    {
        printf("[ERRO] Nao possivel abrir o arquivo!");
        return 0;
    }

    fputc('\n',fp);
    fputc('X',fp);
    return 0;
}