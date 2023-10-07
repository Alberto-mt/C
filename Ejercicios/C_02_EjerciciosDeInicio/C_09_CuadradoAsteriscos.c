/*
	Name: Cuadrado de asteriscos
	Author: Alberto Montealegre
	Date: 13/04/23 12:54
	Description: - Pedir un numero entre 3 y 9
				 - Mostrar cuadrado de numero con asteriscos
*/

#include <stdio.h>

void	f_app();

int	main(){
	f_app();
	
	return(0);	
}

void	f_app()
{
	int x, fila, columna;
	do{
		printf("Por favor, elija un numero entre 3 y 9: ");
		scanf("%d", &x);
		printf("\n");
		
		if(x<=9 && x>=3){
			for(fila=1 ; fila<=x ; fila++){
				for(columna=1 ; columna<=x ; columna++){
					printf("* ");
				}
			printf("\n");
			}
		}
	}while(x<3 || x>9);
}
