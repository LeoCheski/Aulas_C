#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i, num;
	//inicializar as variáveis com zero
	float nota=0, soma=0, media=0;
	
	printf("\n Informe o número de alunos da turma:");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("\n Informe a nota do %iº aluno:",i);
		scanf("%f",&nota);
		soma = soma + nota;
	}
	media = soma / num;
	printf("\n A media da turma é:%.1f",media);
}
