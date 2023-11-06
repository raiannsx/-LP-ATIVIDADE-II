#include <stdio.h>
#include <stdlib.h>

	int main(){
		
	int	escolha;
	
	printf("escolha o codigo do produto\n");
	printf("1 - camiseta\n");
	printf("2 - Calca\n");
	printf("3 - Sapato\n");
	printf("digite o codigo correspondente ao produto");
	scanf("%d", &escolha);
	
	switch (escolha) {
		  case 1:
            printf("camiseta, 35R$!\n");
            break;
            
              case 2:
            printf("calca, 125R$!\n");
            break;
            
            case 3:
            	printf("sapato, 150R$!\n");
            	break;
            	
            }
        return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	

