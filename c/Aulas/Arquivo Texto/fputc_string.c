#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[50];
    int a;

    fp = fopen("prog.txt","a+");

    if(fp == NULL)
    {
        printf("[ERRO] Nao possivel abrir o arquivo!");
        return 0;
    }

    printf("\nDigite um texto: ");
    fflush(stdin);
    gets(str);

    for(a = 0;str[a] != '\0';a++)
    {
        fputc(str[a],fp);
    }
    fputc('\n',fp);

    fclose(fp);
    printf("\n");
    return 0;
}