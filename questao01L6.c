#include <stdio.h>

int main() {
  double salarios[10];
  double SalarioMaior;

  for (int i = 0; i < 10; i++) {
    printf("Digite o salário %d: ", i + 1);
    scanf("%lf", &salarios[i]);
  }

  SalarioMaior = salarios[0];
  for (int i = 1; i < 10; i++) {
    if (salarios[i] > SalarioMaior) {
      SalarioMaior = salarios[i];
    }
  }
  printf("\nO maior salário é %.2lf\n", SalarioMaior);
  return 0;
}
