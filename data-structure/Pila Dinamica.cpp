#include <PILADI~1.H>
#include <CTYPE.H>

class ESTACIONAMIENTO:public P_DOBLE
{	private:
		char c;
	public:
		ESTACIONAMIENTO(){c=NULL;}
		int  espacio();
		void estacionar(char);
		void estacionar2(char);
		void vis();
		int  verificar();
		int  buscar(char);
};

int ESTACIONAMIENTO::espacio()
{	return p_llena();	}

void ESTACIONAMIENTO::estacionar(char x)
{	ins1(x);		}

void ESTACIONAMIENTO::estacionar2(char x)
{	ins2(x);		}

void ESTACIONAMIENTO::vis()
{	for(int i=0; i<=t1; i++)
		cout<<stack[i];
}

int ESTACIONAMIENTO::verificar()
{	return p_vacia1();	}

int ESTACIONAMIENTO::buscar(char x)
{       int aux=t1; char y;
	y=stack[aux];
	while(x!=y && aux!=-1)
	{	y=stack[aux];
		if(x!=y)
			aux--;
	}
	if(aux>=0)
		return 1;
	else
		return 0;
}



void main()
{	ESTACIONAMIENTO P;
	int op; char opc; char x;
	clrscr();
	do
	{	cout<<"\n\t1.ESTACIONAR\n\t2.SACAR\n\t3.VER ESTACIONAMIENTO\n\t4.SALIR"<<endl;
		cout<<"\n\tSelecciona una opcion (1-4): ";
		cin>>op;
		switch(op)
		{	case 1:
			{	do
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
						{       char y;
							cout<<"\n\tencontrado";
							do
							{	y=P.elimina1();
								if(x!=y)
								{	P.estacionar2(y);
									break;
								}
							}while(x!=y);
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
				op=10;
				break;
			}
			default:	break;
	     }
	
	}while(op<1 || op>4);
}
