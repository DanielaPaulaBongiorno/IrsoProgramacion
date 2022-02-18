/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int suma(int valor1, int valor2, int valor3){
	int resultado = valor1 + valor2 + valor3;
	return resultado;
}
int main() {
	int num1, num2, num3;
	printf("Ingrese un primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese un segundo numero: ");
	scanf("%i", &num2);
	printf("Ingrese un tercer numero: ");
	scanf("%i", &num3);   
    
    FILE* fichero;     
    fichero = fopen("datos3.txt", "a");
    
    fprintf (fichero, "%d \n", num1);
    fprintf (fichero, "%d \n", num2);
    fprintf (fichero, "%d \n", num3);
    fprintf (fichero, "La suma de los tres numeros es: %d", suma(num1, num2, num3));
    printf("\nLa suma es: %d \n", suma(num1, num2, num3));
  	fclose(fichero);
  	printf("Proceso completado y guardado en archivo");
    return 0;	
}
