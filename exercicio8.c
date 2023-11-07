#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    // Solicite um número inteiro positivo
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
    
    }

    printf("Contagem regressiva a partir de %d:\n", numero);

    while (numero >= 0) {
        switch (numero) {
            case 0:
                printf("Zero!\n");
                break;
            case 1:
                printf("Um!\n");
                break;
            case 2:
                printf("Dois!\n");
                break;
            case 3:
                printf("Três!\n");
                break;
            default:
                printf("%d...\n", numero);
                break;
        }

        numero --;
    }

    return 0;
}
