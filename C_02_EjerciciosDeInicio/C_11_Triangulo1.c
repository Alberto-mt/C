/*
	Name: Ejercicio triangulo 1
	Author: Alberto Montealegre
	Date: 13/04/23 13:05
	Description: - Pedir un numero entre 3 y 9
				 - Mostrar triangulo con asteriscos
*/

#include <stdio.h>

void	f_app();

int	main(){
	f_app();
	
	return(0);
}

void	f_app()
{
	int filas, columnas, numero;
	
	do{
		system("cls");	// Borramos la consola
		printf("Introduzca un numero entre 3 y 9: ");
		scanf("%d", &numero);	
	}while(numero<3 || numero>9);
	
	for(filas=1; filas<=numero; filas++){
		for(columnas=1; columnas<=filas; columnas++){
			printf("* ");
		}
		printf("\n");
	}
}
