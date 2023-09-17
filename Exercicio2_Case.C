#include<stdio.h>
#include<locale.h>

int main()
{
	 setlocale(LC_ALL,"PORTUGUESE");
	 
	float num_1,num_2,cauculo;
	
	char oper;
	
	printf("\n Insira o primeiro número:");
	scanf("%f",&num_1);
	
	printf("\n Insira o segundo número:");
	scanf("%f",&num_2);
	
	printf("\n Insira a operação desejada:");
	scanf("%s",&oper);
	
	switch(oper)
	{
		case '+':
			cauculo = num_1 + num_2;
			printf("\n O resultado da soma dos dois valores inseridos é:%.f",cauculo); 
			break;
		
		case '-':
		    cauculo = num_1 - num_2;
			printf("\n O resultado da subtração dos dois valores inseridos é:%.f",cauculo);
			break;
			
		case'*':
		    cauculo = num_1 * num_2;
			printf("\n O resultado da multiplicação dos dois valores inseridos é:%.f",cauculo);
			break;
			
		case'/':
			cauculo = num_1 / num_2;
			printf("\n O resultado da divisão dos dois valores inseridos é:%.f",cauculo);
			
		if('/'&& num_1 || num_2 == 0)
		    printf("\n Não é possível dividir realizar a divisão.");
					
	}
	

}
