/*
	Name: Ejercicios de iteradores
	Author: Alberto Montealegre
	Date: 06/04/23 22:06
	Description: - Mostrar del 1 al 10 con bucle for
				 - Mostrar del 1 al 10 con bucle while
				 - Mostrar del 1 al 10 con bucle do-while
				 
				 - Mostrar del 10 al 1 con bucle for
				 - Mostrar del 10 al 1 con bucle while
				 - Mostrar del 10 al 1 con bucle do-while
				 
				 - Mostrar pares del 1 al 10 con bucle for
				 - Mostrar pares del 1 al 10 con bucle while
				 - Mostrar pares del 1 al 10 con bucle do-while
				 
				 - Mostrar impares del 10 al 1 con bucle for
				 - Mostrar impares del 10 al 1 con bucle while
				 - Mostrar impares del 10 al 1 con bucle do-while
*/

#include <stdio.h>

void	f_for_1_al_10();
void	f_while_1_al_10();
void	f_doWhile_1_al_10();

void	f_for_10_al_1();
void	f_while_10_al_1();
void	f_doWhile_10_al_1();

void	f_pares_for_1_al_10();
void	f_pares_while_1_al_10();
void	f_pares_doWhile_1_al_10();

void	f_impares_for_10_al_1();
void	f_impares_while_10_al_1();
void	f_impares_doWhile_10_al_1();

int	x;

int	main(){
	f_for_1_al_10();
	f_while_1_al_10();
	f_doWhile_1_al_10();
	
	f_for_10_al_1();
	f_while_10_al_1();
	f_doWhile_10_al_1();
	
	f_pares_for_1_al_10();
	f_pares_while_1_al_10();
	f_pares_doWhile_1_al_10();
	
	f_impares_for_10_al_1();
	f_impares_while_10_al_1();
	f_impares_doWhile_10_al_1();
	
	return (0);
}

void	f_for_1_al_10()
{
	x;
	
	for(x=1; x<=10; x++){
		printf("%d ", x);
	}
	
	printf("\n");
}

void	f_while_1_al_10()
{
	x=1;
	while(x<=10){
		printf("%d ", x);
		x++;
	}
	
	printf("\n");
}

void	f_doWhile_1_al_10()
{
	x=1;
	do{
		printf("%d ", x);
		x++;
	}while(x<=10);
	
	printf("\n-----------------------------\n");
}

void	f_for_10_al_1()
{
	for(x=10; x>0; x--){
		printf("%d ", x);
	}
	
	printf("\n");
}

void	f_while_10_al_1()
{
	x=10;
	while(x>0){
		printf("%d ", x);
		x--;
	}
	
	printf("\n");
}

void	f_doWhile_10_al_1()
{
	x=10;
	do{
		printf("%d ", x);
		x--;
	}while(x>0);
	
	printf("\n-----------------------------\n");
}

void	f_pares_for_1_al_10()
{
	for(x=1; x<=10; x++){
		if(x%2 == 0){
			printf("%d ", x);
		}
	}
	printf("\n");
}

void	f_pares_while_1_al_10()
{
	x=1;
	while(x<=10){
		if(x%2 == 0){
			printf("%d ", x);	
		}
		x++;
	}
	printf("\n");
}

void	f_pares_doWhile_1_al_10()
{
	x=1;
	do{
		if(x%2 == 0){
			printf("%d ", x);	
		}
		x++;
	}while(x<=10);
	
	printf("\n-----------------------------\n");
}

void	f_impares_for_10_al_1()
{
	for(x=10; x>=1; x--){
		if(x%2 == 1){	// if(x%2 != 0)
			printf("%d ", x);
		}
	}
	printf("\n");
}

void	f_impares_while_10_al_1()
{
	x=10;
	while(x>0){
		if(x%2 != 0){
			printf("%d ", x);
		}
		x--;
	}
	printf("\n");
}

void	f_impares_doWhile_10_al_1()
{
	x=10;
	do{
		if(x%2 != 0){
			printf("%d ", x);
		}
		x--;
	}while(x>=1);
}

