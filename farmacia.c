#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Fa�a um programa que calcule o troco que o atendente de uma farm�cia deve devolver para um cliente.
//Considere que:
//Se a pessoa possuir cart�o fidelidade tem 10% de desconto sobre o valor total;
//Se a pessoa for aposentada tem 15% de desconto sobre o valor total;
//Seu programa deve solicitar a informa��o do valor total;
//Se a pessoa tem algum tipo de desconto;
//O valor da(s) c�dula(s) com a qual est� pagando;
//Valor do desconto;
//Apresentar na tela o troco a ser devolvido para o cliente (quando existir).

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float valor_desc, valor, valor_c, troco;
	char f, a;
	int desc;
	
	printf("\n Descontos dispon�veis: Cart�o Fidelidade 10%, Pessoa Aposentada 15%");
	
	printf("\n Digite A para Aposentado e F para Cart�o Fidelidade");
	
	printf("\n Qual o valor total da sua compra?");
	scanf("%f",&valor);
	
	printf("\n Qual o valor das c�dulas que voc� est� pagando?");
	scanf("%f", &valor_c);
	
	printf("\n Voc� possui algum tipo de desconto?");
	scanf("%s",&desc);
	
	switch(desc)
	{
		case 'f':
			valor_desc = valor_c - (valor * 0.10);
			printf("\n Com seu desconto do cart�o fidelidade o valor da compra � de:R$%.2f",valor_desc);
			break;
			
		case 'a':
		    valor_desc = valor_c - (valor * 0.15);
		    printf("\n Com seu desconto do cart�o fidelidade o valor da compra � de:R$%.2f",valor_desc);
		    break;
		    
		case 'F':
			valor_desc = valor_c - (valor * 0.10);
			printf("\n Com seu desconto do cart�o fidelidade o valor da compra � de:R$%.2f",valor_desc);
			break;	
			
		case 'A':
		    valor_desc = valor_c - (valor * 0.15);
		    printf("\n Com seu desconto do cart�o fidelidade o valor da compra � de:R$%.2f",valor_desc);
		    	
	}
	
	troco = valor_c - valor_desc;
	printf("\n O valor do seu troco � de:R$%.2f",troco);
}
