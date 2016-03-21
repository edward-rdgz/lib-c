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
		void operator++();
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


void Lista::operator++()
{	NODO *p=new NODO;
	cout<<"Elemento: ";
	cin>>p->info;
	p->sig=Primero;
	Primero=p;
}

void Lista::operator+(int x)
{	if(Primero)
	{	NODO *p=Primero;
		while(p)
		{	p->info+=x;
			p=p->sig;
		}
	}
	else
		cout<<"NO EXISTE LISTA";
}


void main()
{	Lista Lemp, Ljefes;
	clrscr();
	for(int i=0; i<5; i++)
		Ljefes++;
	for(i=0; i<9; i++)
		Lemp++;
	Ljefes.visualiza();
	Lemp.visualiza();
	Ljefes+5000;
	Lemp+2000;
	Ljefes.visualiza();
	Lemp.visualiza();
	getchar();
}