#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	char chuva;
	
	printf("\n Vai chover hoje?");
	scanf("%c",&chuva);
	
	if(chuva=='s'||chuva=='S')

	{
	   printf("\n Leve o guarda chuva");
    }
    
    else
    
    {
       printf("\n Não precisa do guarda chuva");	
	}
}
