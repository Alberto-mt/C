/*
	Name: Tu signo del Zodiaco 
	Author: Alberto Montealegre
	Date: 06/04/23 21:33
	Description: - Introduce día
				 - Introduce mes
				 - Muestra el signo zodiacal al que pertenece
*/

#include <stdio.h>

void	f_signoZodiaco();

int	main(){
	f_signoZodiaco();
	
	return (0);
}

void	f_signoZodiaco()
{
	int dia, mes;
	
	printf("Introduzca un dia de mes: ");
	scanf("%d", &dia);
	printf("Introduzca un mes: ");
	scanf("%d", &mes);
	
	if(dia >= 21 && dia <=31 && mes == 3 || dia >= 1 && dia <=19 && mes == 4){
		printf("\nAries");
	}else if(dia >= 20 && dia <=30 && mes == 4 || dia >= 1 && dia <=20 && mes == 5){
		printf("\nTauro");
	}else if(dia >= 21 && dia <=31 && mes == 5 || dia >= 1 && dia <=20 && mes == 6){
		printf("\nGeminis");
	}else if(dia >= 21 && dia <=30 && mes == 6 || dia >= 1 && dia <=22 && mes == 7){
		printf("\nCancer");
	}else if(dia >= 23 && dia <=31 && mes == 7 || dia >= 1 && dia <=22 && mes == 8){
		printf("\nLeo");
	}else if(dia >= 23 && dia <=31 && mes == 8 || dia >= 1 && dia <=22 && mes == 9){
		printf("\nVirgo");
	}else if(dia >= 23 && dia <=30 && mes == 9 || dia >= 1 && dia <=22 && mes == 10){
		printf("\nLibra");
	}else if(dia >= 23 && dia <=31 && mes == 10 || dia >= 1 && dia <=21 && mes == 11){
		printf("\nEscorpio");
	}else if(dia >= 22 && dia <=31 && mes == 11 || dia >= 1 && dia <=19 && mes == 12){
		printf("\nCapricornio");
	}else if(dia >= 20 && dia <=31 && mes == 12 || dia >= 1 && dia <=21 && mes == 1){
		printf("\nSagitario");
	}else if(dia >= 22 && dia <=31 && mes == 1 || dia >= 1 && dia <=18 && mes == 2){
		printf("\nAcuario");
	}else if(dia >= 19 && dia <=29 && mes == 2 || dia >= 1 && dia <=20 && mes == 3){
		printf("\nPiscis");
	}
}
