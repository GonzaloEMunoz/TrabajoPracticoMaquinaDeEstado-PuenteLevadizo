#include"..\src\funciones.c"
main()
{	
	estadoactual_p=bajo;
	s=SEGUIR;
	while(s==SEGUIR)
	{
		menu();
		opcion=getchar();
		fflush(stdin);
		switch(opcion)
		{
			case ESTADO:
				estado(estadoactual_p);
				break;
			case MODIFICAR_ESTADO:
				printf("\n\nSuba o baje el puente (s/b/e)\n\n");
				modificar_p=getchar();
				fflush(stdin);
				switch(estadoactual_p)
				{
					case bajo:
						estadoactual_p=f_bajo(bajo);
						break;
					case estado_1:
						estadoactual_p=f_estado_1(estado_1);
						break;
					case estado_2:
						estadoactual_p=f_estado_2(estado_2);
						break;
					case estado_3:
						estadoactual_p=f_estado_3(estado_3);
						break;
				}
				break;	
			case SALIR_PROGRAMA:
				s = SALIR;
				break;		
		}
	}
}
