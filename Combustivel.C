#include<stdio.h>
#include<locale.h>
#include<windows.h>
//Escreva um algoritmo que leia o número de litros abastecidos, o tipo de combustível
//(codificadocom 1 para álcool e 2 para gasolina), o preço do litro do combustível
//e apresente o valor a serpago pelo cliente.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float litro,preco,valor;
	int combus;
	
	printf("\n Insira quantos litros de combustível foi abastecido:");
	scanf("%f",&litro);
	
	system("cls");
	
	printf("\n Insira o tipo de combustível:");
	scanf("%i",&combus);
	
	system("cls");
	
	printf("\n Qual o preço do litro:");
	scanf("%f",&preco);
	
	system("cls");
	
	switch(combus)
	{
		case 1:
            if(litro<=20)
			{
		    valor = (preco*litro)-0.03;
		    printf("\n O valor a ser pago é de:%.2f",valor);
		    break;
	        }
	        else if(litro>20)
			{
	        valor = (preco*litro)-0.05;
			printf("\n O valor a ser pago é de:%.2f",valor);
			}
			break;
	        
		case 2:
			if(litro<=20)
			{
			valor = (preco*litro)-0.035;
			printf("\n O valor a ser pago é de:%.2f",valor);
	     	}
			
			else if(litro>20)
			{
			valor = (preco*litro)-0.06;
			printf("\n O valor a ser pago é de:%.2f",valor);
	    	}
								
}
}
