#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Na pastelaria Senhor dos Past�is todos os dias da semana � aplicada uma ofertacom o intuito de atrair a clientela.
//1 - Segunda-feira: O pastel custa R$5,50.
//2- Ter�a-feira: O pastel custa R$5,00 e o Refrigerante R$2,50.
//3- Quarta-feira: O pastel R$4,80 e o suco R$2,80.
//4- Quinta-feira: O pastel R$5,10 e o refrigerante R$2,00.
//5- Sexta-feira: O pastel R$5,50 e o suco R$2,50
//6 � S�bado � Pre�o de tabela
//7 - Domingo � Pre�o de tabela
//O pre�o de tabela normal �:
//- Pastel = 6,50
//- Refrigerante = 3,00
//- Suco = 4,00
//Seu programa deve solicitar qual o dia da semana;
//Seu programa deve solicitar quantos pasteis o cliente deseja;
//Seu programa deve solicitar qual e quantas bebidas o cliente deseja;
//Com base nessas informa��es informar o total a pagar.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float total, pastel, cont;
	int dia, quant_pastel, quant_bebida, tipo_bebida;
	
	
	printf("\n Segunda-feira: O pastel custa R$5,50.");
    printf("\n Ter�a-feira: O pastel custa R$5,00 e o Refrigerante R$2,50.");
    printf("\n Quarta-feira: O pastel R$4,80 e o suco R$2,80");
    printf("\n Quinta-feira: O pastel R$5,10 e o refrigerante R$2,00.");
    printf("\n Sexta-feira: O pastel R$5,50 e o suco R$2,50.");
    printf("\n S�bado � Pre�o de tabela");
    printf("\n Domingo � Pre�o de tabela");
    printf("\n O pre�o de tabela normal �: Pastel = 6,50, Refrigerante (c�digo 1)= 3,00 e Suco (c�digo 2) = 4,00.");
    
    printf("\n Qual o dia da semana?");
    scanf("%i", &dia);
    
    printf("\n Quantos pasteis o cliente deseja?");
    scanf("%i", &quant_pastel);
    
    printf("\n Quantas bebidas voc� deseja?");
    scanf("%i", &quant_bebida);
    
    printf("\n Qual o tipo das bebidas?");
    scanf("%i", &tipo_bebida);
    
    if(tipo_bebida == 1)
    {
    	tipo_bebida = 3.00 * quant_bebida;
    	
	}
	
	else if (tipo_bebida == 2)
	{
		tipo_bebida = 4.00 * quant_bebida;
	
	}
    
    switch(dia)
    {
    	case 1:
    		total = quant_pastel * 5.50;
    		break;
    		
    	case 2:
		    total = (quant_pastel * 5.00) + (quant_bebida * 2.50);
			break;
			
		case 3:
		    total = (quant_pastel * 4.80) + (quant_bebida * 2.80);
			break;
			
		case 4:
		    total = (quant_pastel * 5.10) + (quant_bebida * 2.00);
			break;
			
		case 5:
			total = (quant_pastel * 5.50) + (quant_bebida * 2.50);
			break;
			
		case 6:
			total = (quant_pastel * 6.50) + tipo_bebida;
			break;
			
		case 7:
			total = (quant_pastel * 6.50) + tipo_bebida;
			break;
	}
	
	
	printf("\n O valor do seu pedido foi de:%.2f",total);
    
}
