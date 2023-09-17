#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float saldo=200,v_compras;
	
	printf("\nInforme o valor da compra:");
	scanf("%f",&v_compras);
	
	if
	{
		saldo=saldo-v_compras;
		printf("\n Operação realizada com sucesso");
		printf("\n Seu saldo atual é:%.2f",saldo);
	}
	
	else
	{
		printf("\n Seu saldo não é suficiente");
	}
}
