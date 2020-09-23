#include"lib.h"
void estado(int t)
{
	if(t == bajo)
	printf("\nEl puente esta abajo\n\n");
	else
	printf("\nEl puente esta en el estado %d\n\n",t);
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
estados_p f_bajo(int t)
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
estados_p f_estado_1(int t)
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
estados_p f_estado_2(int t)
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
		printf("\nLa proxima vez que intentes subir el puente bajara todo\n\n");
		return t;
	}
	if(modificar_p==ESPERAR)
	{
		estado(t);
		return t;
	}
}
estados_p f_estado_3(int t)
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
