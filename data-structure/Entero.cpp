//Programa que puede capturar hasta 10 enteros positivos
//y desplegar su equivalente en un entero positivo
//Castillo Gardea Mariano
//01070097
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void captura(int &);
void validacion(int &);
void convertir(int);
void main()
{int x; clrscr(); captura(x); convertir(x); getchar();}

void captura(int &x)
{cout<<"Cuantos numeros deseas introducir (1-10): "; cin>>x;
 validacion(x);
}

void validacion(int &x)
{if(x>0 && x<11)
  {cout<<"Numero Aceptado\n";}
 else
 {cout<<"No aceptado favor introduzca un numero entre 1 y 10\n";
  captura(x);}
}

void convertir(int x)
{int d, r=1, pot=10;
 for(int i=0; i<x; i++)
 {cin>>d; r=r*pot+d;}
 cout<<r;
}
