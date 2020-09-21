#include"..\lib\lib.h"
void menu(void)
{
	printf("\n1-Estado del puente\n");
	printf("2-Modificar el estado del puente\n");
	printf("3-Salir\n\n\n\n\n");
}
void estado(int t)
{
	if(t == bajo)
	printf("\nEl puente esta abajo\n");
	else
	printf("\nEl puente esta en el estado %d\n",t);
}
void animacion(void)
{
	if(modificar_p== SUBIR)
	{
		if(estadoactual_p!=estado_3)
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
int f_bajo(int t)
{
	if(modificar_p!=SUBIR)
	{
		estado(t);
		return t;
	}
	else
	{
		t++;
		animacion();
		estado(t);
		return t;
	}
}
int f_estado_1(int t)
{
	if(modificar_p==BAJAR)
	{
		t--;
		animacion();
		estado(t);
		return t;
	}
	if(modificar_p==SUBIR)
	{
		t++;
		animacion();
		estado(t);
		return t;
	}
	if(modificar_p==ESPERAR)
	{
		estado(t);
		return t;
	}
}
int f_estado_2(int t)
{
	if(modificar_p==BAJAR)
	{
		t--;
		animacion();
		estado(t);
		return t;
	}
	if(modificar_p==SUBIR)
	{
		t++;
		animacion();
		estado(t);
		printf("\nLa proxima vez que intentes subir el puente bajara todo\n");
		return t;
	}
	if(modificar_p==ESPERAR)
	{
		estado(t);
		return t;
	}
}
int f_estado_3(int t)
{
	if(modificar_p==BAJAR)
	{
		t--;
		animacion();
		estado(t);
		return t;
	}
	if(modificar_p==SUBIR)
	{
		t=0;
		animacion();
		estado(t);
		return t;
	}
	if(modificar_p==ESPERAR)
	{
		estado(t);
		return t;
	}
}
