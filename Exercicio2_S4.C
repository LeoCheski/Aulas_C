#include<stdio.h>
#include<locale.h>
// Faça um programa que leia o ano atual e o ano de nascimento
 //de uma pessoa calcule a sua idade.
 //Após verifique se ela já tem idade para ter CNH.
 
 int main()
 {
 	setlocale(LC_ALL,"PORTUGUESE");
 	
 	int ano,nasc,idade;
 	
 	printf("\n Informe o ano atual:");
 	scanf("%i",&ano);
 	
 	printf("\n Informe a data de nascimento:");
 	scanf("%i",&nasc);
 	
 	idade= ano - nasc;
 	
 	printf("\n Sua idade de acordo com as informações é:%i",idade);
 	
 	if(idade>=18)
 	{
 		printf("\n Você tem a idade correta para dirigir");
	}
	else
	{
		printf("\n Você não pode dirigir!");
	}
 	
 }
