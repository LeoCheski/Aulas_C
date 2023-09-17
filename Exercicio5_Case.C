#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int cod,salario,aumento;
	
	printf("\n Informe o código do cargo:");
	scanf("%i",&cod);
	
	printf("\n Informe o salário:");
	scanf("%i",&salario);
	
	
	switch(cod)
	{
		case 1:
			aumento = salario + (salario*0.5);
			printf("\n O seu salário atual como técnico é de:%i",salario);
			printf("\n O seu novo salário é de:%i",aumento);
			break;
			
		case 2:
			aumento = salario + (salario*0.3);
			printf("\n O seu salário atual como gerente é de:%i",salario);
			printf("\n O seu novo salário é de;%i",aumento);
			break;
			
		case 3:
			aumento = salario + (salario*0.2);
			printf("\n O seu salário atual como funcionário é de:%i",salario);
			printf("\n O seu novo salário como funcionário é de:%i",aumento);
			
		default:
		    printf("\n Código inválido");
		
	}
}
