#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");	
    
    int valor,cod;
    
    printf("\n Informe o valor da etiqueta:");
    scanf("%i",&valor);
    
    printf("\n Informe a condição de pagamento:");
    scanf("%i",&cod);
    
    switch(cod)
    {
    	case 1:
    		cod = valor - (valor*0.1);
    		printf("\n Com o pagamento a vista sua compra com um desconto de 0,1 fica no valor de:R$%.i",cod);
    		break;
    		
    	case 2:
			cod = valor	-(valor*0.05);
			printf("\n Com o pagamento no crédito a vista sua compra com desconto de 0,05 fica no valor de:R$%.i",cod);
			break;
		
		case 3:
		    cod = valor / 2;
			printf("\n Com o pagamento no crédito em duas vezes sem juros sua compra fica no valor de:R$%.i por mês",cod);
			break;
		
		case 4:
		    cod = (valor/3) +(valor*0.1);
		    printf("\n Com o pagamento no crédito em três vezes com juros de 0,1 sua compra fica no valor de:R$%.i por mês",cod);
					
	}
}
