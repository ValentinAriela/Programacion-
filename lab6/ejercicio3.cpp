#include <stdio.h>

int main (){
	int clave=20645168;
	
	printf("Ingrese su clave\n");
	scanf("%d", &clave);
	if ( clave == 20645168){
		printf("Su clave es correcta puede seguir");
		}  else if (clave != 20645168){
			printf("Ingrese nuevamente su clave\n");
			scanf("%d", &clave);
			if ( clave == 20645168){
		        printf("Su clave es correcta puede seguir");
				} else (clave != 20645168);{
			        printf("Ingrese nuevamente su clave\n");
			        scanf("%d", &clave);
			        if ( clave == 20645168){
				        printf("Su clave es correcta puede seguir");
			         }else (clave != 20645168);{
						 printf("Usuario bloqueado");  
				 }
			 }
	}
	return 0;
	
	}
