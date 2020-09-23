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
	}
}
