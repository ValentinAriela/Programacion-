#include <stdio.h>

int main(){
	int numero;
	bool condicion;
	printf("Ingrese un número:\n");
	scanf("%d", &numero);
	
	for(int i=1; i<=numero; i++){
		  if(numero!=1 && numero!=0){
            	
			  for(int i=2; i<=numero; i++){
				  if(numero%i==0){
					  if(numero==i){
						  condicion = true;
						  }else{
							  condicion = false;
							  return condicion;
							  }
					  }for(int i=1; i<=numero; i++){
		  if(numero!=1 && numero!=0){
				  
		  
		 condicion = false;
		  return condicion;}
			
	     printf("%d,", i);}

	}
}}

	return 0;
	}
