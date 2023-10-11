#include <stdio.h>

int main() {
  int Alunos;

  printf("Digite o número de alunos: ");
  scanf("%d", &Alunos);

  double notaG1[Alunos];
  double notaG2[Alunos];
  double medias[Alunos];

  for (int i = 0; i < Alunos; i++) {
    printf("Digite a nota G1 do aluno %d: ", i + 1);
    scanf("%lf", &notaG1[i]);
    printf("Digite a nota G2 do aluno %d: ", i + 1);
    scanf("%lf", &notaG2[i]);
    medias[i] = (notaG1[i] + notaG2[i]) / 2.0;
  }

  printf("\nNotas e médias dos alunos:\n");
  for (int i = 0; i < Alunos; i++) {
    printf("Aluno %d - G1: %.2lf, G2: %.2lf, Média: %.2lf\n", i + 1, notaG1[i], notaG2[i], medias[i]);
  }
  return 0;
}