#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade;
    float nota, soma = 0;

    printf("Informe a quantidade de notas a serem inseridas: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade de notas deve ser maior que zero.\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("Informe a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    float media = soma / quantidade;

    printf("A média das notas é: %.2f\n", media);   
}
 return 0;
