#include<stdio.h>
#include<locale.h>

//Em um determinado Estado, para transferências de veículos, o DETRAN
//cobra uma taxa de 1% para carros fabricadosantes de 1990 e uma taxa de 1.5% para
//os fabricados de 1990 em diante, a taxa é incidindo sobre o valor de tabela docarro.
//Faça um programa que solicite ao usuário o ano e o preço do carro e na  calcule e
//imprima o imposto a serpago.

int main()

{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float ano,preco,imposto;
	
	printf("\n Informe o ano do veículo:");
	scanf("%f",&ano);
	
	printf("\n Informe o preço do carro:");
	scanf("%f",&preco);
	
	if(ano<1990)
	{
		imposto=preco-0.01;
		printf("\n O imposto sobre esse veículo é de:%.2f",imposto);
	}
	
	else if(ano>=1990)
	{
		imposto=preco-0.015;
		printf("\n O imposto sobre esse veículo é de:%.2f",imposto);
	}
	
	
	
	
}
