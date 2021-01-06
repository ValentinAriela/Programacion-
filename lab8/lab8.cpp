#include <stdio.h>

int main(){
	char tablero[3][3]={{'-','-','-'},
		                {'-','-','-'},  
		                {'-','-','-'}
		                };
    int fila;	       
    int columna;
    bool ganador = false; //false = 0
    int turnos = 0;
    
    printf("El juego del gato.\n");
		                 
	printf("%c | %c | %c \n", tablero[0][0], tablero[0][1], tablero[0][2]);
	printf("----------\n");
	printf("%c | %c | %c \n", tablero[1][0], tablero[1][1], tablero[1][2]);
	printf("----------\n");
	printf("%c | %c | %c \n", tablero[2][0], tablero[2][1], tablero[2][2]);
	
	while (ganador == false){
	
	    do{	
			if(turnos%2 == 0){
			printf("Jugador 1 ");
			} else {
				printf("Jugador 2 ");
				}
	    printf("Ingrese una jugada de la forma fila , columna\n");
	    scanf("%d , %d", &fila, &columna);
	 }while(tablero[fila][columna] != '-');
	 
	    if(turnos%2 == 0){
			
        tablero[fila][columna] = 'X';
       }else{
		    tablero[fila][columna] = 'O';
		   }
        printf("\n");
	
     	printf("%c | %c | %c \n", tablero[0][0], tablero[0][1], tablero[0][2]);
    	printf("----------\n");
    	printf("%c | %c | %c \n", tablero[1][0], tablero[1][1], tablero[1][2]);
    	printf("----------\n");
    	printf("%c | %c | %c \n", tablero[2][0], tablero[2][1], tablero[2][2]);
    printf("\n");
    
    if( (tablero[0][0]==tablero[0][1]) && (tablero[0][1]==tablero[0][2]) && (tablero[0][0] != '-') ){
		printf("Ganador en la fila 1.\n");
		ganador = true;
		}
    if( (tablero[1][0]==tablero[1][1]) && (tablero[1][1]==tablero[1][2]) && (tablero[1][0] != '-') ){
		printf("Ganador en la fila 2.\n");
		ganador = true;
		}
	if( (tablero[2][0]==tablero[2][1]) && (tablero[2][1]==tablero[2][2]) && (tablero[2][0] != '-') ){
		printf("Ganador en la fila 3.\n");
		ganador = true;
		}
	if( (tablero[0][0]==tablero[1][0]) && (tablero[1][0]==tablero[2][0]) && (tablero[0][0] != '-') ){
		printf("Ganador en la columna 1\n");
		ganador = true;
		}	
	if( (tablero[0][1]==tablero[1][1]) && (tablero[1][1]==tablero[2][1]) && (tablero[0][1] != '-') ){
		printf("Ganador en la columna 2.\n");
		ganador = true;
		}	
	if( (tablero[0][2]==tablero[1][2]) && (tablero[1][2]==tablero[2][2]) && (tablero[0][2] != '-') ){
		printf("Ganador en la columna 3.\n");
		ganador = true;
		}	
	if( (tablero[0][0]==tablero[1][1]) && (tablero[1][1]==tablero[2][2]) && (tablero[0][0] != '-') ){
		printf("Ganador en una de las diagonales.\n");
		ganador = true;
		}	
	if( (tablero[0][2]==tablero[1][1]) && (tablero[1][1]==tablero[2][0]) && (tablero[0][2] != '-') ){
		printf("Ganador en una de las diagonales.\n");
		ganador = true;
		}	
    turnos++;
    }
	
	
	
	
	return 0;
	}
