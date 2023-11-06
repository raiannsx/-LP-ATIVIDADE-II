#include <stdio.h>
#include <stdilib.h

int main() {
  float temperatura;

  //Solicite a temperatura ao usuário
  printf("Informe a temperatura em graus Celsius: ");
  scanf("%f", &temperatura);

  //Informe a temperatura
  if (temperatura >= 25) {
    printf("O clima será ensolarado.\n");
  } else if (temperatura <= 15) {
    printf("O clima será chuvoso.\n");
  } if (temperatura >= 15 && temperatura <= 25) {
    printf("O clima será nublado.\n");
  }

  return 0;
}
