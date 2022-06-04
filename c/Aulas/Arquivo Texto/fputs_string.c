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
    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(str);
    
    fputs(str,fp);
    fputs("\n",fp);
   

    fclose(fp);
    return 0;
}