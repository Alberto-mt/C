/*
	Name: Mostrar dias que tiene el mes
	Author: Alberto Montealegre
	Date: 12/04/23 13:48
	Description: - Introducir numero de mes
				 - Con Switch mostrar los dias que tiene
				 - 0 para salir 
*/

#include <stdio.h>

void	f_diasDeMes();

int main(){
	f_diasDeMes();
	
	return (0);
}

void	f_diasDeMes()
{
	int opcion;
	do{
		system("cls");
		printf("\nIntroduzca un numero de mes (entre 1 y 12): ");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("\nEste mes tiene 31 dias :)\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("\nEste mes tiene 30 dias :(\n");
				break;
			case 2:
				printf("\nEste mes tiene 28 o 29 dias!\n");
				break;
			case 0:
				printf("\nHasta pronto ;)");
				break;
			default:
				printf("\nEl numero introducido no es el correcto :O\n");
		}
		getch();
	}while(opcion != 0);
}
