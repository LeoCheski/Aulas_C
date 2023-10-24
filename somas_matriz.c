#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//Escreva um algoritmo que lê uma matriz M(5,5) e calcule e imprima as somas:
//a) da linha 4 de M;
//b) da coluna 2 de M;
//c) da diagonal principal;
//d) de todos os elementos da matriz

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i, j, somaL=0, somaC=0, somaD=0, somaS=0, dim=5, somaT=0;
	int tab [5] [5];
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			tab [i][j] = rand () %10;
			
			somaT = somaT = tab [i] [j];
			
			if(i==3)
			{
				somaL = somaL + tab [i] [j];
			}
			
			if(j==1)
			{
				somaC = somaC + tab [i] [j];
			}
			
			if(i==j)
			{
				somaD = somaD + tab [i] [j];
			}
			
			if(i+j==dim-1)
			{
				somaS = somaS + tab [i] [j];
			}
			
		}
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%i",tab[i][j]);
		}
		print("%i",somaD);
		printf("%i",somaT);
		printf("%i",somaS);
		printf("%i",somaC);
		printf("%i",somaL);
	}
}
