#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 2

//A cidade de "Cleantown" est� empenhada em controlar a polui��o do are monitorar diariamente
//os n�veis de subst�ncias prejudiciais em quatro�reas diferentes da cidade.
//Os gases monitorados s�o �xidos de nitrog�nio(NOx), mon�xido de carbono (CO), di�xido de enxofre (SO2)
//e part�culasem suspens�o (PM10).Cada �rea da cidade tem um �ndice de polui��o di�ria para cada um dos 
//quatro poluentes, representados por uma matriz 4x4, onde as linhasrepresentam as �reas (A1, A2, A3, A4)
//e as colunas representam ospoluentes (NOx, CO, SO2 , PM10).Escreva um programa em linguagem C que realize as opera��es:
//1.Leia os �ndices de polui��o para cada �rea e poluente, armazenando-osem uma matriz.
//2.Calcule e exiba a m�dia de polui��o para cada poluente em toda acidade

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
    int polu [N] [N], media[N];
    int i, j, soma;

    printf("Digite os �ndices de polui��o para cada �rea e poluente:\n");
    
    for(i=0; i < N; i++) 
	{
    	printf("\n �rea %i:", i+1);
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

    printf("A m�dia de polui��o para cada poluente em toda a cidade �:\n");
    for (j = 0; j < N; j++)
	{
        printf("Poluente %i: %i\n", j+1, media[j]);
        
    }

}

