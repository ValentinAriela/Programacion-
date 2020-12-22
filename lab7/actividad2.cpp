#include <stdio.h>

int main(){
    int numero1;
    int numero2;
	int num=0;
	int multiplicacion=0;
	 
	  printf("Ingrese el primer número:\n");
      scanf("%d", &numero1);
      printf("Ingrese el segundo numero:\n"); 
      scanf("%d", &numero2);
	
	 
	while(num<numero2){
		multiplicacion+=numero1;
		num++;
		}
		
	printf("La multiplicacion de los dos numero ingresados es:%d\n", multiplicacion);
	
	return 0;
	}
