#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Se o cliente comprar mais de 10 kg em frutas ou se o valor total da compra
//ultrapassar R$ 50,00,receberá ainda um desconto de 10% sobre este total.
//Escreva um algoritmo para ler a quantidade(em kg) de morangos e a quantidade
//(em kg) de maças adquiridas e escreva o valor a ser pagopelo cliente.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float morango,maca,kg_maca,kg_morango;
	
	printf("\n Quantos quilos de morango você comprou:");
	scanf("%f",&morango);
	
	system("cls");
	
	printf("\n Quantos quilos de maçã você comprou:");
	scanf("%f",&maca);
	
	system("cls");
	
	if(morango<=5&&maca<=5)
	{
		kg_morango = morango * 6.50;
		printf("\n O valor de seus morangos foi de:R$%.2f",kg_morango);
		kg_maca = maca * 3.80;
		printf("\n O valor de suas maçãs foi de:R$%.2f",kg_maca);
		
	}
	
	else if(morango>5&&maca>5)
	{
		kg_morango = morango * 6.20;
		printf("\n O valor de seus morangos foi de:R$%.2f",kg_morango);
		kg_maca = maca * 3.50;
		printf("\n O valor de suas maçãs foi de:R$%.2f",kg_maca);
		
	}
	
	 else if ((morango>=10&&maca>=10)||(kg_morango>50&&kg_maca>50));
	{
	    kg_morango = (morango * 6.20)-0.1;
		printf("\n O valor de seus morangos com um desconto de 10porc foi de:R$%.2f",kg_morango);
		kg_maca = (maca * 3.50)-0.1;
		printf("\n O valor de suas maçãs com um desconto de 10porc foi de:R$%.2f",kg_maca);	
	}

	
	
}
