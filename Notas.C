#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float nota_1,nota_2,media;
	
	printf("\n Informe a nota 1:");
	scanf("%f",&nota_1);
	
	printf("\n Informe a nota 2:");
	scanf("%f",&nota_2);

	
	media = (nota_1+nota_2)/2;
	
	if(media>=6.0)
	{
		printf("\n Aluno aprovado com media:%.2f",media);
	}
	
	else if(media>=4.0 && media<5.9)
	{
		printf("\n Aluno está de recuperação com media:%.2f",media);
	}
	

	else
	{
		printf("\n Aluno reprovado com media:%.2f",media);
	}
	
	
}
