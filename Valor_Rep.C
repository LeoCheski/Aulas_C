#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i,prod;
	float preco, valor, valor_total;
	
	printf("\n Informe quantos produtos foram comprados:");
	scanf("%i",&prod);
	
	for(i=1; i<=prod; i++)
	{
		printf("\n Informe o valor do %i produto:",i);
		scanf("%f",&valor);
		valor_total = valor_total + valor;
	}
	 printf("\n O valor total da compra é de:%.2f",valor_total);
}
