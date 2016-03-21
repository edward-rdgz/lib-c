#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

const int MAX=5;

struct proceso
{
	int tam;
	char nom[3];
	proceso *sig;
};

class lista
{
	private:
		proceso *primero;
	public:
		lista() {primero=NULL;}
		void operator++();
		proceso elimina();
};

class c_circular
{
	private:
		int f,a,cont;
		proceso queue[MAX];
	public:
		c_circular() {a=-1;f=0;cont=0;}
		void inserta(proceso *);
		proceso elimina();
		int c_llena();
		int c_vacia();
};

void lista::operator++()
{
	proceso *p=new proceso;
	cout<<"Nombre del proceso: ";
	cin>>p->nom;
	cout<<"Tama¤o del proceso: ";
	cin>>p->tam;
	p->sig=primero;
	primero=p;
}

proceso lista::elimina()
{  proceso temp;

	if(primero)
	{  strcpy(temp.nom,primero->nom);
		temp.tam=primero->tam;
		primero=primero->sig;
		temp.sig=NULL;
	}
	return temp;
}


int c_circular::c_llena()
{
	if(cont==MAX)
		return 1;
	return 0;
}

int c_circular::c_vacia()
{
	if(cont==0)
		return 1;
	return 0;
}

void c_circular::inserta(proceso *proc)
{
	if(!c_llena())
	{
		cont++;
		if(a==MAX-1)
			a=0;
		else
			a++;
		queue[a].tam=proc->tam;
		strcpy(queue[a].nom,proc->nom);
	}
	else
	cout<<"COLA LLENA";
}

proceso c_circular::elimina()
{  proceso aux;
	if(!c_vacia())
	{

		cont--;
		aux.tam=queue[f].tam;
		strcpy(aux.nom,queue[f].nom);
		if(f==MAX-1)
			f=0;
		else
			f++;
	}
	else
		cout<<"COLA VACIA";
	return aux;

}

void main()
{
	clrscr();
	lista L;
	c_circular C;
	int n;
	cout<<"Elementos: ";
	cin>>n;
	for(int i=0; i<n; i++)
		++L;
	L.elimina();

	getchar();
}