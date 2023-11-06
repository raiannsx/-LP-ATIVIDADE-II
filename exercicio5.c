#include <stdio.h>
#include <stdlib.h>
  
 
int main() {
    
	int escolha; 
    
	 
    printf("Escolha um idioma de preferência:\n");
    printf("1 - Ingles\n");
    printf("2 - Espanhol\n");
    printf("3 - Frances\n");
    printf("Digite o numero correspondente ao idioma: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Welcome!\n");
            break;
        case 2:
            printf("Bienvenido!\n");
            break;
        case 3:
            printf("Bienvenue!\n");
            break;
        default:
            printf("Escolha inválida. Por favor, escolha 1, 2 ou 3.\n");
            break;
    }
	
    return 0;
}
