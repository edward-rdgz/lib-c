<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<!-- saved from url=(0223)http://65.54.187.250/cgi-bin/getmsg?curmbox=F000000001&a=3a9bb1495648bcdd4866b010a476893f&msg=MSG1090442108.31&start=392555&len=4131&mimepart=3&disk=65.54.187.39_d298&login=nuverlomm&domain=hotmail%2ecom&_lang=ES&country=MX -->
<HTML><HEAD>
<META http-equiv=Content-Type content="text/html; charset=windows-1252">
<META content="MSHTML 6.00.2800.1106" name=GENERATOR></HEAD>
<BODY><PRE>#include &lt;iostream.h&gt;
#include &lt;stdio.h&gt;
#include &lt;conio.h&gt;
#include &lt;iomanip.h&gt;
#include &lt;dos.h&gt;

int c = 1, cc;

class arbol {
private:
	struct nodo{
		int  info;
		nodo *izq;
		nodo *der;
	} *raiz;
public:
	arbol() { raiz = NULL; }
	~arbol();
	void destructor(nodo *);
	void insertar(int x);
	void extraer(int x);
	void extraer(int x, nodo *&amp;r);
	nodo *crearhoja(int x);

	void despliega();
	void despliega(nodo *);
};

arbol::~arbol() {
	destructor(raiz);
}

void arbol::destructor(nodo *p) {
	if(p-&gt;izq) destructor(p-&gt;izq);
	if(p-&gt;der) destructor(p-&gt;der);
	delete p;
}

void arbol::insertar(int x) {
	nodo *p = raiz;

	if(raiz == NULL)
		raiz = crearhoja(x);
	else {
		do {
			if(x == p-&gt;info) break;
			if(x &gt; p-&gt;info) {
				if(!p-&gt;der) p-&gt;der = crearhoja(x);
				p = p-&gt;der;
			}
			if(x &lt; p-&gt;info) {
				if(!p-&gt;izq) p-&gt;izq = crearhoja(x);
				p = p-&gt;izq;
			}
		} while(1);
	}
}

void arbol::extraer(int x) {
	nodo *p = raiz, *q = raiz;
	if(raiz) {
		if(x == raiz-&gt;info) {
			if(!p-&gt;der)
				raiz = raiz-&gt;izq;
			else {
				p = p-&gt;der;
				raiz = p;
				while(p-&gt;izq) p = p-&gt;izq;
				p-&gt;izq = q-&gt;izq;
			}
			delete q;
		}
		else extraer(x, raiz);
	}
}

void arbol::extraer(int x, nodo * &amp;r) {
	if(r) {
		if(x &gt; r-&gt;info) {
			extraer(x, r-&gt;der);
		}
		else if(x &lt; r-&gt;info)
			extraer(x, r-&gt;izq);
		else {
			nodo *p = r, *q = r;
			if(r-&gt;der) {
				p = p-&gt;der;
				r = p;
				while(p-&gt;izq) p = p-&gt;izq;
				p-&gt;izq = q-&gt;izq;
			} else r = r-&gt;izq;
			if(q) delete q;
		}
	}
}

nodo *arbol::crearhoja(int x) {
	nodo *nuevo = new nodo;

	if(nuevo) {
		nuevo-&gt;info = x;
		nuevo-&gt;izq  = NULL;
		nuevo-&gt;der  = NULL;
	}
	return nuevo;
}

void arbol::despliega() {
	if(raiz)
		despliega(raiz);
}

int y1, y2;

void arbol::despliega(nodo *r) {
	if(r-&gt;izq) {
		c++;
		despliega(r-&gt;izq);
	}

	y2 = c * 2 + 3;
	gotoxy(cc += 3, y2);
	cout &lt;&lt; setw(3) &lt;&lt; r-&gt;info ;

	if(r-&gt;der) {
		c++;
		despliega(r-&gt;der);
	}
	c--;
}

void main() {
	arbol x;
	char car;
	int numero, i;
	clrscr();
	do {
		delay(100);
		gotoxy(1,1);
		cout &lt;&lt; "\t-- Super equipo bereªª ogtªª mikeªª de Estructuras I --- ";
		cout &lt;&lt; "\n a) Altas \t b) Bajas\t c) Salir\t ==&gt;&gt;Elija la opcion: ";
		cin  &gt;&gt; car;

		if(car == 'a' || car == 'A') {
			cout &lt;&lt; "\nEscriba el numero que desea dar de alta: ";
			cin  &gt;&gt; numero;
			x.insertar(numero);

			clrscr();
			x.despliega();
			c  = 1;
			cc = 0;
		}
		if(car == 'b' || car == 'B') {
			cout &lt;&lt; "\nEscriba el numero que desea dar de baja: ";
			cin  &gt;&gt; numero;
			x.extraer(numero);

			clrscr();
			x.despliega();
			c  = 1;
			cc = 0;
		}
	} while(car != 'c' &amp;&amp; car != 'C');
}
</PRE></BODY></HTML>
