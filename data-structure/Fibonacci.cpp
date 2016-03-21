#include <A.H>

const int MAX=5;

class PILA
{	protected:	int stack[MAX], tope;
	public:		PILA(){tope=-1;}
			void inserta(int);
			int  elimina();
			int  p_vacia();
			int  p_llena();
};


int PILA::p_vacia()
{	if(tope==-1)
		return 1;
	else
		return 0;
}

int PILA::p_llena()
{	if(tope==MAX-1)
		return 1;
	else
		return 0;
}

void PILA::inserta(int x)
{	if(!p_llena())
	{	tope++;
		stack[tope]=x;
	}
	else
		cout<<"Pila Llena";
}

int PILA::elimina()
{	int x=-1;
	if(!p_vacia())
	{	x=stack[tope];
		tope--;
	}
	else
		cout<<"Pila Vacia";
	return x;
}

void main()
{	PILA P;
	int x, y;
	clrscr();
	P.inserta(0);
	P.inserta(1);
	for(int i=0; i<15; i++)
	{	x=P.elimina();
		y=P.elimina();
		cout<<x+y<<"  ";
		P.inserta(x);
		P.inserta(x+y);
	}
	getchar();
}

//cola de espera y cola circular investigar