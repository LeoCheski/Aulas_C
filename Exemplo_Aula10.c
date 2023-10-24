#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int i, dias;
	
	printf("\n Favor informar o numero de dias que deseja contabilizar:");
	scanf("%i", &dias);
	
	float fat[dias];
	
	for (i=0; i<dias; i++)
	{
		printf("\n Favor informar o valor faturado no %iº dia:", i+1);
		scanf("%f",&fat[i]);
		
	}
	
	for(i=0; i<dias; i++)
	{
		printf("\n O valor do %iº dia foi R$.2f",i+1, fat[i]);
	}
	 
}
