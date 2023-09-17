#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float salario,alimento,contas,combustivel,poupanca,lazer;
	
	printf("Informe o salario:");
	scanf("%f",&salario);
	
	alimento = salario*20/100;
	
	contas = salario*35/100;
	
	combustivel = salario*20/100;
	
	poupanca = salario*10/100;
	
	lazer = salario-(alimento+contas+combustivel+poupanca);
	
	printf(" Valor da alimentacao:%.1f",alimento);
	
	printf(" Valor das contas:%.1f",contas);
	
	printf(" Valor do combustivel:%.1f",combustivel);
	
	printf(" Valor da poupanca:%.1f",poupanca);
	
	prinft(" Valor que resta para o lazer:%.1f",lazer);
}
