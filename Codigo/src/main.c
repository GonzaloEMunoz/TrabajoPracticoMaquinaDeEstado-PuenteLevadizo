#include"..\lib\funciones.c"
main()
{	
	cp=bajo;
	s=SEGUIR;
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
				printf("\nSuba o baje el puente (s/b/e)\n\n");
				modificar_p=getchar();
				fflush(stdin);
				if (modificar_p == SUBIR)
				{
				
					switch(cp)
					{
						case bajo:
							f_subir(bajo);
							break;
						case estado_1:
							f_subir(estado_1);
							break;
						case estado_2:
							f_subir(estado_2);
							break;
						case estado_3:
							f_subir(estado_3);
							break;
					}
				}
				if(modificar_p==BAJAR)
				{
					switch(cp)
					{
						case bajo:
							f_bajar(bajo);
							break;
						case estado_1:
							f_bajar(estado_1);
							break;
						case estado_2:
							f_bajar(estado_2);
							break;
						case estado_3:
							f_bajar(estado_3);
							break;
					}
				}
				if(modificar_p==ESPERAR)
				estado();
				break;	
			case SALIR_PROGRAMA:
				s = SALIR;
				break;		
		}
	}
}
