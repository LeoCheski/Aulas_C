#include<stdio.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int i, alunos;
	
	printf("\n Insira a quantidade de alunos:");
	scanf("%i", &alunos);
	
	float notas[alunos];
	
	for(i=0; i<alunos; i++)
	{
		printf("\n Insira a nota do aluno %i�:",i+1);
		scanf("%f", &notas[i]);
		
	}
	
	for(i=0; i<alunos; i++)
	{
		
		if(notas[i]>=7.5)
		{
			printf("\n A nota do aluno %i� � %.1f",i+1,notas[i]);
		}
	
}
}
