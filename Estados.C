#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Uma empresa vende o mesmo produto em quatro diferentes estados.
//Cada estado possuiuma taxa diferente de imposto sobre o produto.
//Faça um algoritmo em que o usuário entre com o valor e o estado
//de destino do produto e o programa retorne o preço final do produto
//acrescido do imposto do estado em que ele será vendido. Se o estado
//digitado forinválido, mostrar uma mensagem de erro.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float valor,imposto;
	int estado;
	
	
	printf("\ Estados disponíveis:MG(1),SP(2),RJ(3),MS(4)");
	
	printf("\n Informe o valor do produto:");
	scanf("%f",&valor);
	
	printf("\n Informe o estado do destino do produto:");
	scanf("%i",&estado);
	
	switch(estado)
	{
		case 1:
		    imposto = valor + 0.7;
		    printf("\n Seu produto ficará no valor de:%.2f",imposto);
		    break;
		
		case 2:
			imposto = valor + 0.12;
			printf("\n Seu produto ficará no valor de:%.2f",imposto);
		    break;
		    
		case 3:
		    imposto = valor + 0.15;
			printf("\n Seu produto ficará no valor de:%.2f",imposto);
		    break;
		    
		case 4:
		    imposto = valor + 0.8;
			printf("\n Seu produto ficará no valor de:%.2f",imposto);
		
		default:
		    printf("\n Estado inválido.");
	}
}
