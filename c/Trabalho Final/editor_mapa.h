#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include "gea.h"

#define LAR 62
#define ALT 18
#define CAMINHO 0
#define PAREDE 1
#define INICIO 2
#define ANIMAL 3
#define PASSOU 4

FILE *fp;

typedef struct
{
	char nome[50];
	int mapa[ALT][LAR];
} mapa;

void editor_mapa()
{

	mapa map;
	
	char mapa_leitura[ALT][LAR];
	int lin, col, final, px, py;
	int pontos;
	char jogada;
	int contI = 0, contA = 0;
	int mapaespelho[ALT][LAR];
	int flag = 1;
	int sinal;
	int mapa_aux[ALT][LAR];

	fp = fopen("mapa.bin", "a+");

	// INICIALIZA O MAPA COM PAREDES
	for (lin = 0; lin < ALT; lin++)
	{
		for (col = 0; col < LAR; col++)
		{
			map.mapa[lin][col] = PAREDE;
		}
	}

	// EDITOR DE MAPAS - USUARIO MONTA O MAPA A SER USADO NO JOGO
	final = 0;
	px = py = 1;
	while (final == 0)
	{

		COR_BRANCO
		system("clear");
		printf("\t\t  EDITOR DE MAPAS - GAME RESGATE\n");
		for (lin = 0; lin < ALT; lin++)
		{
			// printf("");
			for (col = 0; col < LAR; col++)
			{

				if (lin == px && col == py)
				{
					COR_VERMELHO
					printf("_");
				}
				else if (map.mapa[lin][col] == CAMINHO)
				{
					COR_BRANCO
					printf(" ");
				}
				else if (map.mapa[lin][col] == PAREDE)
				{
					COR_BRANCO
					printf("#");
				}
				else if (map.mapa[lin][col] == INICIO)
				{
					COR_AZUL
					printf("☻");
				}
				else if (map.mapa[lin][col] == ANIMAL)
				{
					COR_LARANJA
					printf("♞");
				}
			}
			printf("\n");
		}
		COR_BRANCO
		printf("    (C: Caminho)(P: Parede)(I: Início)(A: Animal)(O: OK)");

		// CAPTURA TECLA
		jogada = getch();

		// TECLA ESPECIAL
		if (jogada == 27)
		{
			jogada = getch();

			if (jogada == 91)
			{
				jogada = getch();

				// CIMA
				if (jogada == 65)
				{
					if (px > 0)
					{
						px--;
					}
				}
				// BAIXO
				else if (jogada == 66)
				{
					if (px < ALT - 1)
					{
						px++;
					}
				}
				// DIREITA
				else if (jogada == 67)
				{
					if (py < LAR - 1)
					{
						py++;
					}
				}
				// ESQUERDA
				else if (jogada == 68)
				{
					if (py > 0)
					{
						py--;
					}
				}
			}
		}
		// PAREDE
		else if (jogada == 'P' || jogada == 'p')
		{
			if (map.mapa[px][py] == ANIMAL)
			{
				contA = 0;
			}
			else if (map.mapa[px][py] == INICIO)
			{
				contI = 0;
			}
			map.mapa[px][py] = PAREDE;
		}
		// CAMINHO
		else if (jogada == 'C' || jogada == 'c' && px != 0 && px != ALT - 1 && py != 0 && py != LAR - 1)
		{
			if (map.mapa[px][py] == ANIMAL)
			{
				contA = 0;
			}
			else if (map.mapa[px][py] == INICIO)
			{
				contI = 0;
			}

			map.mapa[px][py] = CAMINHO;
		}
		// INICIO
		else if (jogada == 'I' || jogada == 'i' && contI == 0 && px != 0 && px != ALT - 1 && py != 0 && py != LAR - 1)
		{
			if (map.mapa[px][py] == ANIMAL)
			{
				contA = 0;
			}

			map.mapa[px][py] = INICIO;
			contI = 1;
		}
		// ANIMAL
		else if (jogada == 'A' || jogada == 'a' && contA == 0 && px != 0 && px != ALT - 1 && py != 0 && py != LAR - 1)
		{
			if (map.mapa[px][py] == INICIO)
			{
				contI = 0;
			}
			map.mapa[px][py] = ANIMAL;
			contA = 1;
		}
		// OK - SAIR
		else if (jogada == 'O' || jogada == 'o')
		{
			final = 1;
		}

		if ((contA == 0 || contI == 0) && final == 1)
		{
			if (contI == 0 && contA == 0)
			{

				final = 0;
			}

			else if (contA == 0)
			{

				final = 0;
			}
			else if (contI == 0)
			{

				final = 0;
			}
		}

		for(lin=0; lin<ALT; lin++) {
				for(col=0; col<LAR; col++) {
					mapa_aux[lin][col] = map.mapa[lin][col];
				}
			}
			
			//VERIFICANDO SE HÁ CAMINHO
			while(final==1){    

				sinal = 0; //INICIA A VARIÁVEL - NÃO HÁ MOVIMENTO

				for(lin=0; lin<ALT; lin++) {
					for(col=0; col<LAR; col++) {

						//ENCONTRANDO O INÍCIO
						if( mapa_aux[lin][col] == INICIO ){

												          
						//VERIFICANDO SE ACHOU O ANIMAL
						if(mapa_aux[lin][col-1]==ANIMAL || mapa_aux[lin][col+1]==ANIMAL || mapa_aux[lin-1][col]==ANIMAL || mapa_aux[lin+1][col]==ANIMAL) {
						lin = ALT; //SAINDO DOS LAÇOS DE CONDIÇÃO                         
						col = LAR; //SAINDO DOS LAÇOS DE CONDIÇÃO
						sinal = 2; //HÁ CAMINHO                              	        
						}                    


						//BAIXO
						if(mapa_aux[lin+1][col] == CAMINHO){ //VERIFICA SE HÁ CAMINHO
							mapa_aux[lin+1][col] = INICIO; //COLOCA O INÍCIO ONDE SE QUER IR
							sinal = 1; //HÁ MOVIMENTO

						}

						//CIMA
						if(mapa_aux[lin-1][col] == CAMINHO){ //VERIFICA SE HÁ CAMINHO
							mapa_aux[lin-1][col] = INICIO; //COLOCA O INÍCIO ONDE SE QUER IR
							sinal = 1; //HÁ MOVIMENTO
						}

						//DIREITA
						if(mapa_aux[lin][col+1] == CAMINHO){ //VERIFICA SE HÁ CAMINHO
							mapa_aux[lin][col+1] = INICIO; //COLOCA O INÍCIO ONDE SE QUER IR
							sinal = 1; //HÁ MOVIMENTO
						}

						//ESQUERDA
						if(mapa_aux[lin][col-1] == CAMINHO){ //VERIFICA SE HÁ CAMINHO
							mapa_aux[lin][col-1] = INICIO; //COLOCA O INÍCIO ONDE SE QUER IR
							sinal = 1; //HÁ MOVIMENTO
						}
						
						mapa_aux[lin][col] = PASSOU; //COLOCA PASSOU ONDE O INÍCIO ESTAVA

						}
					}
				}

				//NÃO HÁ CAMINHO
				if(sinal == 0) {
					COR_VERMELHO //MUDA A COR
					__fpurge(stdin); 
					printf("\n\n\t\t[ERRO] Não há caminho");
					__fpurge(stdin);
					getchar(); //ESPERA O USUÁRIO DIGITAR ENTER
					final=0; //CERTIFICA-SE DE QUE O MAPA PODERÁ SER EDITADO NOVAMENTE - SAI DO LAÇO DE VERIFICAÇÃO DO CAMINHO
					COR_BRANCO
				}

				//HÁ CAMINHO
				else if(sinal == 2) {
					COR_AZUL //MUDA A COR
					__fpurge(stdin);
					printf("\n\n\t\t[OK] Há caminho");
					__fpurge(stdin);
					getchar(); //ESPERA O USUÁRIO DIGITAR ENTER
					final=2; //SAI DO LAÇO DE EDIÇÃO DO MAPA E DO LAÇO DE VERIFICAÇÃO DE CAMINHO
					COR_BRANCO
				}
			}

	}

		printf("\n");

		system("clear");

		printf("\n - Digite um nome para salvar o mapa: ");
		__fpurge(stdin);
		gets(map.nome);

		fwrite(&map, sizeof(mapa), 1, fp);

		printf(" - [OK] O cenario [%s] foi salvo com sucesso!", map.nome);

		printf("\n Aperte enter para continuar");

		getchar();

		fclose(fp);
	
}
