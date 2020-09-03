#include"..\lib\lib.h"
main()
{
	int op;
	int s = 1;
	cp = 0;
	while(s==1)
	{
		menu();
		op=getchar();
		fflush(stdin);
		switch(op)
		{
			case '1':
				estado();
				break;
			case '2':
				modificar();
				break;
			case '3':
				s = 0;
				break;		
		}
	}
}
