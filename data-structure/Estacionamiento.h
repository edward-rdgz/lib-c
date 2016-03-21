#include <PILA.H>
#include <CTYPE.H>

class ESTACIONAMIENTO:public PILA
{	private:
		char c;
	public:
		ESTACIONAMIENTO(){c=NULL;}
		int  espacio();
		void estacionar(char);
		int  verificar();
		int  buscar(char);
		void vis();
};

int ESTACIONAMIENTO::espacio()
{	return p_llena();	}

void ESTACIONAMIENTO::estacionar(char x)
{	inserta(x);		}

int ESTACIONAMIENTO::verificar()
{	return p_vacia();	}

int ESTACIONAMIENTO::buscar(char x)
{       int aux=tope; char y;
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

void ESTACIONAMIENTO::vis()
{	for(int i=0; i<=tope+1; i++)
		cout<<stack[i];
}

