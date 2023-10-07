/*
	Name: Matriz filas y columnas
	Author: Alberto Montealegre
	Date: 13/04/23 12:45
	Description: - Crear matriz de filas y columnas con iteradores
				 - Las filas seran letras
				 - Las columnas seran numeros
*/

#include <stdio.h>

void	f_app();

int	main(){
	f_app();
	
	return(0);
}

void	f_app()
{
	int fila, col;
	char letra=65;
	
	for(fila=1; fila<=8; fila++){
		for(col=1; col<=8; col++){
			printf("%c%d ", letra, col);
		}
		printf("\n");
		letra++;
	}
}
