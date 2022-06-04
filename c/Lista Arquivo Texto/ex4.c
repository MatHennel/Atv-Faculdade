#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

int main()
{
    int sair = 0, option;
    while (sair == 0)
    {
        system("cls");
        printf("---------------------------------");
        printf("\n(1) - Cadastrar Aluno");
        printf("\n(2) - Cadastrar Disciplina");
        printf("\n(3) - Visualizar Alunos e Disciplinas");
        printf("\n(4) - Matricular Aluno");
        printf("\n(5) - Visualizar Matriculas");
        printf("\n(6) - Sair");
        printf("\n---------------------------------");
        printf("\n>");
        fflush(stdin);
        scanf("%i", &option);
        printf("---------------------------------");
        printf("\n");

        switch(option)
        {
            case 1:
                cadastro_Aluno();
                break;

            case 2:
                cadastro_Disciplina();
                break;

            case 3:
                view_Alun_Disc();
                
                break;

            case 4:
                matricular_Aluno();

                break;

            case 5:
                View_Matriculas();

                break;
            
            case 6:
                sair = 1;
                break;
        }
    }

    return 0;
}
