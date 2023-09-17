#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Em uma certa papelaria, até 100 folhas, a cópia do xerox custa R$ 0,25 e,
//acima de 100folhas, cada cópia adicional custa R$ 0,20. Escreva um algoritmo
//que dado o número totalde cópias, informe o valor a ser pago.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float copia,total;
	
	printf("\n Informe a quantidade de cópias do xerox:");
	scanf("%f",&copia);
	
	system("cls");
	
	if(copia<=100)
	{
		total = copia * 0.25;
		printf("\n O valor de suas cópias é de:R$%.2f",total);
	}
	
	else if(copia>100)
	{
		total = copia*0.20;
		printf("\n O valor de suas cópias é de:R$%.2f",total);
	}
}
