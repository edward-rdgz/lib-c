//Programa que calcula la raiz de un entero positivo N.
//Sin utilizar la libreria math.h
//Alumno: Castillo Gardea Mariano
//No Control: 01070097

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void captura(int &);
void validacion(int &);
void raiz(int &);
void main()
{int numero; clrscr();
 captura(numero);
 getchar();
}

void captura(int &numero)
{cout<<"Introduce un numero entero y positivo  ";
 cin>>numero; validacion(numero);
}

void validacion(int &numero)
{if(numero>0)
  cout<<"Numero Aceptado\n";
 else
 {cout<<"Numero no aceptado\n"; captura(numero);}
}

void raiz(int &x)
{int i=1;
 do{x=(i/2)*(i+(x/i)}
 while(x
}


