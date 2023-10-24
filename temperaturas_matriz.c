#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Uma esta��o meteorol�gica em uma cidade registra temperaturasextremas ao longo de uma semana. 
//A temperatura � medida em grausCelsius. Cada linha da matriz representa um dia da semana,
//e cada colunarepresenta uma hora do dia. Voc� deve criar um programa em linguagemC para realizar as seguintes tarefas:
//Solicite ao usu�rio que insira as temperaturas de manh�, a tarde e a noitepara cada dia da semana. 
//As temperaturas podem ser n�meros decimais.Ap�s informar os dados, calcule e mostre na tela:
//1.Calcule a temperatura m�dia para cada dia da semana.
//2.Determine a temperatura m�dia para cada per�odo ao longo de todaa semana.
//3.Encontre o dia e a hora em que a temperatura foi mais alta.

int main() 
{
    setlocale(LC_ALL, "PORTUGUESE");

    int temp[7][3];
    int tempAlta = 0, diaQuent = 0, horaQuent = 0, mediaDia, mediaHora;
    int i, j, dia, hora;

    for (i=0; i<7; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\nDigite a temperatura para o dia %d, per�odo %d (em Celsius): ", i + 1, j + 1);
            scanf("%d", &temp[i][j]);
            
            if (temp[i][j] > tempAlta)
            {
                tempAlta = temp[i][j];
                diaQuent = i;
                horaQuent = j;
            }
        }
    }

    printf("\nTemperatura m�dia por dia da semana:\n");
    
    for (i=0; i<7; i++) 
    {
        mediaDia = 0;
        for (j=0; j<3; j++)
        {
            mediaDia += temp[i][j];
        }
        mediaDia = mediaDia / 3;
        printf("Dia %d �C: %d\n", i + 1, mediaDia);
    }

    printf("\nTemperatura m�dia para cada per�odo ao longo da semana:\n");
    
    for (j=0; j<3; j++)
    {
        mediaHora = 0;
        for (i=0; i<7; i++)
        {
            mediaHora += temp[i][j];
        }
        mediaHora = mediaHora / 7;
        printf("Per�odo %d �C: %d\n", j + 1, mediaHora);
    }

    printf("\nO dia mais quente: %d\n", diaQuent + 1);
    printf("A hora mais quente: %d\n", horaQuent + 1);
}

