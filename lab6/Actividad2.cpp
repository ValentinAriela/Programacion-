#include <stdio.h>

int main(){
	int num1;
	int num2;
	int num3;
	
	printf("Ingrese el primer número\n");
	scanf("%d", &num1);
	printf("Ingrese el segundo número\n");
	scanf("%d", &num2);
	printf("Ingrese el tercer número\n");
	scanf("%d", &num3);
	
	if ( num1>num2 && num1>num2) {
		printf("El primer número ingresado es mayor");
		} else if( num2>num1 && num2>num3) {
			printf("El segundo número ingresado es mayor");
			} else if( num3>num2 && num3>num1) {
				printf("El tercer número ingresado es mayor");
				}
	
	
	return 0;
	}
