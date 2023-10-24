#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float soma = 0, media;
	int  a , n;
	
	printf("\n Informe a quantidade de alunos:");
	scanf("%i", &a);
	
	printf("\n Informe a quantidade de notas:");
	scanf("%i", &n);
	
	float mat [a] [n];
	int i, j;
	
	for(i=0; i<a; i++)
	{
		soma = 0;
		printf("\n Informe as notas do aluno º%i:",i+1);
		
		for(j=0; j<n; j++)
		{
			printf("Informe a nota [%i] [%i] :",i+1,j+1);
			scanf("%f", &mat[i][j]);
			
			soma = soma + mat[i][j];
		}
		//media = soma/4;
		printf("\n A média do aluno é:%1.f", soma);
	}
	
}
