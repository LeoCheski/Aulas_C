#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int idade;
	printf("\n Informe sua idade:");
	scanf("%i",&idade);
	
	if(idade>=16 && idade<18)
	{
		printf("\n Você pode votar!");
		printf("\n MAS Seu voto não é obrigatório");

	}
	
	else if(idade>=18 && idade<=70)
	{
		printf("\n Seu voto é obrigatório");
	}
	
	else if(idade>70)
	{
		printf("\n Seu voto não é obrigatório");
	}
	
	else
	{
		printf("\n Você ainda não pode votar!");
	}
}
