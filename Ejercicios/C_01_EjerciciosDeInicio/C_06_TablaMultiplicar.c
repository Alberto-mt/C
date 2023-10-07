/*
	Name: Tabla de multiplicar 
	Author: 
	Date: 06/04/23 19:22
	Description: - Pedir número
				 - Mostrar tabla de multiplicar de ese mismo número
*/

#include <stdio.h>

void	f_tablaMultiplicar();

int	main(){
	f_tablaMultiplicar();
	
	return (0);
}

void	f_tablaMultiplicar()
{
	int numero, x;
	
	printf("Introduzca un numero: ");
	scanf("%d", &numero);
	
	for(x=1; x<=10; x++){
		printf("\n%2d x %2d = %2d", numero, x, numero*x);
	}
}
