#include <stdio.h>

int main() {
  double salarios[5];
    
  for (int i = 0; i < 5; i++) {
    printf("Digite o salário da pessoa %d: ", i + 1);
    scanf("%lf", &salarios[i]);
      
    if (salarios[i] < 1000) {
        salarios[i] *= 1.10; 
    }
  }

  printf("Salários atualizados:\n");
  for (int i = 0; i < 5; i++) {
    printf("Pessoa %d: R$%.2lf\n", i + 1, salarios[i]);
  }
  return 0;
}
