#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i, alunos;
	
	printf("\n Insira a quantidade de alunos:");
	scanf("%i", &alunos);
	
	float notas[alunos], soma, media;
	
	for(i=0; i<alunos; i++)
	{
		
		printf("\n Insira a nota do aluno %iº:",i+1);
		scanf("%f", &notas[i]);
		
		soma = soma + notas[i];
		
	}
	
	
	for(i=0; i<alunos; i++)
	{
		printf("\n A nota do aluno %iº é %.1f",i+1,notas[i]);
		
	}
	
	media = soma / alunos;
	
	printf("\n A media das notas da turma é de %.1f",media);
}
