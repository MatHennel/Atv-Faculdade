#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h>
#define TAM 5
#define COR_VERDE   printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_ROXA    printf("\33[35m");
#define COR_BRANCO  printf("\33[37m");

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int main()
{
    srand(time(NULL));
    char m[TAM][TAM];
    int l,c,v[TAM],i,m1[TAM][TAM],m2[TAM][TAM],pl = 0,pc = 0,jogo = 0,jogada = 0,l1,c1,l2,c2,erro = 0,erro1 = 0;


    for(l = 0;l < TAM;l++)
    {
        for(c = 0;c < TAM;c++)
        {
            m[l][c] = 35;
            m1[l][c] = 7;
            m2[l][c] = 7;
        }
    }

    for(i = 0;i < 10;i++)
    {
        l = rand() % 5;
        c = rand() % 5;
        if(m1[l][c] == 7)
        {
            m1[l][c] = 0;
        }
        else
        {
            i--;
        }
            
    }

    for(i = 0;i < 8;i++)
    {
        l = rand() % 5;
        c = rand() % 5;
        if(m1[l][c] == 7)
        {
            m1[l][c] = 1;
        }
        else
        {
            i--;
        }
            
    }
    
    for(i = 0;i < 5;i++)
    {
        l = rand() % 5;
        c = rand() % 5;
        if(m1[l][c] == 7)
        {
            m1[l][c] = 3;
        }
        else
        {
            i--;
        }
            
    }

    for(i = 0;i < 2;i++)
    {
        l = rand() % 5;
        c = rand() % 5;
        if(m1[l][c] == 7)
        {
            m1[l][c] = 5;
        }
        else
        {
            i--;
        }
            
    }
    
    while(jogo < 8)
    {
        printf(BLU "\n-----------------------------------" RESET);
        printf(BLU "\n---------- " RESET);
        printf(CYN "Batalha Naval" RESET);
        printf(BLU " ----------" RESET);
        printf(BLU "\n-----------------------------------" RESET);
        printf("\n");
        printf("       ");
        
        for(i = 0;i < TAM;i++)
        {
            printf(CYN "|" RESET " %i " CYN "|" RESET,i);
        }

        for(l = 0;l < TAM;l++)
        {
            printf("\n");
            printf("  ");
            printf(CYN "|" RESET " %i " CYN "|" RESET,l);
            for(c = 0;c < TAM;c++)
            {
                if(m2[l][c] == 1)
                {
                    printf(CYN "|" RESET GRN " %c " RESET CYN "|" RESET,m[l][c]);
                }
                else if(m2[l][c] == 2)
                {
                    printf(CYN "|" RESET YEL " %c " RESET CYN "|" RESET,m[l][c]);
                }
                else if(m2[l][c] == 7)
                {
                    printf(CYN "|" RESET " %c " CYN "|" RESET,m[l][c]);
                }
            }
        }

        

         

        
        printf(BLU "\n-----------------------------------" RESET);
        printf(BLU "\n-----" RESET);
        COR_VERDE
        printf(" Player: %i",pl);
        COR_BRANCO

        printf(BLU " | " RESET);

        COR_LARANJA
        printf("Computer: %i",pc);
        COR_BRANCO
        
        printf(BLU " -----" RESET);
        printf(BLU "\n-----------------------------------" RESET);
        printf("\n");

        if(jogo % 2 == 0)
        {
            erro = 0;
            do
            {
                if(erro < 3)
                {
                    erro1 = 0;
                    printf("[");
                    COR_VERDE
                    printf("Player");
                    COR_BRANCO
                    printf("]: ");
                    fflush(stdin);
                    scanf("%i %i",&l1 ,&c1);

                    while((l1 < 0 || l1 > 4) || (c1 < 0 || c1 > 4))
                    {
                        if(erro1 < 3)
                        {
                            printf(RED "[NUMERO INVALIDO,DIGITE NOVAMENTE]"RESET );
                            printf("\n[");
                            printf(GRN "Player" RESET);
                            printf("]: ");
                            fflush(stdin);
                            scanf("%i %i",&l1 ,&c1);
                        }
                        else
                        {
                            printf(RED "[NUMERO INVALIDO(OS NUMEROS VALIDOS SAO DE 0 A 4),DIGITE NOVAMENTE]"RESET );
                            printf("\n[");
                            printf(GRN "Player" RESET);
                            printf("]: ");
                            fflush(stdin);
                            scanf("%i %i",&l1 ,&c1);
                        }
                        erro1++;
                    }
                    
                }
                else
                {   
                    erro1 = 0;
                    printf(MAG "[Voce esta digitando linhas e colunas repetidas,digite uma que nao foi usada]" RESET);
                    printf("\n[");
                    COR_VERDE
                    printf("Player");
                    COR_BRANCO
                    printf("]: ");
                    fflush(stdin);
                    scanf("%i %i",&l1 ,&c1);

                    while((l1 < 0 || l1 > 4) || (c1 < 0 || c1 > 4))
                    {
                       if(erro1 < 3)
                        {
                            printf(RED "[NUMERO INVALIDO,DIGITE NOVAMENTE]"RESET );
                            printf("\n[");
                            printf(GRN "Player" RESET);
                            printf("]: ");
                            fflush(stdin);
                            scanf("%i %i",&l1 ,&c1);
                        }
                        else
                        {
                            printf(RED "[NUMERO INVALIDO(OS NUMEROS VALIDOS SAO DE 0 A 4),DIGITE NOVAMENTE]"RESET );
                            printf("\n[");
                            printf(GRN "Player" RESET);
                            printf("]: ");
                            fflush(stdin);
                            scanf("%i %i",&l1 ,&c1);
                        }
                        erro1++;

                    }
                }
                erro++;
               

            }while(m[l1][c1] != 35 || (l1 < 0 || l1 > 4) || (c1 < 0 || c1 > 4));

             for(l = 0;l < TAM;l++)
            {
                for(c = 0;c < TAM;c++)
                {
                    m2[l1][c1] = 1;
                }
            }

            
           
            if(m1[l1][c1] == 0)
            {
                m[l1][c1] = 48;
                pl = pl + 0;
                
            }
            else if(m1[l1][c1] == 1)
            {
                m[l1][c1] = 49;
                pl = pl + 1;
            }
            else if(m1[l1][c1] == 3)
            {
                m[l1][c1] = 51;
                pl = pl + 3;
            }
            else if(m1[l1][c1] == 5)
            {
                m[l1][c1] = 53;
                pl = pl + 5;
            }
        }

        else
        {
            printf("[");
            COR_LARANJA
            printf("Computer");
            COR_BRANCO
            printf("]: ");
            
            do
            {
                l2 = rand() % 5;
                c2 = rand() % 5;

            }while(m[l2][c2] != 35);

            for(l = 0;l < TAM;l++)
            {
                for(c = 0;c < TAM;c++)
                {
                    m2[l2][c2] = 2;
                }
            }
            
            printf("%i %i ",l2,c2);

            

            Sleep(2000);

            if(m1[l2][c2] == 0)
            {
                m[l2][c2] = 48;
                pc = pc + 0;
                
            }
            else if(m1[l2][c2] == 1)
            {
                m[l2][c2] = 49;
                pc = pc + 1;
            }
            else if(m1[l2][c2] == 3)
            {
                m[l2][c2] = 51;
                pc = pc + 3;
            }
            else if(m1[l2][c2] == 5)
            {
                m[l2][c2] = 53;
                pc = pc + 5;
            }

            
            
        }
        
        system("cls");
        jogo++;
    }

    
        
        if(pl > pc)
        {
            printf(BLU "\n-----------------------------------" RESET);
        printf(BLU "\n---------- " RESET);
        printf(CYN "Batalha Naval" RESET);
        printf(BLU " ----------" RESET);
        printf(BLU "\n-----------------------------------" RESET);
        printf("\n");
        printf("       ");
            
            for(i = 0;i < TAM;i++)
            {
                 printf(CYN "|" RESET " %i " CYN "|" RESET,i);
            }

            for(l = 0;l < TAM;l++)
            {
                printf("\n");
                printf("  ");
                printf(CYN "|" RESET " %i " CYN "|" RESET,l);
                for(c = 0;c < TAM;c++)
                {
                    if(m2[l][c] == 1)
                    {
                        printf(CYN "|" RESET GRN " %c " RESET CYN "|" RESET,m[l][c]);
                    }
                    else if(m2[l][c] == 2)
                    {
                        printf(CYN "|" RESET YEL " %c " RESET CYN "|" RESET,m[l][c]);
                    }
                    else if(m2[l][c] == 7)
                    {
                        printf(CYN "|" RESET " %c " CYN "|" RESET,m[l][c]);
                    }
                }
            }

            

            printf(BLU "\n-----------------------------------" RESET);
            printf(BLU "\n-----" RESET);
            COR_VERDE
            printf(" Player: %i",pl);
            COR_BRANCO

            printf(BLU " | " RESET);

            COR_LARANJA
            printf("Computer: %i",pc);
            COR_BRANCO
            
            printf(BLU " -----" RESET);
            printf(BLU "\n-----------------------------------" RESET);
            printf(BLU "\n---------- " RESET); 
            COR_VERDE
            printf("Player Venceu");
            COR_BRANCO
            printf(BLU " ----------" RESET); 
            printf(BLU "\n-----------------------------------"RESET );
            
            printf("\n");
        }

        else if(pl < pc)
        {
           printf(BLU "\n-----------------------------------" RESET);
        printf(BLU "\n---------- " RESET);
        printf(CYN "Batalha Naval" RESET);
        printf(BLU " ----------" RESET);
        printf(BLU "\n-----------------------------------" RESET);
        printf("\n");
        printf("       ");
            
            for(i = 0;i < TAM;i++)
            {
                printf(CYN "|" RESET " %i " CYN "|" RESET,i);
            }

            for(l = 0;l < TAM;l++)
            {
                printf("\n");
                printf("  ");
                printf(CYN "|" RESET " %i " CYN "|" RESET,l);
                for(c = 0;c < TAM;c++)
                {
                   if(m2[l][c] == 1)
                {
                    printf(CYN "|" RESET GRN " %c " RESET CYN "|" RESET,m[l][c]);
                    }
                    else if(m2[l][c] == 2)
                    {
                        printf(CYN "|" RESET YEL " %c " RESET CYN "|" RESET,m[l][c]);
                    }
                    else if(m2[l][c] == 7)
                    {
                        printf(CYN "|" RESET " %c " CYN "|" RESET,m[l][c]);
                    }
                }
            }

            

            printf(BLU "\n-----------------------------------" RESET);
            printf(BLU "\n-----"RESET );
            COR_VERDE
            printf(" Player: %i",pl);
            COR_BRANCO

            printf(BLU " | " RESET);

            COR_LARANJA
            printf("Computer: %i",pc);
            COR_BRANCO
            
            printf(BLU " -----" RESET);
            printf(BLU "\n-----------------------------------" RESET);
            printf(BLU "\n--------- " RESET); 
            COR_LARANJA
            printf("Computer Venceu");
            COR_BRANCO
            printf(BLU " ---------"RESET );
            printf(BLU "\n-----------------------------------" RESET); 
            
            printf("\n");
        }

        else if(pl == pc)
        {
            printf(BLU "\n-----------------------------------" RESET);
        printf(BLU "\n---------- " RESET);
        printf(CYN "Batalha Naval" RESET);
        printf(BLU " ----------" RESET);
        printf(BLU "\n-----------------------------------" RESET);
        printf("\n");
        printf("       ");
            
            for(i = 0;i < TAM;i++)
            {
                printf(CYN "|" RESET " %i " CYN "|" RESET,i);
            }

            for(l = 0;l < TAM;l++)
            {
                printf("\n");
                printf("  ");
                printf(CYN "|" RESET " %i " CYN "|" RESET,l);
                for(c = 0;c < TAM;c++)
                {
                   if(m2[l][c] == 1)
                    {
                        printf(CYN "|" RESET GRN " %c " RESET CYN "|" RESET,m[l][c]);
                    }
                    else if(m2[l][c] == 2)
                    {
                        printf(CYN "|" RESET YEL " %c " RESET CYN "|" RESET,m[l][c]);
                    }
                    else if(m2[l][c] == 7)
                    {
                        printf(CYN "|" RESET " %c " CYN "|" RESET,m[l][c]);
                    }
                }
            }

            

            printf(BLU "\n-----------------------------------" RESET);
            printf(BLU "\n-----" RESET);
            COR_VERDE
            printf(" Player: %i",pl);
            COR_BRANCO

            printf(BLU " | " RESET);

            COR_LARANJA
            printf("Computer: %i",pc);
            COR_BRANCO
            
            printf(BLU " -----" RESET);
            printf(BLU "\n-----------------------------------" RESET);
            printf(BLU "\n------------- " RESET); 
            
            printf(RED "Empate" RESET);
            
            printf(BLU " --------------" RESET);
            printf(BLU "\n-----------------------------------" RESET); 
            
            printf("\n");
        }
            

        
    
   


    printf("\n\n");
    return 0;
}
