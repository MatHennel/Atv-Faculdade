#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[50];
    

    fp = fopen("aula.txt", "a+");

    if (fp == NULL)
    {
        printf("[ERRO] Nao foi possivel abrir o arquivo!");
        return 0;
    }

    fgets(str,50,fp);
    printf("%s",str);

    fclose(fp);
    return 0;
}