/*
	Name: Ejercicio menú de consola
	Copyright: 
	Author: Alberto Montealegre
	Date: 11/04/23 13:55
	Description: - Crear menu de opciones
				 - Opcion 1: Mostrar saludo
				 - Opcion 2: Pedir y sumar 2 numeros
				 - Opcion 3: Decir que grupo es mejor
				 - Opción 0: Salir
				 - Opción incorrecta >> Seguir mostrando menu
*/

#include <stdio.h>

void	f_mostrarOpcionesMenu();
void	f_opcion1();
void	f_opcion2();
void	f_opcion3();
void	f_opcion0();
void	f_opcionDefault();
void	f_mostrarMenu();
int suma(int a, int b);

int main(){
	f_mostrarOpcionesMenu();
	
	f_mostrarMenu();
	
	return (0);
}

void	f_mostrarMenu()
{
	int opcion;
	do{
		f_mostrarOpcionesMenu();
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
				f_opcion1();
				break;
			case 2:
				f_opcion2();
				break;
			case 3:
				f_opcion3();
				break;	
			case 0:
				f_opcion0();
				break;
			default:
				f_opcionDefault();
		}
		getch();
	}while(opcion != 0);	
}

void	f_mostrarOpcionesMenu()
{
	system("cls");
	printf("\n\nBienvenidos a nuestro primer menu:\n");
	printf("1. Te daremos las buenas tardes.\n");
	printf("2. Te daremos la posibilidad de sumar dos numeros.\n");
	printf("3. Te recordaremos que el grupo A siempre fue mejor que el B.\n");
	printf("0. Salir.\n");
	printf("Elija una opcion: ");
}

int	suma(int a, int b){
	return a + b;
}

void	f_opcion1()
{
	printf("Buenas tardes ;)\n");
}

void	f_opcion2()
{
	int	a ,b;
	printf("Introduzca un numero: ");
	scanf("%d", &a);
	printf("Introduzca otro numero: ");
	scanf("%d", &b);
	printf("La suma de %d + %d es %d", a, b, suma(a, b));
}

void	f_opcion3()
{
	printf("DAW mola mas que DAM ;)\n");
}

void	f_opcion0()
{
	printf("Hasta pronto!");
}

void	f_opcionDefault()
{
	printf("\nOpcion incorrecta! :(\n");
}
