#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float  total, valor [5] = {15.50,10.00,5.50,2.00,1.50}, quant [5];;
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("\n Valores dos produtos: 1 = 15.50, 2 = 10.00, 3 = 5.50, 4 = 2.00, 5 = 1.50");
		
		printf("\n Informe a quantidade de produtos:",i+1);
		scanf("%f",&quant[i]);
		
		total = total + (valor[i]*quant[i]);
	
	}
	
	printf("O total da venda foi de:R$%.2f",total);
}
