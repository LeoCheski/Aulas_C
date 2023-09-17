#include<stdio.h>
#include<locale.h>

int main()
{
	locale(LC_ALL,"PORTUGUESE");
	
	int num;
	
	printf("\n Insira o numero do dia da semana:");
	scanf("%i",&num);
	
	switch(num)
	{
		case 1:
			printf("\n O dia da semana inserido é o Domingo");
			break;
		
		case 2:
		    printf("\n O dia da semana inserido é a segunda-feira");
	    	break;
		
		case 3:
			printf("\n O dia da semana inserido é a terça-feira");
			break;
			
		case 4:
		    printf("\n O dia da semana inserido é a quarta-feira");
			break;
			
		case 5:
		    printf("\n O dia da semana inserido é a quinta-feira");
			break;
			
		case 6:
		    printf("\n O dia da semana inserido é a sexta-feira");
			break;
			
		case 7:
		    printf("\n O dia da semana inserido é o sabado");
		    break;
			
		if(num==7||num<1)
		    printf("\n Dia da semana inválido");				
		    	
	}
}
