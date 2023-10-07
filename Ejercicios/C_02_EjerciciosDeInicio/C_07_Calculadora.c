/*
	Name: Calculadora
	Author: Alberto Montealegre
	Date: 12/04/23 13:57
	Description: - Pedir 2 numeros
				 - Mostrar menu de opciones
				 - Elegir opcion y mostrar resultado
*/

#include <stdio.h>

void	f_mostrarOpciones();
void	f_suma(int num1, int num2);
void	f_resta(int num1, int num2);
int		f_multiplica(int num1, int num2);
int		f_divide(int num1, int num2);
void	app();

int	main(){
	app();
	
	return (0);
}

void	f_mostrarOpciones()
{
	printf("\nCALCULADORA:\n");
	printf("1. Sumar.\n");
	printf("2. Restar.\n");
	printf("3. Multiplicar.\n");
	printf("4. Dividir.\n");
	printf("0. Salir.\n");
	printf("Elija una opcion: ");
}
void f_suma(int num1, int num2){
	printf("\n\t%d + %d = %d", num1, num2, num1+num2);
}
void f_resta(int num1, int num2){
	printf("\n\t%d - %d = %d", num1, num2, num1-num2);
}
int f_multiplica(int num1, int num2){
	return num1*num2;
}
int f_divide(int num1, int num2){
	int total;
	total = num1/num2;
	return total;
}

void	app()
{
	int opcion, num1, num2;
	do{
		system("cls");
		printf("Escriba un primer numero: ");
		scanf("%d", &num1);
		printf("Escriba un segundo numero: ");
		scanf("%d", &num2);
		
		f_mostrarOpciones();
		scanf("%d", &opcion);
		
		int total, resultado;
		switch(opcion){
			case 1:
				f_suma(num1, num2);
				break;
			case 2:
				f_resta(num1, num2);
				break;
			case 3:
				printf("\n\t%d * %d = %d", num1, num2, f_multiplica(num1, num2));
				break;
			case 4:
				resultado = f_divide(num1, num2);
				printf("\n\t%d / %d = %d", num1, num2, resultado);
				break;
			case 0:
				printf("Hasta pronto ;)");
				break;
			default:
				printf("Opcion incorrecta");
		}
		getch();
	}while(opcion != 0);
}
