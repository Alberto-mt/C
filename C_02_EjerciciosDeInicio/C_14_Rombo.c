/*
	Name: Ejercicio
	Author: Alberto Montealegre
	Date: 18/04/23 11:57
	Description: - Pedir un numero entre 3 y 9
				 - Mostrar rombo con asteriscos
*/

#include<stdio.h>

void	f_app();

int	main(){
	f_app();
	
	return(0);
}

void	f_app()
{
	int fila, columna, numero;
	
	do{
		system("cls");
		printf("Introduzca un numero entre 3 y 9: ");
		scanf("%d", &numero);	
	}while(numero<3 || numero>9);

	for(fila=1; fila<numero; fila++){
		for(columna=1; columna<=numero; columna++){			
			if(fila+columna>numero){
				printf(" *");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(fila=numero; fila>=1; fila--){
		for(columna=1; columna<=numero; columna++){			
			if(fila+columna>numero){
				printf(" *");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}	
}
