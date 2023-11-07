#include <stdio.h>
includ

int main() {
    int codigoAcesso = 1234; 
    int codigoInserido;

    while (1) {
        printf("Digite o código de acesso: ");
        scanf("%d", &codigoInserido);

        if (codigoInserido == codigoAcesso) {
            printf("Acesso permitido! Bem-vindo ao edifício.\n");
            break; // Encerra o loop quando o código correto é inserido
        } else {
            printf("Código incorreto. Tente novamente.\n");
        }
    }

    return 0;
}
