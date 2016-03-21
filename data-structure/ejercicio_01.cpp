#include <ejercicio_01.H>
#include <A.h>
//LIBRERIA A.H CONTIENE LAS LIBRERIAS:
	//IOSTREAM.H
	//CONIO.H
	//STDIO.H
//LIBRERIA EJERCI~1.H CONTIENE:
	//DEFINIDAS LAS CLASES

void main()
{	Lista L;
	clrscr();
	L.insertar(50);
	L.insertar(40);
	L.insertar(30);
	L.insertar(20);
	L.visualiza();
	L.insfinal(75);
	L.visualiza();
	L.insord(10);
	L.visualiza();
	getchar();
}
