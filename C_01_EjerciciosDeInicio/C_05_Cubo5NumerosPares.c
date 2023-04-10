/*
	Name: Cubo 5 números pares 
	Author: Alberto Montealegre
	Date: 06/04/23 19:14
	Description: - Mostramos el cubo de los 5 primeros números pares 
*/

#include <stdio.h>
void	f_result();

int	main(){
	f_result();
	
	return (0);
}

void	f_result()
{
	int x;
	
	for(x=2; x<=10; x+=2){
		printf("%d ", x*x*x);
	}
}
