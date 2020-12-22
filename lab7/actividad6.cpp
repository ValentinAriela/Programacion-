#include <stdio.h>

int main(){
	
	int numero;
	int numero1;
	int numero2;
	
	printf("Ingrese un 0\n");
	scanf("%d", &numero1);
	printf("Ingrese un 1\n");
	scanf("%d", &numero2);
	printf("Ingrese un numero cualquiera\n");
	scanf("%d", &numero);
	
	
	for(int i=0; i<=numero; i++){
		numero = numero1 + numero2;
		numero1 = numero2;
		numero2 = numero;
		printf("La suma de la sucesion de numeros es %d,\n", numero);
		}
		
	return 0;
	}
