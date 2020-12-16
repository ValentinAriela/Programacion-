#include <stdio.h>

int main (){
	int numero;
	
	printf("Ingrese un número entero\n");
	scanf("%d", &numero);
	if (numero%2 == 0){
		printf("Es un número par\n");
		} else {
			printf("Es un número impar\n");
			}
	return 0;
	}
