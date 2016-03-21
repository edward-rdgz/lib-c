#include <A.H>


class CUADRADO
{	private:	
		int L,P,A;
	public:	
		CUADRADO(){L=P=A=0;}
		c_area(){A=L*L;}
		c_p(){P=4*L;}
		int getL(){return L;}
		int getA(){return A;}
		int getP(){return P;}
		void setL(){cout<<"L= "; cin>>L;}
};


class CUBO:public CUADRADO
{	private:
		int V;
	public:
		void c_vol(){V=getA()*getL();}
		int  getV(){return V;}
};







main()
{	CUBO C;
	clrscr();
	C.setL();
	C.c_area();
	C.c_p();
	C.c_vol();
	cout<<"La arista del cubo es: "<<C.getL();
	cout<<endl<<"El perimetro del una cara es: "<<C.getP();
	cout<<endl<<"El area de una cara es: "<<C.getA();
	cout<<endl<<"El volumen del cubo es: "<<C.getV();
	getchar();
}