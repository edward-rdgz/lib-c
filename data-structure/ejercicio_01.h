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
		void insfinal(int);
		void insord(int);
		void visualiza();
};


void Lista::insertar(int x)
{	NODO *p=new NODO;
	p->info=x;
	p->sig=Primero;
	Primero=p;
}

void Lista::insfinal(int x)
{	NODO *p=new NODO;
	p->info=x;
	p->sig=NULL;
	if(Primero)
	{	NODO *q=Primero;
		while(q->sig)
			q=q->sig;
		q->sig=p;
	}
	else
		Primero=p;
}

void Lista::insord(int x)
{	if(Primero)
	{	NODO *p=Primero, *q=NULL;
		while(x<p->info)
		{	q=p;
			p=p->sig;
		}
		if(q)
			if(q->sig)
			{	NODO *r=new NODO;
				r->info=x;
				q->sig=r;
				r->sig=p;
			}
			else
				insfinal(x);
		else
			insertar(x);
	}
	else
		insertar(x);
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


