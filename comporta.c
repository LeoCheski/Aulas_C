#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Você trabalha em uma empresa de automação e seu chefe pediu para criar um programa para controlar
//as comportas que a empresa vende para tanques depiscicultura. Como os tanques recebem água de rio,
//na entrada do tanque há umsensor que diz quanta água entrou (em m3). Já na saída do tanque fica a comporta,
//que é feita para liberar exatamente 20% da capacidade do tanque a cada vez que éaberta. 
//A comporta deve ser aberta sempre que o tanque passar de 80% de suacapacidade.
//Crie um programa em C++ que leia (em m3) a capacidade máxima dotanque e o volume atual.
//Depois, a cada iteração o programa deve ler quantaágua entrou pelo rio (afluência em m3)
//e decidir se abre ou não a comporta. Oprograma acaba quando a água ultrapassar a capacidade máxima 
//do tanque mesmoapós a liberação da água.

int main()
 {
  setlocale(LC_ALL,"PORTUGUESE");
  float capacidade_maxima, volume_atual, afluencia;
  int comporta_aberta;

  printf("Capacidade máxima do tanque: ");
  scanf("%f", &capacidade_maxima);
  printf("Volume atual do tanque: ");
  scanf("%f", &volume_atual);

  
  while (volume_atual <= capacidade_maxima) 
  {
   
    printf("Afluência: ");
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
