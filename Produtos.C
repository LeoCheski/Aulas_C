#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e opreço unitário.
//Calcular e escrever o total (total = quantidade adquirida * preço unitário), odesconto e o total
//a pagar (total a pagar = total - desconto), sabendo-se que:
//- Se quantidade <= 5 o desconto será de 2%
//- Se quantidade > 5 e quantidade <=10 o desconto será de 3%
//- Se quantidade > 10 o desconto será de 5%

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float quant,unit,total,desc;
	char prod;
	
	printf("\n Informe o nome do produto adquirido:");
	scanf("%s",&prod);
	
	system("cls");
	
	printf("\n Informe a quantidade do produto:");
	scanf("%f",&quant);
	
	system("cls");
	
	printf("\n Informe o preço unitário do produto:");
	scanf("%f",&unit);
	
	total = quant * unit;
	
	if(quant<= 5)
    {
		desc = total - 0.2;
		printf("\n O total de sua compra com um desconto de 0,2 é de:R$ %.2f",desc);
	}
	
	else if(quant>5 && quant<=10)
	{
		desc = total - 0.3;
		printf("\n O total de sua compra com um desconto de 0,3 é de:R$ %.2f",desc);
	}
	
	else if(quant>10)
	{
		desc = total - 0.5;
		printf("\n O total de sua compra com um desconto de 0,5 é de:R$ %.2f",desc);
	}
}
