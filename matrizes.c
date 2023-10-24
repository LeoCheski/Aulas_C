#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//Faça um programa que leia duas matrizes 4 x 3 de números inteiros, mat1 e mat2;
//calcule a matriz soma (mat3) e em seguida mostre mat3 na tela.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int mat1 [4][3], mat2 [4] [3], mat3 [4][3];
	int i=0, j=0;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			mat1 [i][j] = rand ()%10;
		}
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			mat2 [i][j] = rand ()%10;
			
			mat3 [i][j] = mat1 [i][j] + mat2 [i][j];
		}
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n %i %i %i", mat1[i][j], mat2[i][j], mat3[i][j]);
		}
	}
}
