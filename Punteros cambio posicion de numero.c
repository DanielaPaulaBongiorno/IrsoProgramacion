/*Con punteros cambio valor de x e y*/

#include <stdio.h>
void cambiar(int *a, int *b);
int main()
{
    int x;
    int y;
    printf("Ingrese valor de x: ");
    scanf("%d", &x);
    printf("Ingrese valor de y: ");
    scanf("%d", &y);
    cambiar(&x, &y);
    printf("El valor de x es %d, y el de y es %d", x, y);
    return 0;
}
void cambiar(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}