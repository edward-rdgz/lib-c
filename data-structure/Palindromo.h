#include <A.h>
//LIBRERIA A.H CONTIENE LAS LIBRERIAS:
//IOSTREAM.H
//CONIO.H
//STDIO.H



struct NODO
{	int info;
	NODO *sig, *ant;
};

class LD
{	private:
		NODO *Primero, *Ultimo;
	public:
		LD(){Primero=Ultimo=NULL;}
		void insinicio(int);
		void insfinal(int);
		void visualiza();
		char delinicio();
};


void LD::insfinal(int x)
{	if(!Primero)
		insinicio(x);
	else
	{	NODO *p=new NODO;
		p->info=x;
		p->sig=NULL;
		p->ant=Ultimo;
		Ultimo->sig=p;
		Ultimo=p;
	}
}


void LD::insinicio(int x)
{	NODO *p=new NODO;
	p->info=x;
	p->ant=NULL;
	if(Primero)
	{	p->sig=Primero;
		Primero->ant=p;
		Primero=p;
	}
	else
	{	p->sig=NULL;
		Primero=Ultimo=p;
	}
}

void LD::visualiza()
{	if(!Primero)
		cout<<"NO EXISTE LISTA";
	else
	{	NODO *p=Primero;
		cout<<"Primero->";
		while(p)
		{	cout<<p->info<<"->";
			p=p->sig;
		}
		cout<<"NULL";
	}
}

char LD::delinicio()
{	int x=-1;
	if(!Primero)
		cout<<"NO HAY LISTA";
	else
	{       NODO *p=Primero;
		x=p->info;
		if(Primero==Ultimo)
		{	Primero=Ultimo=NULL;
		}
		else
		{       Primero=Primero->sig;
			Primero->ant=NULL;
		}
		delete p;
	}
	return x;
}

