#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define CR 2
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i, soma,cr;
	float altura, altura_m=0, peso, peso_m=0;
	
	
	
	for(i=0; i<8 ; i++)
	{
		printf("\n Informe o peso da %iº criança:",i+1);
		scanf("%f",&peso);
		
		system("cls");
		
		printf("\n Informe a altura da %iº criança:",i+1);
		scanf("%f",&altura);
	    
	    system("cls");
	}
	
	if(peso>peso_m)
	{
		peso_m = peso;
	}
	
	if(altura>altura_m)
	{
		altura_m = altura;
	}
	
	
	printf("\n O maior peso é:%.2f",peso_m);
	printf("\n A maior altura é:%.2f",altura_m);
	
	
}
