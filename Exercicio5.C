#include<stdio.h>
#include<locale.h>

int main()
{
	
    setlocale(LC_ALL, "PORTUGUESE");
    
    float largura,altura,tinta;

    printf("Informe a largura:");
    scanf("%f",&largura);
    
    printf("Informe a altura:");
    scanf("%f",&altura);
    
    tinta = (altura*largura)/2;
	
	printf("\n Voce precisa de:%.1f",tinta);


}
