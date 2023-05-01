/*
	Name: Ejercicio triangulo 2
	Author: Alberto Montealegre
	Date: 14/04/23 14:54
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
		system("cls");
		printf("Introduzca un numero entre 3 y 9: ");
		scanf("%d", &numero);	
	}while(numero<3 || numero>9);
	
	for(filas=1; filas<=numero; filas++){
		for(columnas=1; columnas<=numero; columnas++){
			if(filas+columnas <= numero){
				printf(" ");
			}else{
				printf("* ");
			}
		}
		printf("\n");
	}
}
