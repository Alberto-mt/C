/*
	Name: Temperatura en grados celsius y kelvin
	Author: Alberto Montealegre
	Date: 05/04/23 00:39
	Description: - Pedir temperatura en grados celsius
	             - Mostrar temperatura en grados celsius y kelvin
*/

#include <stdio.h>
#define KELVIN 273.15

int main(){

	float celsius, kelvin;
	
	printf("Introduzca una temperatura en grados Celsius: ");
	scanf("%f", &celsius);
	
	kelvin = celsius + KELVIN;
	printf("%g grados Celsius son %g grados Kelvin.", celsius, kelvin);
	
	return (0);
}
