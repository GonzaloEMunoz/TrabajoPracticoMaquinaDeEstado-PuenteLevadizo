#include"..\lib\funciones.c"
main()
{
	while(s==SEGUIR)
	{
		menu();
		opcion=getchar();
		fflush(stdin);
		switch(opcion)
		{
			case ESTADO:
				estado();
				break;
			case MODIFICAR_ESTADO:
				modificar();
				break;
			case SALIR_PROGRAMA:
				s = SALIR;
				break;		
		}
	}
}
