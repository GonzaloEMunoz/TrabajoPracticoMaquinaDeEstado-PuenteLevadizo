#include"..\lib\lib.h"
void menu(void)
{
	printf("\n1-Estado del puente\n");
	printf("2-Modificar el estado del puente\n");
	printf("3-Salir\n\n\n\n\n");
}
void estado(void)
{
	if(estadoactual_p == bajo)
	printf("\nEl puente esta abajo\n");
	else
	printf("\nEl puente esta en el estado %d\n",estadoactual_p);
}
void animacion(void)
{
	if(modificar_p== SUBIR)
	{
		if(estadoactual_p<=estado_3)
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
		Sleep(1400); 					//pequeños delays que le agregue nomas para hacerlo mas divertido
	}
}
void f_subir(int t)
{	
	estadoactual_p++;
	animacion();
	if(t==estado_3)
		estadoactual_p=bajo;
	estado();
	if(estadoactual_p==estado_3)
	printf("\nLa proxima vez que quieras subir el puente bajara todo\n");
}
void f_bajar(int t)
{
	if(t!=bajo)
	{
		estadoactual_p--;
		animacion();
		estado();
	}
	else
		estado();
}
