#include <stdio.h>
#include <stdlib.h>
#include "editor_mapa.h"
#include <unistd.h>
#include <time.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i = 1, ret, cont = 0, l, c;
    int cn;
    int modo;
    mapa map;
    int jogo = 1;
    char jogada;
    int px, py;
    int flag = 1;
    int flag1 = 1;
    int ContPisca;
    int MapaEspelho[ALT][LAR];
    int flag3 = 0;
    int ale = 0;
    int parabens;

    int min = 0;
    time_t timeIni, timeFim;
    time_t timeIniMin, timeFimMin;
    float seg, timeTotMin, teste = 0;

    

    editor_mapa();
    
    timeIni = time(NULL);
    timeIniMin = time(NULL);
     

    system("clear");

    printf(" - Escolha um dos mapas a seguir: ");

    fp = fopen("mapa.bin", "a+");
    rewind(fp);

    

    do//LISTAR MAPAS
    {
        ret = fread(&map, sizeof(mapa), 1, fp);
        if (ret == 1)
        {
            printf("\n\t(%i) %s", i, map.nome);
            i++;
        }
    } while (ret != 0);

    printf("\n>");
    __fpurge(stdin);
    scanf("%i", &cn);
    fclose(fp);

    system("clear");

    COR_BRANCO
    printf("\n-----------------------------");
    printf("\n-- ESCOLHA UM MODO DE JOGO --");
    printf("\n-----------------------------");
    printf("\n--");
    COR_AZUL
    printf(" 1) Resgate Manual ");
    COR_BRANCO
    printf("--------");
    printf("\n--");
    COR_LARANJA
    printf(" 2) Resgate Automático ");
    COR_BRANCO
    printf("----");
    printf("\n-----------------------------\n>");
    scanf("%i", &modo);

    system("clear");

    fp = fopen("mapa.bin", "a+");

    rewind(fp);

    do
    {
        ret = fread(&map, sizeof(mapa), 1, fp);
        cont++;
        if (cont == cn)
        {
            ret = 0;
        }
    } while (ret != 0);

    fclose(fp);

    if (modo == 1)
    {

        while (jogo == 1)
        {
            system("clear");
            printf("[TEMPO DE JOGO %i:%.0f]", min, seg);
            printf("\t\t\t GAME RESCUE\n");

            for (l = 0; l < ALT; l++)
            {
                for (c = 0; c < LAR; c++)
                {
                    if (map.mapa[l][c] == INICIO && flag == 1)
                    {
                        px = l;
                        py = c;
                        flag = 0;
                        COR_AZUL
                        printf("☻");
                    }

                    else if (map.mapa[l][c] == CAMINHO)
                    {
                        COR_BRANCO
                        printf(" ");
                    }
                    else if (map.mapa[l][c] == PAREDE)
                    {
                        COR_BRANCO
                        printf("#");
                    }
                    else if (map.mapa[l][c] == INICIO)
                    {
                        COR_AZUL
                        printf("☻");
                    }
                    else if (map.mapa[l][c] == ANIMAL)
                    {
                        COR_LARANJA
                        printf("♞");
                    }
                }
                printf("\n");
            }

            if (flag1 == 0)
            {

                for (ContPisca = 0; ContPisca < 10; ContPisca++)
                {
                    system("clear");
                    printf("[TEMPO DE JOGO %i:%.0f]", min, seg);
                    printf("\t\t\t GAME RESCUE\n");

                    for (l = 0; l < ALT; l++)
                    {
                        for (c = 0; c < LAR; c++)
                        {

                            if (map.mapa[l][c] == CAMINHO)
                            {
                                COR_BRANCO
                                printf(" ");
                            }
                            else if (map.mapa[l][c] == PAREDE)
                            {
                                COR_BRANCO
                                printf("#");
                            }
                            else if (map.mapa[l][c] == INICIO && ContPisca % 2 == 0)
                            {
                                COR_AZUL
                                printf("☻");
                            }
                            else if (map.mapa[l][c] == INICIO && ContPisca % 2 == 1)
                            {
                                COR_LARANJA
                                printf("♞");
                            }
                        }
                        printf("\n");
                    }

                    if (ContPisca % 3 == 0)
                    {
                        COR_AGUA
                        printf("\n\t  [PARABENS] Resgate concluido com sucesso! \n");
                    }
                    else if (ContPisca % 2 == 0)
                    {
                        COR_ROXO
                        printf("\n\t  [PARABENS] Resgate concluido com sucesso! \n");
                    }
                    else if (ContPisca % 1 == 0)
                    {
                        COR_LARANJA
                        printf("\n\t  [PARABENS] Resgate concluido com sucesso! \n");
                    }

                    sleep(1);
                }

                return 0;
            }

            timeFim = time(NULL);
            seg = timeFim - timeIni;

            timeFimMin = time(NULL);
            timeTotMin = timeFimMin - timeIniMin;
            if (seg >= 60)
            {
                teste = seg - 60;
                timeIni = time(NULL);
                seg = 0 + teste;
            }
            if (timeTotMin >= 60)
            {
                min++;
                timeIniMin = time(NULL);
            }

            jogada = getch();

            if (jogada == 27)
            {
                jogada = getch();

                if (jogada == 91)
                {
                    jogada = getch();

                    // CIMA
                    if (jogada == 65)
                    {
                        if (px >= 0 && map.mapa[px - 1][py] != PAREDE)
                        {
                            px--;
                            if (map.mapa[px][py] == ANIMAL)
                            {
                                map.mapa[px + 1][py] = CAMINHO;

                                flag1 = 0;
                            }
                            map.mapa[px][py] = INICIO;
                            map.mapa[px + 1][py] = CAMINHO;
                        }
                    }
                    // BAIXO
                    else if (jogada == 66)
                    {
                        if (px <= ALT - 1 && map.mapa[px + 1][py] != PAREDE)
                        {
                            px++;
                            if (map.mapa[px][py] == ANIMAL)
                            {
                                map.mapa[px - 1][py] = CAMINHO;

                                flag1 = 0;
                            }
                            map.mapa[px][py] = INICIO;
                            map.mapa[px - 1][py] = CAMINHO;
                        }
                    }
                    // DIREITA
                    else if (jogada == 67)
                    {
                        if (py <= LAR - 1 && map.mapa[px][py + 1] != PAREDE)
                        {
                            py++;
                            if (map.mapa[px][py] == ANIMAL)
                            {
                                map.mapa[px][py - 1] = CAMINHO;

                                flag1 = 0;
                            }
                            map.mapa[px][py] = INICIO;
                            map.mapa[px][py - 1] = CAMINHO;
                        }
                    }
                    // ESQUERDA
                    else if (jogada == 68)
                    {
                        if (py >= 0 && map.mapa[px][py - 1] != PAREDE)
                        {
                            py--;
                            if (map.mapa[px][py] == ANIMAL)
                            {
                                map.mapa[px][py + 1] = CAMINHO;

                                flag1 = 0;
                            }
                            map.mapa[px][py] = INICIO;
                            map.mapa[px][py + 1] = CAMINHO;
                        }
                    }
                }
            }
        }
    }


    //COMEÇO DO AUTOMÁTICO
    else
    {
        for (l = 0; l < ALT; l++)
        {
            for (c = 0; c < LAR; c++)
            {
                if (map.mapa[l][c] == PAREDE)
                {
                    MapaEspelho[l][c] = 0;
                }
                else if (map.mapa[l][c] == CAMINHO)
                {
                    MapaEspelho[l][c] = 1;
                }
                else if (map.mapa[l][c] == ANIMAL)
                {
                    MapaEspelho[l][c] = 9;
                }
            }
        }

        while (jogo == 1)
        {
            /*
            for (l = 0; l < ALT; l++)
            {
                printf("\n");
                for (c = 0; c < LAR; c++)
                {
                    printf("%i", MapaEspelho[l][c]);
                }
            }
            sleep(1);*/
            system("clear");
            printf("[TEMPO DE JOGO %i:%.0f]", min, seg);
            printf("\t\t\t GAME RESCUE\n");
            for (l = 0; l < ALT; l++)
            {
                for (c = 0; c < LAR; c++)
                {
                    if (map.mapa[l][c] == INICIO && flag == 1)
                    {
                        px = l;
                        py = c;
                        map.mapa[px][py] = INICIO;
                        COR_AZUL
                        printf("☻");
                        flag = 0;
                    }

                    else if (map.mapa[l][c] == CAMINHO)
                    {
                        COR_BRANCO
                        printf(" ");
                    }
                    else if (map.mapa[l][c] == PAREDE)
                    {
                        COR_BRANCO
                        printf("#");
                    }
                    else if (map.mapa[l][c] == INICIO)
                    {
                        COR_AZUL
                        printf("☻");
                    }
                    else if (map.mapa[l][c] == ANIMAL)
                    {
                        COR_LARANJA
                        printf("♞");
                    }
                }
                printf("\n");
            }

            timeFim = time(NULL); // TIMER
            seg = timeFim - timeIni;
            //
            timeFimMin = time(NULL);
            timeTotMin = timeFimMin - timeIniMin;
            if (seg >= 60)
            {
                teste = seg - 60;
                timeIni = time(NULL);
                seg = 0 + teste;
            }
            if (timeTotMin >= 60)
            {
                min++;
                timeIniMin = time(NULL);
            }

            usleep(250000);

            if (flag1 == 0)
            {

                for (ContPisca = 0; ContPisca < 10; ContPisca++)
                {
                    system("clear");
                    printf("[TEMPO DE JOGO %i:%.0f]", min, seg);
                    printf("\t\t\t GAME RESCUE\n");

                    for (l = 0; l < ALT; l++)
                    {
                        for (c = 0; c < LAR; c++)
                        {

                            if (map.mapa[l][c] == CAMINHO)
                            {
                                COR_BRANCO
                                printf(" ");
                            }
                            else if (map.mapa[l][c] == PAREDE)
                            {
                                COR_BRANCO
                                printf("#");
                            }
                            else if (map.mapa[l][c] == INICIO && ContPisca % 2 == 0)
                            {
                                COR_AZUL
                                printf("☻");
                            }
                            else if (map.mapa[l][c] == INICIO && ContPisca % 2 == 1)
                            {
                                COR_LARANJA
                                printf("♞");
                            }
                        }
                        printf("\n");
                    }

                    if (ContPisca % 3 == 0)
                    {
                        COR_AGUA
                        printf("\n\t  [PARABENS] Resgate concluido com sucesso! \n");
                    }
                    else if (ContPisca % 2 == 0)
                    {
                        COR_ROXO
                        printf("\n\t  [PARABENS] Resgate concluido com sucesso! \n");
                    }
                    else if (ContPisca % 1 == 0)
                    {
                        COR_LARANJA
                        printf("\n\t  [PARABENS] Resgate concluido com sucesso! \n");
                    }

                    sleep(1);
                }

                return 0;
            }



            if (flag3 != 0) // Reconhecendo e colocando caracter de bifurcação
            {
                if (MapaEspelho[px + 1][py] == 1 && MapaEspelho[px][py + 1] == 1)
                {
                    MapaEspelho[px][py] = 55;
                }
                else if (MapaEspelho[px + 1][py] == 1 && MapaEspelho[px][py - 1] == 1)
                {
                    MapaEspelho[px][py] = 55;
                }
                else if (MapaEspelho[px - 1][py] == 1 && MapaEspelho[px][py - 1] == 1)
                {
                    MapaEspelho[px][py] = 55;
                }
                else if (MapaEspelho[px - 1][py] == 1 && MapaEspelho[px][py + 1] == 1)
                {
                    MapaEspelho[px][py] = 55;
                }
                else if (MapaEspelho[px - 1][py] == 1 && MapaEspelho[px + 1][py] == 1)
                {
                    MapaEspelho[px][py] = 55;
                }
                else if (MapaEspelho[px][py - 1] == 1 && MapaEspelho[px][py + 1] == 1)
                {
                    MapaEspelho[px][py] = 55;
                }
            }

            if (MapaEspelho[px][py] == 55)//SORTEIO DE ESCOLHA
            {
                ale = rand() % 4;
                if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 0 && MapaEspelho[px][py + 1] == 2)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 1;
                }
                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 2)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 1;
                }

                else if (MapaEspelho[px - 1][py] == 0 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 2)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 1;
                }

                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 0 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 2)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 1;
                }

                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 2 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 2;
                }

                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 2 && MapaEspelho[px][py - 1] == 0 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 2;
                }

                else if (MapaEspelho[px - 1][py] == 0 && MapaEspelho[px + 1][py] == 2 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 2;
                }

                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 2 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 0)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 2;
                }

                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 2 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 3;
                }

                else if (MapaEspelho[px - 1][py] == 0 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 2 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 3;
                }

                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 2 && MapaEspelho[px][py + 1] == 0)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 3;
                }
                else if (MapaEspelho[px - 1][py] == 3 && MapaEspelho[px + 1][py] == 0 && MapaEspelho[px][py - 1] == 2 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 3;
                }

                else if (MapaEspelho[px - 1][py] == 2 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 4;
                }

                else if (MapaEspelho[px - 1][py] == 2 && MapaEspelho[px + 1][py] == 0 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 4;
                }

                else if (MapaEspelho[px - 1][py] == 2 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 0 && MapaEspelho[px][py + 1] == 3)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 4;
                }

                else if (MapaEspelho[px - 1][py] == 2 && MapaEspelho[px + 1][py] == 3 && MapaEspelho[px][py - 1] == 3 && MapaEspelho[px][py + 1] == 0)
                {
                    MapaEspelho[px][py] = 3;
                    ale = 4;
                }

                if (ale == 1)//DIREITA
                {
                    if (MapaEspelho[px][py + 1] == 1 || MapaEspelho[px][py + 1] == 9)
                    {
                        py++;
                        if (MapaEspelho[px][py] == 9)
                        {
                            map.mapa[px - 1][py] = CAMINHO;

                            flag1 = 0;
                        }
                        map.mapa[px][py] = INICIO;
                        map.mapa[px][py - 1] = CAMINHO;
                        if (MapaEspelho[px][py - 1] != 55)
                        {
                            MapaEspelho[px][py - 1] = 2;
                        }
                    }
                }

                else if (ale == 2)//BAIXO
                {
                    if (MapaEspelho[px + 1][py] == 1 || MapaEspelho[px + 1][py] == 9)
                    {
                        px++;
                        if (MapaEspelho[px][py] == 9)
                        {
                            map.mapa[px][py - 1] = CAMINHO;

                            flag1 = 0;
                        }
                        map.mapa[px][py] = INICIO;
                        map.mapa[px - 1][py] = CAMINHO;
                        if (MapaEspelho[px - 1][py] != 55)
                        {
                            MapaEspelho[px - 1][py] = 2;
                        }
                    }
                }

                else if (ale == 3)//ESQUERDA
                {
                    if (MapaEspelho[px][py - 1] == 1 || MapaEspelho[px][py - 1] == 9)
                    {
                        py--;
                        if (MapaEspelho[px][py] == 9)
                        {
                            map.mapa[px][py + 1] = CAMINHO;

                            flag1 = 0;
                        }

                        map.mapa[px][py] = INICIO;
                        map.mapa[px][py + 1] = CAMINHO;
                        if (MapaEspelho[px][py + 1] != 55)
                        {
                            MapaEspelho[px][py + 1] = 2;
                        }
                    }
                }

                else if (ale == 0)//CIMA
                {
                    if (MapaEspelho[px - 1][py] == 1 || MapaEspelho[px - 1][py] == 9)
                    {
                        px--;
                        if (MapaEspelho[px][py] == 9)
                        {
                            map.mapa[px + 1][py] = CAMINHO;

                            flag1 = 0;//VAI PARA A ANIMAÇÃO
                        }
                        map.mapa[px][py] = INICIO;
                        map.mapa[px + 1][py] = CAMINHO;
                        if (MapaEspelho[px + 1][py] != 55)
                        {
                            MapaEspelho[px + 1][py] = 2;
                        }
                    }
                }
            }

            else if (MapaEspelho[px][py + 1] == 1 || MapaEspelho[px][py + 1] == 9)
            {
                py++;
                if (MapaEspelho[px][py] == 9)
                {
                    map.mapa[px - 1][py] = CAMINHO;

                    flag1 = 0;
                }
                map.mapa[px][py] = INICIO;
                map.mapa[px][py - 1] = CAMINHO;
                if (MapaEspelho[px][py - 1] != 55)
                {
                    MapaEspelho[px][py - 1] = 2;
                }
            }
            else if (MapaEspelho[px + 1][py] == 1 || MapaEspelho[px + 1][py] == 9)
            {
                px++;
                if (MapaEspelho[px][py] == 9)
                {
                    map.mapa[px][py - 1] = CAMINHO;

                    flag1 = 0;
                }
                map.mapa[px][py] = INICIO;
                map.mapa[px - 1][py] = CAMINHO;
                if (MapaEspelho[px - 1][py] != 55)
                {
                    MapaEspelho[px - 1][py] = 2;
                }
            }
            else if (MapaEspelho[px][py - 1] == 1 || MapaEspelho[px][py - 1] == 9)
            {
                py--;
                if (MapaEspelho[px][py] == 9)
                {
                    map.mapa[px][py + 1] = CAMINHO;

                    flag1 = 0;
                }

                map.mapa[px][py] = INICIO;
                map.mapa[px][py + 1] = CAMINHO;
                if (MapaEspelho[px][py + 1] != 55)
                {
                    MapaEspelho[px][py + 1] = 2;
                }
            }
            else if (MapaEspelho[px - 1][py] == 1 || MapaEspelho[px - 1][py] == 9)
            {
                px--;
                if (MapaEspelho[px][py] == 9)
                {
                    map.mapa[px + 1][py] = CAMINHO;

                    flag1 = 0;
                }
                map.mapa[px][py] = INICIO;
                map.mapa[px + 1][py] = CAMINHO;
                if (MapaEspelho[px + 1][py] != 55)
                {
                    MapaEspelho[px + 1][py] = 2;
                }
            }

            else if ((MapaEspelho[px][py + 1] == 0 || MapaEspelho[px][py + 1] == 3))//VERIFICA SE É UM CAMINHO SEM VOLTA
            {
                if (MapaEspelho[px][py - 1] == 2 || MapaEspelho[px][py - 1] == 55)
                {
                    py--;
                    map.mapa[px][py + 1] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px][py + 1] != 55)
                    {
                        MapaEspelho[px][py + 1] = 3;
                    }
                }
                else if (MapaEspelho[px + 1][py] == 2 || MapaEspelho[px + 1][py] == 55)
                {
                    px++;
                    map.mapa[px - 1][py] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px - 1][py] != 55)
                    {
                        MapaEspelho[px - 1][py] = 3;
                    }
                }
                else if (MapaEspelho[px - 1][py] == 2 || MapaEspelho[px - 1][py] == 55)
                {
                    px--;
                    map.mapa[px + 1][py] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px + 1][py] != 55)
                    {
                        MapaEspelho[px + 1][py] = 3;
                    }
                }
            }

            else if (MapaEspelho[px][py - 1] == 0 || MapaEspelho[px][py - 1] == 3)
            {
                if (MapaEspelho[px][py + 1] == 2 || MapaEspelho[px][py + 1] == 55)
                {
                    py++;
                    map.mapa[px][py - 1] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px][py - 1] != 55)
                    {
                        MapaEspelho[px][py - 1] = 3;
                    }
                }
                else if (MapaEspelho[px + 1][py] == 2 || MapaEspelho[px + 1][py] == 55)
                {
                    px++;
                    map.mapa[px - 1][py] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px - 1][py] != 55)
                    {
                        MapaEspelho[px - 1][py] = 3;
                    }
                }
                else if (MapaEspelho[px - 1][py] == 2 || MapaEspelho[px - 1][py] == 55)
                {
                    px--;
                    map.mapa[px + 1][py] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px + 1][py] != 55)
                    {
                        MapaEspelho[px + 1][py] = 3;
                    }
                }
            }

            else if ((MapaEspelho[px + 1][py] == 0 || MapaEspelho[px + 1][py] == 3))
            {
                if (MapaEspelho[px][py + 1] == 2 || MapaEspelho[px][py + 1] == 55)
                {
                    py++;
                    map.mapa[px][py - 1] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px][py - 1] != 55)
                    {
                        MapaEspelho[px][py - 1] = 3;
                    }
                }
                else if (MapaEspelho[px][py - 1] == 2 || MapaEspelho[px][py - 1] == 55)
                {
                    py--;
                    map.mapa[px][py + 1] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px][py + 1] != 55)
                    {
                        MapaEspelho[px][py + 1] = 3;
                    }
                }
                else if (MapaEspelho[px - 1][py] == 2 || MapaEspelho[px - 1][py] == 55)
                {
                    px--;
                    map.mapa[px + 1][py] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px][py + 1] != 55)
                    {
                        MapaEspelho[px + 1][py] = 3;
                    }
                }
            }

            else if ((MapaEspelho[px - 1][py] == 0 || MapaEspelho[px - 1][py] == 3))
            {
                if (MapaEspelho[px][py + 1] == 2 || MapaEspelho[px][py + 1] == 55)
                {
                    py++;
                    map.mapa[px][py - 1] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px][py - 1] != 55)
                    {
                        MapaEspelho[px][py - 1] = 3;
                    }
                }
                else if (MapaEspelho[px + 1][py] == 2 || MapaEspelho[px + 1][py] == 55)
                {
                    px++;
                    map.mapa[px - 1][py] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px - 1][py] != 55)
                    {
                        MapaEspelho[px - 1][py] = 3;
                    }
                }
                else if (MapaEspelho[px][py - 1] == 2 || MapaEspelho[px][py - 1] == 55)
                {
                    px--;
                    map.mapa[px][py + 1] = CAMINHO;
                    map.mapa[px][py] = INICIO;
                    if (MapaEspelho[px][py + 1] != 55)
                    {
                        MapaEspelho[px][py + 1] = 3;
                    }
                }
            }

            flag3 = 1;
            ale = 0;
        }
    }

    printf("\n\n");
    return 0;
}
