#include<stdio.h>
#include<locale.h>

//1) Tendo como dados de entrada a altura e o gênero de uma pessoa,
// construa um algoritmo que calcule o seu peso ideal,de acordo com as
// seguintes fórmulas:? para homens: (72.7 x h) – 58? para mulheres: (62.1 x h) – 44.7

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float altura,peso_ideal;
	char genero;
	
	printf("\n Informe a sua altura:");
	scanf("%f",&altura);
	
	printf("\n Informe seu genero:");
	scanf("%s",&genero);
	
	
	if(genero=='M'||genero=='m')
	{
		peso_ideal=(72.7 * altura) - 58;
		printf("\n Seu peso ideal é:%.2f",peso_ideal);
	}
	
	else if(genero=='F'||genero=='f')
	{
		peso_ideal=(62.1 * altura) - 44.7;
		printf("\n Seu peso ideal é:%.2f",peso_ideal);
	
	}
}
