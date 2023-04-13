/*
	Name: N�meros primos hasta el n�mero intorducido 
	Author: Alberto Montealegre
	Date: 06/04/23 21:49
	Description: - Pedir n�mero
				 - Mostrar n�meros primos hasta el n�mero introducido
*/

#include <stdio.h>

void	f_numerosPrimos();

int	main(){
	f_numerosPrimos();
	
	return (0);
}

void	f_numerosPrimos()
{
	int dividendo, divisor, contadorRestos, numero;
	
	printf("Introduzca un numero: ");
	scanf("%d", &numero);
	printf("\n");
	
	for(dividendo=2; dividendo<=numero; dividendo++){
		contadorRestos=0;
		for(divisor=1; divisor<=dividendo; divisor++){
			if(dividendo%divisor == 0){
				contadorRestos++;
			}
		}
		
		if(contadorRestos == 2){
			printf("%d ", dividendo);
		}
	}	
}
