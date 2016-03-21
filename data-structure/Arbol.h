//arbol
# include<iostream.h>
# include<conio.h>
# include<stdio.h>

struct nodo
{
	int info;
	nodo *h_izq, *h_der;
};

class arbol
{
 private:
	nodo *r;
	void inorden(nodo *);
	void preorden(nodo *);
	void posorden(nodo *);
	nodo *maketree(int);
	void setleft(nodo *, int);
	void setright(nodo *, int);
		//void izquierda(nodo *);
	  //	void derecha(nodo *);
	int izquierda(nodo *);
	int derecha(nodo *);
	void mder(nodo *);
 public:
	arbol(){r=NULL;}
	void inserta(int);
	void recorre(int);
	void elimina(int);
};

void arbol::inorden(nodo *r)
{
	if(r)
	{
		inorden(r->h_izq);
		cout<<r->info;
		inorden(r->h_der);
	}
}

void arbol::preorden(nodo *r)
{if(r)
	{cout<<r->info;
	 preorden(r->h_izq);
	 preorden(r->h_der);
	}
}

void arbol::posorden(nodo *r)
{if(r)
	{posorden(r->h_izq);
	 posorden(r->h_der);
	 cout<<r->info;
	}
}

nodo * arbol::maketree(int x)
{ nodo *p=new nodo;
  p->h_izq=p->h_der=NULL;
  p->info=x;
  return p;
}

void arbol::inserta(int x)
{if(!r)
		r=maketree(x);
 else if(x<r->info)
		setleft(r,x);
		else setright(r,x);
}

void arbol::setleft(nodo *r, int x)
{ if(x<r->info)
	if(!r->h_izq)
		r->h_izq=maketree(x);
	else setleft(r->h_izq,x);
  else setright(r,x);
}

void arbol::setright(nodo *r, int x)
{ if(x>r->info)
	if(!r->h_der)
		r->h_der=maketree(x);
	else setright(r->h_der,x);
  else setleft(r,x);
}
/*void arbol::izquierda(nodo *r)
{ if(r)
	 izquierda(r->h_izq);
  cout<<"EL MENOR ELEMENTO: "<<r->info;
}*/

void arbol::recorre(int n)
{
 switch(n)
 {
  case 1: inorden(r);
	  break;
  case 2: preorden(r);
	  break;
  case 3: posorden(r);
	  break;
 }

}

int arbol::izquierda(nodo *r)
{int x=-1;
 if(r)
	  izquierda(r->h_izq);
 x=r->info;
 delete r;
 return x;
}

int arbol::derecha(nodo *r)
{int x=-1;
 if(r)
	  derecha(r->h_der);
 x=r->info;
 delete r;
 return x;
}
void arbol::elimina(int x)
{
 if(!r)
	  cout<<"no hay arbol";
 else
	{  while(x!=r->info)
		{ if(x<r->info)
				r=r->h_izq;
		  else r=r->h_der;
		}
	}
  mder(r);

}

void arbol::mder(nodo *r)
{int x=-1;
 nodo *p=r,*q;
 if(p->h_der)
	{ q=p->h_der;
	  x=izquierda(q);
	  p->info=x;}
 else
	  {if(p->h_izq)
	  { q=p->h_izq;
		 x=derecha(q);
		 p->info=x;}
		else delete r;
	  }
}
