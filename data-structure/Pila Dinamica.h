#include <A.H>

const int MAX=3;

class P_DOBLE
{	protected:	
		int stack[MAX], t1, t2;
	public:	
		P_DOBLE(){t1=-1; t2=MAX;}
		void p_llena();
		void ins1(int);
		void ins2(int);
		int  p_vacia1();
		int  p_vacia2();
		int  elimina1();
		int  elimina2();
};


int P_DOBLE::p_vacia1()
{	if(t1==1)
		return 1;
	return 0;
}

int P_DOBLE::p_vacia2()
{	if(t2==MAX)
		return 1;
	return 0;
}

int P_DOBLE::p_llena()
{	if(t1+1==t2)
		return 1;
	return 0;

}

void P_DOBLE::ins1(int x)
{	if(p_llena())
		cout<<"PILA LLENA";
	else
	{	++t1;
		stack[t1]=x;
	}
}

void P_DOBLE::ins2(int x)
{	if(p_llena())
		cout<<"PILA LLENA";
	else
	{	--t2;
		stack[t2]=x;
	}
}

int P_DOBLE::elimina1()
{	int x=-1;
	if(p_vacia1())
		cout<<"PILA VACIA";
	else
	{	x=stack[t1];
		t1--;
	}
	return x;
}

int P_DOBLE::elimina2()
{	int x=-1;
	if(p_vacia2())
		cout<<"PILA VACIA";
	else
	{	x=stack[t2];
		t2++;
	}
}