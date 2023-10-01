#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Faça um programa em para informar o valor do ingresso que deve ser cobradode um fã que deseja assistir ao Show do Guns N' Roses.
//Considere que:
//1 - Valor do ingresso na Pista Premium = 970,00
//2- Valor do ingresso na Pista = 480,00
//3 - Valor do ingresso na Cadeira Inferior = 650,00
//4 - Valor do ingresso na Cadeira Superior = 380,00OBS. 
//Para todas as modalidades você deve verificar se o fã paga ingressoINTEIRO ou MEIO ingresso.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float valor, valor_pr, valor_pi, valor_if, valor_sup;
	char premium, pista, inferior, superior;
	int ingresso;
	
	printf("\n Valores dos ingressos: Premium R$970,00, Pista R$480,00, Inferior R$650,00, Superior R$380,00");
	
	printf("\n Qual deseja?");
	scanf("%i",&ingresso);
	
	switch(ingresso)
	{
		case 1:
			printf("\n Premium será inteira ou meia?");
			scanf("%s", &premium);
		if(premium=='m'||premium=='M')
		{
			valor = 970.00 / 2;
			printf("\n O valor do seu ingresso é de:%.2f",valor);
		}
		else
		{
			valor_pr = 970.00;
			printf("\n O valor do seu ingresso é de:%.2f",valor_pr);
		}
		
		break;
		
		case 2:
			printf("\n Premium será inteira ou meia?");
			scanf("%s", &pista);
		if(pista=='m'||pista=='M')
		{
			valor = 480.00 / 2;
			printf("\n O valor do seu ingresso é de:%.2f",valor);
		}
		else
		{
			valor_pi = 480.00;
			printf("\n O valor do seu ingresso é de:%.2f",valor_pi);
		}
		
		break;
		
		case 3:
			printf("\n Premium será inteira ou meia?");
			scanf("%s", &inferior);
		if(inferior=='m'||inferior=='M')
		{
			valor = 650.00 / 2;
			printf("\n O valor do seu ingresso é de:%.2f",valor);
		}
		else
		{
			valor_if = 650.00;
			printf("\n O valor do seu ingresso é de:%.2f",valor_if);
		}
		
		break;
		
		case 4:
			printf("\n Premium será inteira ou meia?");
			scanf("%s", &superior);
		if(superior=='m'||superior=='M')
		{
			valor = 380.00 / 2;
			printf("\n O valor do seu ingresso é de:%.2f",valor);
		}
		else
		{
			valor_sup = 380.00;
			printf("\n O valor do seu ingresso é de:%.2f",valor_sup);
		}
			
	}
	
	
}
