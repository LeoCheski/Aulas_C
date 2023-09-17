#include<stdio.h>
#include<locale.h>
#include<windows.h>

//A escola “APRENDER” faz o pagamento de seus professores por hora/aula.
//Faça umalgoritmo que calcule e exiba o salário de um professor.
//Sabe-se que o valor da hora/aulasegue a tabela abaixo: 
//Professor Nível 1 R$12,00 por hora/aula 
//Professor Nível 2 R$17,00 por hora/aula
//Professor Nível 3 R$25,00 por hora/aula

int main()
{
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	float hora,aula,salario;
	int professor;
	
	printf("\n Informe o nivel do professor(até 3):");
	scanf("%i",&professor);
	
	printf("\n Informe a quantidade de aulas dadas:");
	scanf("%f",&aula);
	
	printf("\n Informe a quantidade de horas trabalhadas:");
	scanf("%f",&hora);
	
	switch(professor)
	{
		case 1:
			salario = (hora*aula)*12.00;
			printf("\n O seu salário é de:R$%.2f",salario);
			break;
			
		case 2:
		    salario = (hora*aula)*17.00;
			printf("\n O seu salário é de:R$%.2f",salario);
			break;
			
		case 3:
		    salario = (hora*aula)*25.00;
		    printf("\n O seu salário é de:R$%.2f",salario);
		
		default:
			printf("\ Professor não consta.");
	}
}
