#include <stdio.h>
#include <math.h>

int main()
{

    float nota;
    printf("Digite a nota media: ");
    scanf("%f", &nota);

    if(nota >= 6.0 && nota <= 10){
        printf("- Aprovado");
    }
    else if(nota < 6.0 && nota >= 4.0){
        printf("- Recuperaçao");
    }else if(nota < 4.0 && nota >=0){
        printf("- Reprovado");
    }else{
        printf("[ERRO]Nota invalida!");
    }



    return 0;
}