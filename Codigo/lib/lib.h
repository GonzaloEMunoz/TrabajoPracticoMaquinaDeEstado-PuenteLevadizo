#include<stdio.h>
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
typedef enum{
	ESTADO = '1',
	MODIFICAR_ESTADO = '2',
	SALIR_PROGRAMA = '3'
}MENU_p;
char modificar_p;
int cp = bajo,s = SEGUIR,opcion;
