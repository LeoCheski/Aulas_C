#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//Faça um algoritmo que receba as vendas semanais (de um mês, considere o mês com 4 semanas) de 5 vendedores de 
//uma loja e armazene essas vendas em uma matriz. Calcule e imprima:
//· Total de vendas do mês (4 semanas) de cada vendedor;
//· Total de vendas de cada semana (todos os vendedores juntos);
//. Total de vendas do mês.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float vendas[4][5], totsem[4], totven[5], somatot=0;
	float vend1, vend2, vend3, vend4, vend5;
	int i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("\n Informe o valor da venda %iº semana do %i vendedor:",i+1,j+1);
			scanf("%f", &vendas[i][j]);
			totsem[i] = totsem[i] + vendas[i][j];
			somatot  = somatot +vendas [i][j];
			
			if(j==0)
			{
				vend1 = vend1 + vendas[i][j];
			}
			
			if(j==1)
			{
				vend2 = vend2 + vendas[i][j];
			}
			
			if(j==2)
			{
				vend3 = vend3 + vendas[i][j];
			}
			
			if(j==3)
			{
				vend4 = vend4 + vendas[i][j];
			}
			
			if(j==4)
			{
				vend5 = vend5 + vendas[i][j];
			}
		}
	}
	
	for(i=0; i<4; i++)
	{
		printf("\n O valor de vendas da %iº semana é:R$%.2f",i+1,totsem[i]);
	}
	printf("\n O total de vendas do mês é:R$%.2f",somatot);
	printf("\n O total de vendas do vendedor 1: R$%.2f",vend1);
	printf("\n O total de vendas do vendedor 2: R$%.2f",vend2);
	printf("\n O total de vendas do vendedor 3: R$%.2f",vend3);
	printf("\n O total de vendas do vendedor 4: R$%.2f",vend4);
	printf("\n O total de vendas do vendedor 5: R$%.2f",vend5);

}
