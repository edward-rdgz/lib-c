//Programa que suma, resta, mult y div numeros complejos 
//enteros, punto flotante positivos y negativos
//Mariano Castillo Gardea
//01070097


#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef struct{ float r, i; }complejo;

void entrar();
void recuadro();
void presentacion();
void titulo();
void etiqueta();
void limpiar();
void capturar(complejo &);
void imprimir(complejo &);
void menu(complejo &, complejo &, complejo &);
void suma(complejo &, complejo &, complejo &);
void resta(complejo &, complejo &, complejo &);
void mult(complejo &, complejo &, complejo &);
void div(complejo &, complejo &, complejo &);
void main()
{complejo z1, z2, z3; entrar();
limpiar(); capturar(z1); capturar(z2); menu(z1,z2,z3); getchar();}

void entrar(){recuadro();presentacion();clrscr();titulo();etiqueta();}
void recuadro()
{clrscr();
 gotoxy(0,0);cout<<"É";for(int i=1; i<79; i++){gotoxy(0,i); cout<<"Í";}
 gotoxy(79,0);cout<<"»";for(i=2; i<49; i++){gotoxy(1,i); cout<<"º";}
 gotoxy(1,i);cout<<"È";for(i=1; i<79; i++){gotoxy(0,i); cout<<"Í";}
 gotoxy(79,i);cout<<"¼";for(i=2; i<49; i++){gotoxy(80,i); cout<<"º";}
}
void presentacion()
{gotoxy(10,4); cout<<"Autor: Castillo Gardea Mariano";
 gotoxy(10,6); cout<<"Programacion II";
 gotoxy(10,8); cout<<"7:00 - 8:00 pm";
 gotoxy(10,10); cout<<"Carrera: Ing. En Sistemas Computacionales";
 gotoxy(10,12); cout<<"Unidad 2 Estructuras";
 gotoxy(10,14); cout<<"Tarea 2 Numeros Complejos";getchar();
 gotoxy(25,23); cout<<"Presione Enter Para Iniciar..."; getchar();
}
void titulo(){clrscr(); recuadro();gotoxy(20,2);cout<<"Software de Operaciones con Numeros Complejos";}
void etiqueta(){gotoxy(70,2); cout<<"nuverlomm";gotoxy(70,3); cout<<"software";}
void limpiar()
{clrscr(); recuadro(); titulo(); etiqueta();}
void capturar(complejo &z)
{titulo(); etiqueta();
 gotoxy(2,3); cout<<"Introduce Parte Real para Z       ";cin>>z.r;
 gotoxy(2,4); cout<<"Introduce Parte Imaginaria para Z ";cin>>z.i;
}
void menu(complejo &z1, complejo &z2, complejo &z3)
{int op; limpiar();
 gotoxy(10,6);  cout<<"[1] SUMA..........";
 gotoxy(10,8);  cout<<"[2] RESTA.........";
 gotoxy(10,10); cout<<"[3] MULTIPLICACION...";
 gotoxy(10,12); cout<<"[4] DIVISION.........";
 gotoxy(10,14); cout<<"[5] SALIR........";
 do{gotoxy(22,22); cout<<"Seleccione una opcion (1-5): ";cin>>op;
 if(op<1 || op>5)
  {gotoxy(20,23);cout<<"Opci¢n incorrecta vuelva a intentar";}
 }while(op<1 || op>5);
 switch(op)
 {case 1: {limpiar();gotoxy(28,4);cout<<"-[1] SUMA-";suma(z1,z2,z3);imprimir(z3);menu(z1,z2,z3);break;}
  case 2: {limpiar();gotoxy(26,4);cout<<"-[2] RESTA-";resta(z1,z2,z3);imprimir(z3);menu(z1,z2,z3);break;}
  case 3: {limpiar();gotoxy(24,4);cout<<"-[3] MULTIPLICACION-";mult(z1,z2,z3);imprimir(z3);menu(z1,z2,z3);break;}
  case 4: {limpiar();gotoxy(24,4);cout<<"-[4] DIVISION-";div(z1,z2,z3);imprimir(z3);menu(z1,z2,z3);break;}
  case 5: {limpiar(); gotoxy(10,10); cout<<"Saliendo...";
	   gotoxy(25,23); cout<<"Presione Enter Para Salir...";break;
	  }
 }
}
void suma(complejo &z1, complejo &z2, complejo &z3)
{z3.r=z1.r+z2.r; z3.i=z1.i+z2.i;}
void resta(complejo &z1, complejo &z2, complejo &z3)
{z3.r=z1.r-z2.r; z3.i=z1.i-z2.i;}
void imprimir(complejo &z)
{if(z.i<0)
 {gotoxy(2,10); cout<<"z="<<z.r<<z.i<<"i";getchar();}
 else
 {gotoxy(2,10); cout<<"z="<<z.r<<"+"<<z.i<<"i";getchar();}
}
void mult(complejo &z1, complejo &z2, complejo &z3)
{z3.r=(z1.r*z2.r)-(z1.i*z2.i);
 z3.i=(z1.r*z2.i)+(z1.i*z2.r);
}
void div(complejo &z1, complejo &z2, complejo &z3)
{z3.r=((z1.r*z2.r)+(z1.i*z2.i))/(pow(z2.r,2)+pow(z2.i,2));
 z3.i=((z1.i*z2.r)-(z1.r*z2.i))/(pow(z2.r,2)+pow(z2.i,2));
}