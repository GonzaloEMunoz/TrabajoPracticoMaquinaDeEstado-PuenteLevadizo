#include<stdio.h>
#include<windows.h>
void menu(void);
void estado(void);
void animacion(void);
void f_subir(int t);
void f_bajar(int t);
char modificar_p;	 		// esta variable es para elegir si queremos subir bajar o esperar
int estadoactual_p; 		// como su nombre lo indica esta variable nos dira el estado actual del puente
int s,opcion; 
typedef enum{
	bajo = 0,
	estado_1 = 1,
	estado_2 = 2,
	estado_3 = 3
}estados_p;            		//estos son todos los estados posibles que tiene el puente 
typedef enum{
	SALIR = 0,
	SEGUIR = 1
}exit_p;
typedef enum{
	BAJAR='b',
	SUBIR='s',
	ESPERAR='e'
}modificacion_p;			
typedef enum{
	ESTADO = '1',
	MODIFICAR_ESTADO = '2',
	SALIR_PROGRAMA = '3'
}MENU_p;					//las etiquetas del menu principal 
