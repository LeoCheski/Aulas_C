#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 2

//Escreva um programa em C++ para ler uma matriz N × N de valores inteiros de 1 a 9
//(N estabelecido via #define), representando imóveis alugados em uma região comercial de Curitiba.
//Valores inferiores a 5 na matriz indicam imóveis com aluguel mensal de R$1000 e os 
//demais valores indicam imóveis com aluguel mensal de R$5000. 
//Seu programa deve imprimiro custo mensal desta região comercial.

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    
    int i, j, mat [N][N];
    float custo = 0;

    for (i=0; i<N; i++) 
	{
        for (j=0; j<N; j++) 
		{
            printf("\n Digite os valores da região [%i] [%i] (entre 1 e 9):", i + 1, j + 1);
            scanf("%i", &mat[i][j]);
            
            if (mat[i][j] < 5)
			{
                custo += 1000;
            }
            
			 else 
			{
                custo += 5000;
            }
        }
    }
    for (i=0; i<N; i++)
	{
        printf("\n O custo mensal da região comercial %i é: R$ %.2f\n", i + 1, custo);
    }
}

