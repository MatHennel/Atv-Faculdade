#include <stdio.h>
#include <math.h>

int main()
{
    int n1 , n2 ;
    printf("Digite os dois dias: ");
    scanf("%i %i",&n1 , &n2);
    fflush(stdin);

    if( n1 == 1 && n2 == 1)
    {
        printf("[Domingo, Domingo]"); 
    }
     else if( n1 == 1 && n2 == 2)
    {
        printf("[Domingo, Segunda]");
    }
     else if( n1 == 1 && n2 == 3)
    {
        printf("[Domingo, Terça]");
    }
     else if( n1 == 1 && n2 == 4)
    {
        printf("[Domingo, Quarta]");
    }
    else if( n1 == 1 && n2 == 5)
    {
        printf("[Domingo, Quinta]");
    }
    else if( n1 == 1 && n2 == 6)
    {
        printf("[Domingo, Sexta]");
    }
    else if( n1 == 1 && n2 == 7)
    {
        printf("[Domingo, Sábado]");
    }
    else if( n1 == 2 && n2 == 2)
    {
        printf("[Segunda, Segunda]");
    }
    else if( n1 == 2 && n2 == 1)
    {
        printf("[Segunda, Domingo]");
    }
    else if( n1 == 2 && n2 == 3)
    {
        printf("[Segunda, Terça]");
    }
    else if( n1 == 2 && n2 == 4)
    {
        printf("[Segunda, Quarta]");
    }
    else if( n1 == 2 && n2 == 5)
    {
        printf("[Segunda, Quinta]");
    }
    else if( n1 == 2 && n2 == 6)
    {
        printf("[Segunda, Sexta]");
    }
    else if( n1 == 2 && n2 == 7)
    {
        printf("[Segunda, Sábado]");
    }
    else if( n1 == 3 && n2 == 3)
    {
        printf("[Terça, Terça]");
    }
    else if( n1 == 3 && n2 == 1)
    {
        printf("[Terça, Domingo]");
    }
    else if( n1 == 3 && n2 == 2)
    {
        printf("[Terça, Segunda]");
    }
    else if( n1 == 3 && n2 == 4)
    {
        printf("[Terça, Quarta]");
    }
    else if( n1 == 3 && n2 == 5)
    {
        printf("[Terça, Quinta]");
    }
    else if( n1 == 3 && n2 == 6)
    {
        printf("[Terça, Sexta]");
    }
    else if( n1 == 3 && n2 == 7)
    {
        printf("[Terça, Sabado]");
    }
    else if( n1 == 4 && n2 == 4)
    {
        printf("[Quarta, Quarta]");
    }
    else if( n1 == 4 && n2 == 1)
    {
        printf("[Quarta, Domingo]");
    }
    else if( n1 == 4 && n2 == 2)
    {
        printf("[Quarta, Segunda]");
    }
    else if( n1 == 4 && n2 == 3)
    {
        printf("[Quarta, Terça]");
    }
    else if( n1 == 4 && n2 == 5)
    {
        printf("[Quarta, Quinta]");
    }
    else if( n1 == 4 && n2 == 6)
    {
        printf("[Quarta, Sexta]");
    }
    else if( n1 == 4 && n2 == 7)
    {
        printf("[Quarta, Sabado]");
    }
    else if( n1 == 5 && n2 == 5)
    {
        printf("[Quinta, Quinta]");
    }
    else if( n1 == 5 && n2 == 1)
    {
        printf("[Quinta, Domingo]");
    }
    else if( n1 == 5 && n2 == 2)
    {
        printf("[Quinta, Segunda]");
    }
    else if( n1 == 5 && n2 == 3)
    {
        printf("[Quinta, Terça]");
    }
    else if( n1 == 5 && n2 == 4)
    {
        printf("[Quinta, Quarta]");
    }
    else if( n1 == 5 && n2 == 6)
    {
        printf("[Quinta, Sexta]");
    }
    else if( n1 == 5 && n2 == 7)
    {
        printf("[Quinta, Sabado]");
    }
    else if( n1 == 6 && n2 == 6)
    {
        printf("[Sexta, Sexta]");
    }
    else if( n1 == 6 && n2 == 1)
    {
        printf("[Sexta, Domingo]");
    }
    else if( n1 == 6 && n2 == 2)
    {
        printf("[Sexta, Segunda]");
    }
    else if( n1 == 6 && n2 == 3)
    {
        printf("[Sexta, Terça]");
    }
    else if( n1 == 6 && n2 == 4)
    {
        printf("[Sexta, Quarta]");
    }
    else if( n1 == 6 && n2 == 5)
    {
        printf("[Sexta, Quinta]");
    }
    else if( n1 == 6 && n2 == 7)
    {
        printf("[Sexta, Sabado]");
    }
    else if( n1 == 7 && n2 == 7)
    {
        printf("[Sabado, Sabado]");
    }
    else if( n1 == 7 && n2 == 1)
    {
        printf("[Sabado, Domingo]");
    }
    else if( n1 == 7 && n2 == 2)
    {
        printf("[Sabado, Segunda]");
    }
    else if( n1 == 7 && n2 == 3)
    {
        printf("[Sabado, Terça]");
    }
    else if( n1 == 7 && n2 == 4)
    {
        printf("[Sabado, Quarta]");
    }
    else if( n1 == 7 && n2 == 5)
    {
        printf("[Sabado, Quinta]");
    }
    else if( n1 == 7 && n2 == 6)
    {
        printf("[Sabado, Sexta]");
    }
    else if( (n1 < 1 || n1 > 7) && n2 == 1)
    {
        printf("[Invalido, Domingo]");
    }
    else if( (n1 < 1 || n1 > 7) && n2 == 2)
    {
        printf("[Invalido, Segunda]");
    }
    else if( (n1 < 1 || n1 > 7) && n2 == 3)
    {
        printf("[Invalido, Terça]");
    }
    else if( (n1 < 1 || n1 > 7) && n2 == 4)
    {
        printf("[Invalido, Quarta]");
    }
    else if( (n1 < 1 || n1 > 7) && n2 == 5)
    {
        printf("[Invalido, Quinta]");
    }
    else if( (n1 < 1 || n1 > 7) && n2 == 6)
    {
        printf("[Invalido, Sexta]");
    }
    else if( (n1 < 1 || n1 > 7) && n2 == 7)
    {
        printf("[Invalido, Sabado]");
    }
    else if( (n1 == 1) && (n2 < 1 || n2 > 7))
    {
        printf("[Domingo, Invalido]");
    }
    else if( (n1 == 2) && (n2 < 1 || n2 > 7))
    {
        printf("[Segunda, Invalido]");
    }
    else if( (n1 == 3) && (n2 < 1 || n2 > 7))
    {
        printf("[Terça, Invalido]");
    }
    else if( (n1 == 4) && (n2 < 1 || n2 > 7))
    {
        printf("[Quarta, Invalido]");
    }
    else if( (n1 == 5) && (n2 < 1 || n2 > 7))
    {
        printf("[Quinta, Invalido]");
    }
    else if( (n1 == 6) && (n2 < 1 || n2 > 7))
    {
        printf("[Sexta, Invalido]");
    }
    
    else if( (n1 == 7) && (n2 < 1 || n2 > 7))
    {
        printf("[Sabado, Invalido]");
    }
    else if( (n1 < 1 || n1 > 7) && (n2 < 1 || n2 > 7))
    {
        printf("[Invalido, Invalido]");
    }


    return 0;
}