#include"lib.h"
void estado(int t)
{
	if(t == bajo)
	printf("\nEl puente esta abajo\n\n");
	if(t == abierto25)
	printf("\nEl puente esta abierto 25 grados\n");
	if(t == abierto50)
	printf("\nEl puente esta abierto 50 grados\n");
	if(t == abierto75)
	printf("\nEl puente esta abierto 75 grados\n");
}
void animacion(void)
{
	if(modificar_p== SUBIR)
	{
		if(estadoactual_p!=abierto75)
		{
			printf("\nSUBIENDO\n");
			Sleep(1400);			
		}
		else
		{	
			int j;
			for(j=abierto75;j>bajo;j--)
			{
				printf("\nBAJANDO\n");
				Sleep(1400);	
				if(j==abierto75)
				printf("\n50 GRADOS\n");
				if(j==abierto50)
				printf("\n25 GRADOS\n");	
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
estados_p f_abierto25grados(int t)
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
estados_p f_abierto50grados(int t)
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
		printf("\n\nADVERTENCIA LA PROXIMA VEZ QUE INTENTES SUBIR EL PUENTE BAJARA TODO\n\n");
		return t;
	}
	if(modificar_p==ESPERAR)
	{
		estado(t);
		return t;
	}
}
estados_p f_abierto75grados(int t)
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
