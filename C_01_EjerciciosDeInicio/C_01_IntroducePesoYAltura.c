/*
	Name: Introduce peso y altura
	Author: Alberto Montealegre
	Date: 05/04/23 00:21
	Description: - Pedir peso y altura 
				 - Mostrar peso, altura e IMC
*/

#include <stdio.h>

void	f_calcularIMC();

int	main(){
	f_calcularIMC();
	
	return (0);
}

void	f_calcularIMC()
{
	float peso, altura;	

	printf("Introduzca un peso: ");
	scanf("%f", &peso);
	printf("Introduzca una altura: ");
	scanf("%f", &altura);
	
	printf("\nCon un peso de %g kg. y una altura de %g m. el IMC es %g", peso, altura, peso/(altura*altura));
}
