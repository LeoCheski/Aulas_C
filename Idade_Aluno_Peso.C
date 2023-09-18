  #include<stdio.h>
  #include<locale.h>
  #include<windows.h>
  
  
  
  int main() {
  setlocale(LC_ALL, "PORTUGUESE");
  int i, idade;
  float altura, somaIdades = 0, somaAlturas = 0;
  int contAlunosMenos170 = 0, contAlunosMais20 = 0;
  
    for (i = 1; i <= 45; i++) 
    {
          printf("Digite a idade do aluno %d: ", i);
          scanf("%d", &idade);
  
          printf("Digite a altura do aluno %d (em metros): ", i);
          scanf("%f", &altura);
  
          // Verifica a idade média dos alunos com menos de 1,70m de altura
          if (altura < 1.70) {
          }
  
          // Verifica a altura média dos alunos com mais de 20 anos
          if (idade > 20) {
              somaAlturas += altura;
              contAlunosMais20++;
          }
      }
  
  // Calcula a idade média dos alunos com menos de 1,70m de altura
  float idadeMediaMenos170 = contAlunosMenos170 > 0 ? somaIdades / contAlunosMenos170 : 0;
  
  // Calcula a altura média dos alunos com mais de 20 anos
  float alturaMediaMais20 = contAlunosMais20 > 0 ? somaAlturas / contAlunosMais20 : 0;
  
  printf("Idade média dos alunos com menos de 1,70m de altura: %.2f anos\n", idadeMediaMenos170);
  printf("Altura média dos alunos com mais de 20 anos: %.2f metros\n", alturaMediaMais20);
  
  return 0;
}
