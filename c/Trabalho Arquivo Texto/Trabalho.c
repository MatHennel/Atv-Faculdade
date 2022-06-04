#include <stdio.h>
#include <stdlib.h>

int busca(char base[50]);

int main()
{
    char base[50], fim;
    int sequencia = 0;

    do
    {
        printf("\n---------------------------------");
        printf("\n - Bases Nitrogenadas => A U C G -");
        printf("\n---------------------------------");
        printf("\n - Digite a sequencia: ");
        fflush(stdin);
        gets(base);
        printf(" - Buscando(%s)...", base);
        _sleep(2000);
        sequencia = busca(base);
        printf("\n - Total de ocorrencias [%s] = %i", base, sequencia);
        printf("\nDeseja efetuar uma nova analise (s) ou (n)? ");
        fflush(stdin);
        scanf("%c", &fim);
        printf("\n\n");

    } while (fim != 'n' && fim != 'N');

    return 0;
}

int busca(char base[50])
{
    FILE *fp;
    fp = fopen("sars-cov-2_win.txt", "a+");
    char c;
    int cont = 0, i = 0, sequencia = 0;

    for (i = 0; base[i] != '\0'; i++)
    {
        cont++;
    }
    
    do
    {
        c = fgetc(fp);
        if(c == '\n'){c = fgetc(fp);}
        if (c == base[i])
        {
            i++;
            if (i == cont)
            {
                sequencia++;
                i = 0;
                
            }
            
        }
        else if(c != base[i])
        {
            fseek(fp,(c * -1),SEEK_CUR);
            i = 0;
        }

    } while (c != EOF);

    return sequencia;
}