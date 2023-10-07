/*
	Name: Calcular media 
	Author: Alberto Montealegre
	Date: 06/04/23 19:04
	Description: - Pedir 5 números
				 - Calcular media
*/

#include <stdio.h>

void	f_calcularMedia();

int	main(){
	f_calcularMedia();
	
	return (0);
}

void	f_calcularMedia()
{
	float media=0, numero;
	int contador=0;
	
	do{
		printf("Introduzca un numero: ");
		scanf("%f", &numero);
		media += numero;
		
		contador++;
	}while(contador < 5);
	
	
	media = media/5;
	printf("La media es: %g", media);
}
