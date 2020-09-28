#include<stdio.h>
#include<windows.h>
void estado(int t);
void animacion(void);
char modificar_p;	 		// esta variable es para elegir si queremos subir bajar o esperar
int estadoactual_p; 		// como su nombre lo indica esta variable nos dira el estado actual del puente
typedef enum{
	bajo = 0,
	abierto25 = 1,
	abierto50 = 2,
	abierto75 = 3
}estados_p;            		//estos son todos los estados posibles que tiene el puente 
typedef enum{
	BAJAR='b',
	SUBIR='s',
	ESPERAR='e'
}modificacion_p;
estados_p f_bajo(int t);
estados_p f_abierto25grados(int t);
estados_p f_abierto50grados(int t);
estados_p f_abierto75grados(int t);
