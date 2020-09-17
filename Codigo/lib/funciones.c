#include"..\lib\lib.h"
void menu(void)
{
	printf("\n1-Estado del puente\n");
	printf("2-Modificar el estado del puente\n");
	printf("3-Salir\n\n\n\n\n");
}
void estado(void)
{
	if(cp == bajo)
	printf("\nEl puente esta abajo\n");
	else
	printf("\nEl puente esta en el estado %d\n",cp);
}
void animacion(void)
{
	if(modificar_p== SUBIR)
	{
		if(cp<=estado_3)
		{
			printf("\nSUBIENDO\n");
			Sleep(1400);
		}
		else
		{	
			int j;
			for(j=estado_3;j>bajo;j--)
			{
				printf("\nBAJANDO\n");
				Sleep(1400);
			}	
		}
	}
	if(modificar_p==BAJAR)
	{
		printf("\nBAJANDO\n");
		Sleep(1400);
	}
}
void f_subir(int t)
{	
	cp++;
	animacion();
	if(t==estado_3)
		cp=bajo;
	estado();
	if(cp==estado_3)
	printf("\nLa proxima vez que quieras subir el puente bajara todo\n");
}
void f_bajar(int t)
{
	if(t!=bajo)
	{
		cp--;
		animacion();
		estado();
	}
	else
		estado();
}
