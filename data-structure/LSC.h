#include <A.h>
//LIBRERIA A.H CONTIENE LAS LIBRERIAS:
//IOSTREAM.H
//CONIO.H
//STDIO.H

struct NODO
{	int info;	
	NODO *sig;	
};



//DEFINIR CLASE
class LSC
{	private:
		NODO *Primero, *Ultimo;
	public:
		Lista(){Primero=Ultimo=NULL;}
		void inserta(int);
		void visualiza();
		void delinicio();
};

void LSC::visualiza()
{	if(!Primero)	
		cout<<"NO HAY LSITA";
	else
	{	NODO *q=Primero;
		do
		{	cout<<q->info;
			q=q->sig;
		}while(q!=Primero);	
}


void LSC::inserta(int x)
{	NODO *p=new NODO;
	p->info=x;
	if(Primero)
	{	p->sig=Primero;
		Ultimo->sig=p;
		Primero=p;
	}
	else
	{	p->sig=p;
		Primero=Ultimo=p;
	}
}




