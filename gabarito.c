#include<stdio.h>
#include<locale.h>

int main()
{
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	int acertos=0;
	int i, aluno;
	char resposta [5];
	char gabarito[5]={'A','D','C','E','B'};
	
	for(i=0; i<5; i++)
	{
		printf("\n Insira a resposta da %iº questão:",i+1);
		scanf("%s", &resposta[i]);
		
		if(resposta[i]==gabarito[i])
		{
		acertos = acertos + 1;
		}
	}
	printf("\n O total de acertos do aluno é:%i",acertos);
	printf("\n O gabarito é:%s",gabarito);
}
