/*
	Name: Ejercicio iteradores for y while
	Author: Alberto Montealegre
	Date: 11/04/23 13:33
	Description: - Mostrar números del 1 al 100
				 - Con iterador for y while
*/

#include <stdio.h>

void	f_for(int i, int j);
void	f_while(int i, int j);

int	main(){
	int i = 1;
	int j = 100;
	
	f_for(i, j);
	f_while(i, j);
	
	return (0);
}

void	f_for(int i, int j)
{
	int x;
	for(x=i; x<=j; x++){
		printf("%4d", x);
		
		if(x%10==0){
			printf("\n");
		}
	}
	printf("\n\n");
}
void	f_while(int i, int j)
{
	do{
		printf("%4d", i);
		if(i%10==0){
			printf("\n");
		}
		i++;
	}while(i<=j);
}
