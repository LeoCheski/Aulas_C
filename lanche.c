#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Em uma escola um grupo de amigos composto por 10 pessoas decidem reunir o dinheiro que possuem
//para fazer um lanche coletivo.Fa�a um programa que solicite a cada um dos 10 amigos qual o valor
//que cada um possuipara o lanche e ao final da execu��o apresente o valor total arrecado para a compra do lanche.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float valor, total;
	char resp = 's';
	
	while(resp =='S' || resp=='s')
	{
		printf("\n Qual valor ir� contribuir para o lanche?");
		scanf("%f", &valor);
		
		total = total + valor;
		
		printf("\n Insira S para mais um valor:");
		scanf("%s", &resp);
	}
	
	printf("\n O valor total para a compra do lanche � de:R$%.2f",total);
}
