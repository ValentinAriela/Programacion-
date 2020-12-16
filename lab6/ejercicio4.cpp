#include <stdio.h>

int main (){
  int edad;
  int destino;
  printf("Ingrese su Edad\n");
  scanf("%d", &edad);
  if (edad>0 && edad<15){
	 printf("Destino1 sera igual a 1, Destino2 sera igual a 2 y Destino3 sera igual a 3\n");
	 printf("Ingrese su destino\n");
     scanf("%d", &destino);
     if (destino == 1){
		 printf("Pagar $2500");
		 }  else if(destino == 2){
			 printf("Pagar $1200");
			 } else if(destino == 3){
				 printf("Pagar $2000");
				 }
				 } else if ( edad<=65){
					  printf("Destino1 sera igual a 1, Destino2 sera igual a 2 y Destino3 sera igual a 3\n");
					  printf("Ingrese su destino\n");
					  scanf("%d", &destino);
					   if (destino == 1){
						    printf("Pagar $4200");
						    }  else if(destino == 2){
								printf("Pagar $3000");
								} else if(destino == 3){
									printf("Pagar $3800");
									}
									}else if ( edad>65){
										 printf("Destino1 sera igual a 1, Destino2 sera igual a 2 y Destino3 sera igual a 3\n");
										  printf("Ingrese su destino\n");
										  scanf("%d", &destino);
										   if (destino == 1){
											   printf("Pagar $3000");
											   }  else if(destino == 2){
												   printf("Pagar $2000");
												   } else if(destino == 3){
													   	printf("Pagar $2500");
				 }
}
return 0;
}





