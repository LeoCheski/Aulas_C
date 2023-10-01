#include<stdio.h>
#include<locale.h>
#include<windows.h>

//Numa manh� inspirada um pescador pescou v�rios peixes de v�rios tamanhos, e sabe que vendendo os peixes com 500 gramas
//ou menos por 5 reais a unidade, e os peixesacima de 500 gramas a 10 reais a unidade vai ter uma boa renda.
//Fa�a um programa em C para mostrar ao pescador o peso total de sua pescaria osrendimentos parciais gerados
//(em R$ por categoria), e o valor total (em R$) a serconseguido com a venda dos peixes no mercado.
//Para a entrada de dados, pe�a ao pescador a quantidade de peixes pescados e emseguida os pesos de cada peixe,
//ap�s essas informa��es os resultados solicitados acima


int main() 
{
	setlocale(LC_ALL,"PORTUGUESE");

  int i, peixes, pequenos = 0, grandes = 0;;
  float peso, total = 0, renda = 0, renda_pequenos = 0, renda_grandes = 0; 

  printf("Digite o n�mero de peixes pescados: ");
  scanf("%i", &peixes);

  for (i = 0; i < peixes; i++) {
    printf("Digite o peso do %i� peixe em gramas: ");
    scanf("%f", &peso);
    
    total += peso; 
    
    if (peso <= 500) 
	{ 
      pequenos++; 
      renda_pequenos += 5.00; 
    } 
	else 
	{ 
      grandes++; 
      renda_grandes += 10.00; 
    }
  }

  renda = renda_pequenos + renda_grandes;

  printf("O peso total da pescaria foi %.2f gramas\n", total);
  printf("O n�mero de peixes pequenos foi %d e a renda parcial foi R$ %.2f\n", pequenos, renda_pequenos);
  printf("O n�mero de peixes grandes foi %d e a renda parcial foi R$ %.2f\n", grandes, renda_grandes);
  printf("O valor total a ser conseguido com a venda dos peixes foi R$ %.2f\n", renda);

}

