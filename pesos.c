#include <stdio.h>
#include<locale.h>
#include<windows.h>

//Joana pesa 55kg e engorda 200gr por ano, enquanto Gabriela pesa 51kg e engorda300gr por ano.
//Faça um programa que calcule e no final mostre na tela em quantosanos Gabriela será mais gorda que a Joana.
//Utilize o comando de Repetição ENQUANTO ...FAÇA.


int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
 
  float peso_joana = 55, peso_gabriela = 51; 
  int anos = 0; 

  
  while (peso_gabriela <= peso_joana)
   {
    peso_joana = peso_joana + 0.2; 
    peso_gabriela = peso_gabriela + 0.3; 
    anos++;
   }

  
  printf("Gabriela será mais gorda que Joana em %i anos.\n", anos);
  printf("Peso final de Joana: %.1f kg\n", peso_joana);
  printf("Peso final de Gabriela: %.1f kg\n", peso_gabriela);


}

