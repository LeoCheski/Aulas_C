#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int cod;
	
	printf("\n Insira o codigo do departamento desejado:");
	scanf("%i",&cod);
	
	switch(cod)
	{
		case 110:
		    printf("\n Este departamento  é o vestuario");
		
		break;
		case 215:
	     	printf("\n Este departamento é eletrodomesticos");
		
		break;
		case 230:
		    printf("\n Este departamento é informática");
		
		break;
		case 354:
	     	printf("\n Este departamento é livraria");
		
		break;
		case 412:
	    	printf("\n Este departamento é esporte");
		
		default:
		printf("\n Este departamento não consta");
	
		
		
	}
	
}
