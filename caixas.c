#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Construa um algoritmo que apresente o peso total que será carregado por um container. 
//Sabe-se que esse container carrega 32 caixas, com pesos diferentes.
//Será entrada do programa o peso (P) de cada uma das caixas.

int main() 
{
	setlocale(LC_ALL,"PORTUGUESE");
	
  float peso_total = 0, peso_caixa; 
  int i; 

  
  for (i = 1; i <= 5; i++) 
  {
    
    printf("Digite o peso da caixa %d em kg: ", i);
    scanf("%f", &peso_caixa);
   
    peso_total = peso_total + peso_caixa;
  }

  
  printf("O peso total do container é %.2f kg\n", peso_total);

}
