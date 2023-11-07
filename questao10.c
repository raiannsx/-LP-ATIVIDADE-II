#include <stdio.h>

int main() {
    float numero1, numero2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("Digite a operaçao desejada (+ ou -): ");
    scanf(" %c", &operacao);

    float resultado = 0;

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            
        case '-':
            resultado = num1 - num2;
            
            printf("Operaçao inválida\n");
            return 1;
    }

    printf("Resultado: %f\n", resultado);

    return 0;
}
