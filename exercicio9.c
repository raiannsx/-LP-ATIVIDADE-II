#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main() {
    int numero;
    int numeroPrimo;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Número não primo\n");
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
          
                break;
            }
        }

        if (numeroPrimo) {
            printf("Número primo\n");
        } else {
            printf("Número não primo\n");
        }
    }

    return 0;
}
