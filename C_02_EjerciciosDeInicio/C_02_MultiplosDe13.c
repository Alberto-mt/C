/*
	Name:  Multiplos de 13 menores de mil
	Author: Alberto Montealegre
	Date: 11/04/23 13:24
	Description: - Mostrar los multiplos de 13 menores de mil
				 - Cada 10 n�meros mostrados hacer salto de linea
*/

#include <stdio.h>

void	f_multiplosDe13();

int	main(){
	f_multiplosDe13();
	
	return (0);
}

void	f_multiplosDe13()
{
	int x, contador=0;
	for(x=1; x<=1000; x++){
		if(x%13 == 0){	// M�ltiplo de 13
			printf("%4d ", x);
			contador++;	// Cuenta el n�mero de m�ltiplos de 13
			if(contador%10 == 0){	// Si ha encontrado 10 m�ltiplos, salta de l�nea
				printf("\n");
			}
		}
	}
}

