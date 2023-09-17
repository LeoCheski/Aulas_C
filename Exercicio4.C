#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float numero,dobro,terca;
	
	printf("Informe um numero:");
	scanf("%f",&numero);
	
	dobro = numero*2;
	
	terca = numero/3;
	
	printf("\n O dobro do seu numero é:%.1f",dobro);
	
	printf("\n A terca parte do seu numero é:%.1f",terca);
		
}
