#include <stdio.h>

int main()
{
    int num,*ptr_num;
    char car,*ptr_char;

    ptr_num = &num;
    ptr_char = &car;
    
    printf("\nDigite um numero e um caracter:");
    scanf("%i %c",&num,&car);
    printf("\n- [Inteiro]: Endereco = %p / Conteudo = %i",ptr_num,*ptr_num);
    printf("\n- [Caractere]: Endereco = %p / Conteudo = %c",ptr_char,*ptr_char);


    




    return 0;
}