#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>

//Faça um programa para cadastrar o acesso de 5 pessoas em um prédio comercial. O programa devera solicitar ao visitante.
//Nome completo.
//Endereço.
//Rg ou CPF.
//Utilize vetores para realizar o cadastro dos visitantes. Ao final do dia imprima os dados dos visitantes na tela.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	char  nome[2][35], endereco [2][30];
	int i;
	char documento[2][20];
	for (i=0; i<2; i++)
	{
		printf("\n Digite seu nome completo:",i+1);
		fflush(stdin);
		gets(nome[i]);
		
		printf("\n Digite seu endereço:",i+1);
		fflush(stdin);
		gets(endereco[i]);
		
		printf("\n Para inserir o documento sendo RG ou CPF:",i+1);
		scanf("%s",&documento[i]);
	
	}
	
	for(i=0; i<2; i++)
	{
		printf("\n Nome:%s",nome[i]);
		printf("\n Endereço: %s",endereco[i]);
		printf("\n Documento:%s",documento[i]);
	}
		
}
