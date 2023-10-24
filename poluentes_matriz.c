#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 2

//A cidade de "Cleantown" está empenhada em controlar a poluição do are monitorar diariamente
//os níveis de substâncias prejudiciais em quatroáreas diferentes da cidade.
//Os gases monitorados são óxidos de nitrogênio(NOx), monóxido de carbono (CO), dióxido de enxofre (SO2)
//e partículasem suspensão (PM10).Cada área da cidade tem um índice de poluição diária para cada um dos 
//quatro poluentes, representados por uma matriz 4x4, onde as linhasrepresentam as áreas (A1, A2, A3, A4)
//e as colunas representam ospoluentes (NOx, CO, SO2 , PM10).Escreva um programa em linguagem C que realize as operações:
//1.Leia os índices de poluição para cada área e poluente, armazenando-osem uma matriz.
//2.Calcule e exiba a média de poluição para cada poluente em toda acidade

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
    int polu [N] [N], media[N];
    int i, j, soma;

    printf("Digite os índices de poluição para cada área e poluente:\n");
    
    for(i=0; i < N; i++) 
	{
    	printf("\n Área %i:", i+1);
        for(j=0; j<N; j++) 
		{
            printf("\n Poluente %i: ", j+1);
            scanf("%i", &polu[i][j]);
        }
    }

    for (j=0; j < N; j++) 
	{
        soma = 0;
        for (i=0; i<N; i++) 
		{
            soma += polu[i][j];
        }
        media[j] = soma / N;
    }

    printf("A média de poluição para cada poluente em toda a cidade é:\n");
    for (j = 0; j < N; j++)
	{
        printf("Poluente %i: %i\n", j+1, media[j]);
        
    }

}

