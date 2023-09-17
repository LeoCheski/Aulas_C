#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

//Você foi contratado por uma nova república que necessita fornecer um programa escritoem C
//para realizar o ajuste anual de rendimentos pessoa física. O programa deve ler:
//RBA: Renda bruta anual;
//NDP: Número de dependentes;
//IPG: Imposto pago no ano.
//A base de cálculo (BC) é dada por RBA - NDP *1500,00. O número máximo de dependentesdedutíveis é 4.
//Para o cálculo do imposto devido você deve utilizar tabela progressiva abaixo
//paradefinir imposto devido(IBC), que é calculado aplicando a porcentagem indicada 
//(alíquota) sobre a Base de Cálculo:
//Com estes dados você deve calcular o imposto devido e, descontando deste o imposto que
//já foipago no ano(IPG), informar ao usuário:
//Valor final do imposto a pagar
//Valor final da restituição a receber
//Mensagem indicando que usuário tem imposto quitado.

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float rba,ipg,bc,imp,imp_pagar;
	int ndp;
	
	printf("\n Informe sua renda bruta anual:");
	scanf("%f",&rba);
	
	printf("\n Informe o seu número de dependentes:");
	scanf("%i",&ndp);
	
	printf("\n Informe o imposto pago no ano:");
	scanf("%f",&ipg);
	
	if(ndp > 4)
	{
		bc = rba - (4 * 1500);
	}
	
	else
	{
		bc = rba - (ndp * 1500);
	}
	
	if (bc <= 15000)
	{
		imp = bc * 0;
	}
	
	else if (bc <=35000)
	{
		imp = bc * 0.075;
	}
	
	else if (bc <= 280000)
	{
		imp = bc * 0.15;
	}
	
	else
	{
		imp = bc * 0.6;
	}
	
	printf("\n\nRenda Bruta Anual: R$%.2f",rba);
	printf("\n\nNúmero de dependentes:%.f",ndp);
	printf("\n\nImposto pago:R$%.2f",ipg);
	
	if(imp > ipg)
	{
		imp_pagar = imp - ipg;
		printf("\n Você deve pagar um imposto de:R$%.2f",imp_pagar);
		
	}
	
	
	else
	{
	   imp_pagar = ipg - imp;
	   printf("\n Você deve receber um valor de:R$%.2f",imp_pagar);	
	}	
	
}
