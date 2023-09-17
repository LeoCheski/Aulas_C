#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int operador,raio,circun;
	
	printf("\n Insira o operador:");
	scanf("%i",&operador);
	
	printf("\n Insira o raio:");
	scanf("%i",&raio);
	
	switch(operador)
	{
		case 1:
			circun = 3.14* (raio * 2);
			printf("\n A area da circunferencia é:%i",circun);
			break;
			
		case 2:
		    circun = 2 * 3.14 * raio;
			printf("\n O perimetro da circunferencia é:%i",circun);
				
		default:
		    printf("\n Erro");		
	}
	
}
