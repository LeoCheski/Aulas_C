#include<stdio.h>
#include<locale.h>
#include<windows.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	char sexo;
	int i, idade, soma, quant, quant_m, quant_f, media;

	
	printf("\n Informe a quantidade de pessoas:");
	scanf("%i", &quant);
	
	system("cls");

    for(i=0;i<quant;i++)
    {
    printf("\n Informe o sexo:");
    scanf("%s", &sexo);
    
    printf("\n Informe a idade:");
    scanf("%i", &idade);
    
    soma = soma * idade;
    
    if(sexo =='M'||sexo =='m')
	{
		quant_m = quant_m + 1;
	}
	else 
	{
		quant_f = quant_f + 1;
	}
    
}	    
    system("cls");
    
    printf("\n O total de homens nesse grupo é:%i",quant_m);
    printf("\n O total de mulheres nesse grupo é:%i",quant_f);
    printf("\n A media de idade das pessoas do grupo é %i",soma/quant);
		
}
