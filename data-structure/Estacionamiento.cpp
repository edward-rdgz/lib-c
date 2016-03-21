#include <ESTACI~1.H>

void main()
{	ESTACIONAMIENTO P; char x, y, opc;
	clrscr();
	int op;
	do
	{	cout<<"\n\t1.ESTACIONAR\n\t2.SACAR\n\t3.VER COCHES\n\t4.SALIR"<<endl;
		cout<<"\n\t"<<"Selecciona una opcion (1-4): ";
		cin>>op;
		switch(op)
		{	case 1:
			{       do
				{	if(P.espacio())
						cout<<"\n\tNO HAY ESPACIO";
					else
					{	cout<<"\n\tSI HAY ESPACIO";
						cout<<"\n\n\tIntroduzca Placas del Automovil: ";
						cin>>x;
						P.estacionar(x);
					}
					cout<<"\n\tDesea estacionar otro veh¡culo (S/N) :";
					cin>>opc; opc=toupper(opc);
				}while(opc=='S');
				op=10;
				break;
			}
			case 2:
			{	do
				{       if(P.verificar())
						cout<<"\n\tESTACIONAMIENTO VACIO";
					else
					{	cout<<"\n\tIntroduzca Placas del Automovil a sacar: ";
						cin>>x;
						if(P.buscar(x))
						{       ESTACIONAMIENTO C;
							char y;
							cout<<"\n\tencontrado";
							do
							{	y=P.elimina();
								if(x!=y)
									C.estacionar(y);
							}while(x!=y);
							do
							{	y=C.elimina();
								P.estacionar(y);
							}while(y!=-1);
							P.elimina();
						}
						else
							cout<<"\n\tNo encontrado";


					}
					cout<<"\n\tDesea sacar otro veh¡culo (S/N) :";
					cin>>opc; opc=toupper(opc);
				}while(opc=='S');
				op=10;
				break;
			}
			case 3:
			{	P.vis();
				getchar();
				op=10;
				break;
			}
			default: break;

		}
	}while(op<1 || op>4);
}

