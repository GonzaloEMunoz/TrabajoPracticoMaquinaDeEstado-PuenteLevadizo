#include"lib.h"
main()
{	
	estadoactual_p=bajo;
	while(1)
	{
		printf("Suba o baje el puente (s/b/e)\n\n\n");
		modificar_p=getchar();
		fflush(stdin);
		switch(estadoactual_p)
		{
			case bajo:
				estadoactual_p=f_bajo(bajo);
				break;
			case abierto25:
				estadoactual_p=f_abierto25grados(abierto25);
				break;
			case abierto50:
				estadoactual_p=f_abierto50grados(abierto50);
				break;
			case abierto75:
				estadoactual_p=f_abierto75grados(abierto75);
				break;
		}
	}
}
