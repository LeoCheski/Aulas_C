#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Voc� trabalha em uma empresa de automa��o e seu chefe pediu para criar um programa para controlar
//as comportas que a empresa vende para tanques depiscicultura. Como os tanques recebem �gua de rio,
//na entrada do tanque h� umsensor que diz quanta �gua entrou (em m3). J� na sa�da do tanque fica a comporta,
//que � feita para liberar exatamente 20% da capacidade do tanque a cada vez que �aberta. 
//A comporta deve ser aberta sempre que o tanque passar de 80% de suacapacidade.
//Crie um programa em C++ que leia (em m3) a capacidade m�xima dotanque e o volume atual.
//Depois, a cada itera��o o programa deve ler quanta�gua entrou pelo rio (aflu�ncia em m3)
//e decidir se abre ou n�o a comporta. Oprograma acaba quando a �gua ultrapassar a capacidade m�xima 
//do tanque mesmoap�s a libera��o da �gua.

int main()
 {
  setlocale(LC_ALL,"PORTUGUESE");
  float capacidade_maxima, volume_atual, afluencia;
  int comporta_aberta;

  printf("Capacidade m�xima do tanque: ");
  scanf("%f", &capacidade_maxima);
  printf("Volume atual do tanque: ");
  scanf("%f", &volume_atual);

  
  while (volume_atual <= capacidade_maxima) 
  {
   
    printf("Aflu�ncia: ");
    scanf("%f", &afluencia);

    volume_atual += afluencia;
    
    if (volume_atual > 0.8 * capacidade_maxima)
	 {
      comporta_aberta = 1;
      volume_atual -= 0.2 * capacidade_maxima;
      printf("A comporta foi aberta.\n");
    }
  }

  if (comporta_aberta) {
    printf("O tanque transbordou!\n");
  }

}
