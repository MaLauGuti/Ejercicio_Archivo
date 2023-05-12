// Registro de clientes y escritura de archivo
#include <stdio.h>

struct CLIENTES {
	char nombre [50];
	char apellido[50];
	int edad;
}cli;

int registro_clientes (FILE*pf);

int main ()
{
	int c;
	FILE*pf;
	pf =fopen("clientes.dat", "w");
	if (pf == NULL){
		printf("Error al abrir archivo\n");
		return -1;
	}
	else{
		printf("Archivo abierto de forma exitosa\n");
		c = registro_clientes(pf);
		if (c>0){printf("Registro exitoso");	}
		fclose(pf);
		return 0;
	}
}

int registro_clientes (FILE*pf){
	printf("Ingrese nombre: ");
	scanf("%s", cli.nombre);
	printf("Ingrese apellido: ");
	scanf("%s", cli.apellido);
	printf("Ingrese edad:");
	scanf("%i", cli.edad);
	fprintf(pf,"%s","%s",cli.nombre,cli.apellido);
	return 1;
}