#include<stdio.h>
void menu(void);
void estado(void);
void modificar(void);
void animacion(void);

int cp;
char mod;
void menu(void)
{
	printf("\n\n1-Estado del puente\n");
	printf("2-Modificar el estado del puente\n");
	printf("3-Salir\n\n\n\n\n");
}
void estado(void)
{
	if(cp == 0)
	printf("El puente esta abajo\n");
	else
	printf("El puente esta en el estado %d\n",cp);
}
void modificar(void)
{
		printf("Suba o baje el puente (s/b/e)\n");
		mod=getchar();
		fflush(stdin);
		if(mod== 'e')
		estado();
		if(mod== 's')
		{	
			cp=cp+1;
			animacion();
			if(cp==4)
				cp=0;
			if(cp==3)
			printf("La proxima vez que queremos subir el puente bajara todo\n");
			estado();
		}
		if(mod=='b')
		{
			if(cp==0)
			estado();
			else
			{
				animacion();
				cp=cp-1;
				estado();
			}
		}
}
void animacion(void)
{
	if(mod== 's')
	{
		if(cp!= 4)
		{
			printf("\nSUBIENDO\n");
			printf("SUBIENDO\n");
			printf("SUBIENDO\n");
			printf("SUBIENDO\n");
			printf("SUBIENDO\n");
		}
		else
		{
			printf("\nBAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");
			printf("BAJANDO\n");	
		}
	}
	if(mod=='b')
	{
		printf("\nBAJANDO\n");
		printf("BAJANDO\n");
		printf("BAJANDO\n");
		printf("BAJANDO\n");
		printf("BAJANDO\n");
	}
}
