//Programa que imprime valores de un vector de manera recursiva.

#include <stdio.h>

int x ;
float vector [140];

void  generardatos(){
	for (x= 0 ; x< 140 ; x++){
		vector[x] = x;
	}
}
void  imprimirdatos (int posicion){
	x = posicion;
	if (x< 140 ){
		printf (" \n El valor de la posicion vector[%d] es: %.2f ", x, vector[x]);
		imprimirdatos(x + 1);
	}
}
int  main(){
	generardatos();
	imprimirdatos(0);
	return 0 ;
}