#include <stdio.h>

int main() {
  int n;
  printf("Digite o número de valores: ");
  scanf("%d", &n);

  double valores[n];
  double soma = 0.0;

  for (int i = 0; i < n; i++) {
    printf("Digite o valor %d: ", i + 1);
    scanf("%lf", &valores[i]);
    soma += valores[i];
  }
  double media = soma/n;
  printf("A média dos valores é: %.2lf\n", media);
  return 0;
}