/*PUNTERO PARA ACCEDER A INFO DE UNA ESTRUCTURA*/

#include <stdio.h>

struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
	};

struct estructura_amigo amigo = {
	"Juanjo",
	"López",
	"983403367",
	30
	};

int main()
{
	struct estructura_amigo *p_amigo;

	p_amigo = &amigo;

    printf( "%s ", p_amigo->nombre );
	printf( "%s tiene ", p_amigo->apellido );
	printf( "%i años ", p_amigo->edad );
	printf( "y su teléfono es el %s.\n" , p_amigo->telefono );
}