//MANZANO DE LEON ERIKA ILEANA
//00070624
// UNIDAD 2. TAREA No. 2

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
typedef struct{
 float real;
 float imaginario;
}variable;
void capturar(variable &);
void imprimir(variable &);
void suma(variable &, variable &, variable &);
void resta(variable &, variable &, variable &);
void division(variable &, variable &, variable &);
void multiplicacion(variable &, variable &, variable &);
void menu(variable &, variable &, variable &);
void main()
{variable z1, z2, z3;
 clrscr();
 capturar(z1);
 capturar(z2);
 menu(z1,z2,z3);
//imprimir(z3);
 getchar();
}
void capturar(variable & z)
{
 clrscr();
 gotoxy(15,20);cout<<"INTRODUCIR EL NUMERO REAL: ";cin>>z.real;
 gotoxy(15,23);cout<<"INTRODUCIR EL NUMERO IMAGINARIO: ";cin>>z.imaginario;
}
void imprimir(variable & z)
{clrscr();
 if (z.imaginario<0)
 {gotoxy(30,25);cout<<"z="<<z.real<<z.imaginario<<"i"; getchar();}
else
 {gotoxy(30,25);cout<<"z="<<z.real<<"+"<<z.imaginario<<"i";      getchar();}
}
void suma(variable & z1, variable & z2, variable & z3)
{
 z3.real=z1.real+z2.real;
 z3.imaginario=z1.imaginario+z2.imaginario;
}
void resta(variable & z1, variable & z2, variable & z3)
{
 z3.real=z1.real-z2.real;
 z3.imaginario=z1.imaginario-z2.imaginario;
}
void multiplicacion(variable & z1, variable & z2, variable & z3)
{
 z3.real=z1.real*z2.real-z1.imaginario*z2.imaginario;
 z3.imaginario=z1.real*z2.imaginario+z1.imaginario*z2.real;
}
void division(variable & z1, variable & z2, variable & z3)
{
 z3.real=z1.real*z2.real+z1.imaginario*z2.imaginario/z2.real*z2.real+z2.imaginario*z2.imaginario;
 z3.imaginario=z1.imaginario*z2.real-z1.real*z2.imaginario/z2.real*z2.real+z2.imaginario*z2.imaginario;
}
void menu(variable &z1, variable &z2, variable &z3)
{
 int num;
 do
 {
  clrscr();
  gotoxy(10,15);cout<<" 1. SUMA ";
  gotoxy(10,17);cout<<" 2. RESTA ";
  gotoxy(10,19);cout<<" 3. MULTIPLICACION ";
  gotoxy(10,21);cout<<" 4. DIVISION ";
  gotoxy(10,23);cout<<" 5. SALIR ";
  gotoxy(10,25);cout<<" PRESIONA EL NUMERO DE LA OPCION QUE DESEAS VER: ";cin>>num;
  switch(num)
  {
   case 1: suma(z1, z2, z3); imprimir(z3); break;
   case 2: resta(z1, z2, z3);imprimir(z3); break;
   case 3: multiplicacion(z1, z2, z3);imprimir(z3); break;
   case 4: division(z1, z2, z3);imprimir(z3); break;
  }
  if(5<num)
  {
   gotoxy(10,27);cout<<" LO SIENTO, ESTA FUNCION NO ES VALIDA ";
   getchar();
  }
 }while(num<5);
}

