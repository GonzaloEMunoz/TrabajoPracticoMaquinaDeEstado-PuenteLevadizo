#include"..\lib\lib.h"
main()
{
	int opcion;
	int s = SEGUIR;
	while(s==SEGUIR)
	{
		menu();
		opcion=getchar();
		fflush(stdin);
		switch(opcion)
		{
			case '1':
				estado();
				break;
			case '2':
				modificar();
				break;
			case '3':
				s = SALIR;
				break;		
		}
	}
}
