#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include "a:arbol.h"

void main()
{
 clrscr();
 arbol a;
 int n;
 a.inserta(50);
 a.inserta(30);
 a.inserta(100);
 cout<<"Elige el recorrido: ";
 cin>>n;
 a.recorre(n);
 getchar();
}