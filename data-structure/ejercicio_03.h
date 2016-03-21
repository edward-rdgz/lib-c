#include <A.h>
//LIBRERIA A.H CONTIENE LAS LIBRERIAS:
//IOSTREAM.H
//CONIO.H
//STDIO.H


struct NODO
{	int info;	NODO *sig;	};



//DEFINIR CLASE
class Lista
{	private:
		NODO *Primero;
	public:
		Lista(){Primero=NULL;}
		void insertar(int);
		void visualiza();
		void operator+(int);
};


void Lista::insertar(int x)
{	NODO *p=new NODO;
	p->info=x;
	p->sig=Primero;
	Primero=p;
}


void Lista::visualiza()
{	if(Primero)
	{	NODO *p=Primero;
		cout<<"Primero->";
		while(p)
		{	cout<<p->info<<"->";
			p=p->sig;
		}
		cout<<"NULL"<<endl;
	}
	else
	{	cout<<"NO EXISTE LISTA";
	}
}


void Lista::operator+(int x)
{	NODO *p=new NODO;
	p->info=x;
	p->sig=Primero;
	Primero=p;
}



