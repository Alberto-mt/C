/*
	Name: Número elevado a X
	Author: Alberto Montealegre
	Date: 06/04/23 18:47
	Description: - Introducir un número
				 - Mostrar número elevado al cuadrado, cubo, cuarta y quinta
*/

#include <stdio.h>

int		f_cuadrado(int numero);
int 	f_cubo(int numero);
int 	f_cuarta(int numero);
int 	f_quinta(int numero);

int	main(){
	int x;
	
	printf("Introduzca un numero: ");
	scanf("%d", &x);
	printf("\nEl cuadrado de %d es: %d", x, f_cuadrado(x));
	printf("\nEl cubo de %d es: %d", x, f_cubo(x));
	printf("\nEl numero %d elevado a la cuarta es: %d", x, f_cuarta(x));
	printf("\nEl numero %d elevado a la quinta es: %d", x, f_quinta(x));
	
	return (0);
}

int f_cuadrado(int numero){
	return numero*numero;
}

int f_cubo(int numero){
	return f_cuadrado(numero)*numero;
}

int f_cuarta(int numero){
	return f_cubo(numero)*numero;
}

int f_quinta(int numero){
	return f_cuarta(numero)*numero;
}
