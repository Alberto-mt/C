/*
	Name: Introduce peso y altura
	Author: Alberto Montealegre
	Date: 05/04/23 00:21
	Description: - Pedir peso y altura 
				 - Mostrar peso, altura e IMC
*/

#include <stdio.h>

int main(){
	float peso, altura;	

	printf("Introduzca un peso: ");
	scanf("%f", &peso);
	printf("Introduzca una altura: ");
	scanf("%f", &altura);
	
	printf("Con un peso de %g kg. y una altura de %g m. el IMC es %g", peso, altura, peso/(altura*altura));
	
	return (0);
}
