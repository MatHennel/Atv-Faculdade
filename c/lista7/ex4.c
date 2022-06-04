#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7 ,cont1 = 1,cont2;
    printf("\n");
    printf("Digite 7 numeros entre 1 a 1000: ");
    scanf("%i %i %i %i %i %i %i", &n1, &n2, &n3, &n4, &n5, &n6, &n7);
    printf("\n");

    for(;(n1 < 1 || n1 > 1000) || (n2 < 1 || n2 > 1000) || (n3 < 1 || n3 > 1000) || (n4 < 1 || n4 > 1000) || (n5 < 1 || n5 > 1000) || (n6 < 1 || n6 > 1000) || (n7 < 1 || n7 > 1000) ;)
    {
        if(cont1 < 3)
        {
            printf("Digite 7 numeros entre 1 a 1000: ");
            scanf("%i %i %i %i %i %i %i", &n1, &n2, &n3, &n4, &n5, &n6, &n7);
            printf("\n");
        }
        

        if(cont1 >= 3)
        {
            printf("Voce esta digitando um(s) numero(s) que nao esta(o) entre 1 e 1000\npor favor,digite novamente: ");
            scanf("%i %i %i %i %i %i %i", &n1, &n2, &n3, &n4, &n5, &n6, &n7);
            printf("\n");
        }
        cont1++;
    } 

    for(cont2 = 0;cont2 <= n1 || cont2 <= n2 || cont2 <= n3 || cont2 <= n4 || cont2 <= n5 || cont2 <= n6 || cont2 <= n7; cont2++)
    {
         if(cont2 == 0)
            {
                printf("- Ordem crescente: ");
            }
            else
            {
                if(cont2 == n1)
                {
                    printf(" %i ",n1);
                }
                    else if(cont2 == n2)
                    {
                        printf(" %i ",n2);
                    }
                        else if(cont2 == n3)
                        {
                            printf(" %i ",n3);
                        }

                            else if(cont2 == n4)
                            {
                                printf(" %i ",n4);
                            }
                                else if(cont2 == n5)
                                {
                                    printf(" %i ",n5);
                                }
                                    else if(cont2 == n6)
                                    {
                                        printf(" %i ",n6);
                                    }
                                        else if(cont2 == n7)
                                        {
                                            printf(" %i ",n7);
                                        }
            }

    }
    printf("\n\n");
    return 0;
}