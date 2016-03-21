#include <A.H>

const int MAX=3;

class COLA
{	protected:
		int queue[MAX];
		int f, a;
	public:
		COLA(){f=0; a=-1;}
		void inserta(int);
		int elimina();
		int c_llena();
		int c_vacia();
};

int COLA::c_llena()
{	if(a=MAX-1)
		return 1;
	return 0;
}

int COLA::c_vacia()
{	if(f>a)
		return 1;
	return 0;
}

void COLA::inserta(int x)
{	if(!c_llena())
	{	a++; queue[a]=x;	}
	else
		cout<<"COLA LLENA";
}

int COLA::elimina()
{	int x=-1;
	if(!c_vacia())
	{	x=queue[f];	f++;	}
	else
		cout<<"COLA VACIA";
	return x;
}		