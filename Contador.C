  #include <stdio.h>
  #include <locale.h>
  
  int main()
   {
  char nome[100];
  char sexo;
  int idade;
  int contador_feminino_maior_21 = 0;
  int contador_masculino_maior_18 = 0;
  int soma_idade_feminino = 0;
  int soma_idade_masculino = 0;
  int total_feminino = 0;
  int total_masculino = 0;
  
    for (int i = 1; i <= 100; i++) 
    {
    printf("Informe o nome do estudante %d: ", i);
    scanf("%s", nome);
  
    printf("Informe a idade do estudante %d: ", i);
    scanf("%d", &idade);
  
    printf("Informe o sexo do estudante %d (M/F): ", i);
    scanf(" %c", &sexo);
  
    if (sexo == 'F' && idade > 21) {
    contador_feminino_maior_21++;
    soma_idade_feminino += idade;
    total_feminino++;
    } 
    else if (sexo == 'M' && idade > 18) {
    contador_masculino_maior_18++;
    soma_idade_masculino += idade;
    total_masculino++;
    }
      }
  
      if (total_feminino > 0) {
          float media_idade_feminino = (float)soma_idade_feminino / total_feminino;
          printf("a) Quantidade de mulheres com mais de 21 anos: %d\n", contador_feminino_maior_21);
          printf("d) Média de idade das mulheres: %.2f\n", media_idade_feminino);
      } else {
          printf("a) Não há mulheres com mais de 21 anos.\n");
          printf("d) Não há mulheres no grupo.\n");
      }
  
      if (total_masculino > 0) {
          float media_idade_masculino = (float)soma_idade_masculino / total_masculino;
          printf("b) Quantidade de homens com mais de 18 anos: %d\n", contador_masculino_maior_18);
          printf("c) Média de idade dos homens: %.2f\n", media_idade_masculino);
      } else {
          printf("b) Não há homens com mais de 18 anos.\n");
          printf("c) Não há homens no grupo.\n");
      }
  
      return 0;
  }
