#include<stdio.h>
void menu(void);
void estado(void);
void modificar(void);
void animacion(void);
typedef enum{
	bajo = 0,
	estado_1 = 1,
	estado_2 = 2,
	estado_3 = 3
}estadosp_t;
typedef enum{
	SALIR = 0,
	SEGUIR = 1
}exit_p;
int cp=bajo;
char modificar_p;
void menu(void)
{
	printf("\n\n1-Estado del puente\n");
	printf("2-Modificar el estado del puente\n");
	printf("3-Salir\n\n\n\n\n");
}
void estado(void)
{
	if(cp == bajo)
	printf("El puente esta abajo\n");
	else
	printf("El puente esta en el estado %d\n",cp);
}
void modificar(void)
{
		printf("Suba o baje el puente (s/b/e)\n");
		modificar_p=getchar();
		fflush(stdin);
		if(modificar_p== 'e')
		estado();
		if(modificar_p== 's')
		{	
			cp++;
			animacion();
			if(cp>estado_3)
				cp=bajo;
			if(cp==estado_3)
				printf("La proxima vez que queremos subir el puente bajara todo\n");
			estado();
		}
		if(modificar_p=='b')
		{
			if(cp==bajo)
			estado();
			else
			{
				animacion();
				cp--;
				estado();
			}
		}
}
void animacion(void)
{
	if(modificar_p== 's')
	{
		if(cp<=estado_3)
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
	if(modificar_p=='b')
	{
		printf("\nBAJANDO\n");
		printf("BAJANDO\n");
		printf("BAJANDO\n");
		printf("BAJANDO\n");
		printf("BAJANDO\n");
	}
}
