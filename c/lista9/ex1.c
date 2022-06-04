#include <stdio.h>

#define TAM 50

int main()
{
    int  cont = 0, ind ;
    char frase[TAM], let1 , let2;

    printf("\nDigite a frase: ");
    gets(frase);
    fflush(stdin);

    printf("Digite o caractere: ");
    scanf("%c", &let1);
    fflush(stdin);

    if(let1 > 96)
    {
        let2 = let1 - 32;
    }
    else
    {
        let2 = let1 + 32;
    }

    for(ind = 0 ; frase[ind] != '\0' ; ind++)
    {
        if(let1 == frase[ind] || let2 == frase[ind])
        {
            cont++;
        }
        
    }

    printf("- O caractere (%c) foi encontrado (%i) veze(s)!" , let1 , cont);


    return 0;
}