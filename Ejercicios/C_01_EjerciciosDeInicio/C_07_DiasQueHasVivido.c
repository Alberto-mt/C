/*
	Name: Días que has vivido
	Author: Alberto Montealegre
	Date: 06/04/23 21:09
	Description: - Introducir fecha de nacimiento
				 - Introducir fecha actual
				 - Mostrar diferencia de días
*/

#include <stdio.h>

void	f_diasVividos();

int	main(){
	f_diasVividos();
	
	return (0);
}

void	f_diasVividos(){
	int ddActual, mmActual, aaActual;
	int ddNac, mmNac, aaNac;
	int resultadoUno, resultadoDos, resultadoFinal;
	
	printf("Introduzca un dia de mes de nacimiento: ");
	scanf("%d", &ddNac);
	printf("Introduzca un mes de nacimiento: ");
	scanf("%d", &mmNac);
	printf("Introduzca un anio de nacimiento: ");
	scanf("%d", &aaNac);
	
	printf("Introduzca el dia de mes actual: ");
	scanf("%d", &ddActual);
	printf("Introduzca el mes actual: ");
	scanf("%d", &mmActual);
	printf("Introduzca el anio actual: ");
	scanf("%d", &aaActual);
	
	resultadoUno = (mmNac * 30) + (aaNac * 360) + ddNac;
	resultadoDos = (mmActual * 30) + (aaActual * 360) + ddActual;
	resultadoFinal = resultadoDos - resultadoUno;
	
	
	printf("Los dias vividos son: %d", resultadoFinal);
}





