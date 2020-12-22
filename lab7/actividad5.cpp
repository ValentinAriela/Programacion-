#include <stdio.h>

int main(){
	int numero;
	printf("Ingrese un número:\n");
	scanf("%d", &numero);
	
	while(numero>=0){
		printf("Número ingresado no valido\n");
		printf("Ingrese nuevamente un número\n");
		scanf("%d", &numero);
		}
	
	
	return 0;
	}

