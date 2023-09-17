#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float km,dias,cauculo;
	
	printf("Insira a quantidade de km rodados:");
	scanf("%f",&km);
	
	printf("Insira os dias utilizados:");
	scanf("%f",&dias);
	
	cauculo = (dias*90)+(km*0,20);
	
	printf("\n O total e de:%.1f",cauculo);
}
