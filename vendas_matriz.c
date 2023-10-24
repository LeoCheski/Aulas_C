#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float vendas [5] [4], soma, sul;
	int i, j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<4; j++)
		{
			//vendas[i][j] = rand() %2600; criar valores aleatorios para teste
			printf("\n Quantidade vendida no [%i] Trimestre na região [%i]",i+1,j+1);
			scanf("%f",&vendas[i] [j]);
			
			soma = soma + vendas [i] [j];
			
			if(j==2)
			{
				sul += vendas [i][j];
			}
		}
	}
	printf("\n O total de vendas foi de:R$%.2f",soma);
    printf("\n O total de vendas do sul foi de:R$%.2f",sul);
}
