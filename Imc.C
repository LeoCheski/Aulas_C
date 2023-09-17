#include<stdio.h>
#include<locale.h>
#include<windows.h>


int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i, alunos,soma;
	float peso, altura,imc;
	
	printf("\n Informe a quantidade de alunos:");
	scanf("%i",&alunos);
	
	system("cls");
	
	for(i=0; i<alunos; i++)
	{
		printf("\n Informe o peso do %i aluno:",i);
		scanf("%f",&peso);
		
		printf("\n Informe a altura do %i aluno:",i);
		scanf("%f",&altura);
		
		soma = soma + altura;
		
	}
	
	imc = (peso/altura) * altura;
	
	printf("\n O imc de seus alunos é de:%.1f",imc);
}
