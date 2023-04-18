/*
	Name: Mostrar dia de la semana
	Author: Alberto Montealegre
	Date: 12/04/23 13:37
	Description: - Introducir día semana con numero
				 - Con Switch mostrar dia (1 al 7) en string
				 - 0 para salir
*/

#include <stdio.h>

void	f_diaSemana();

int	main(){
	f_diaSemana();
	
	return (0);
}

void	f_diaSemana()
{
	int opcion;
	
	do{
		system("cls");
		printf("Introduzca un numero de la semana entre 1 y 7: ");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1: printf("\nLunes");
				break;
			case 2: printf("\nMartes");
				break;
			case 3: printf("\nMiercoles");
				break;
			case 4: printf("\nJueves");
				break;
			case 5: printf("\nViernes");
				break;
			case 6: printf("\nSabado");
				break;
			case 7: printf("\nDomingo");
				break;
			case 0: printf("\nHasta pronto :)");
				break;
			default: printf("El numero esta fuera de rango");
		}
		getch();
	}while(opcion != 0);
}
