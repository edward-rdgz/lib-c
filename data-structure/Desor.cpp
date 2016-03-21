//Programa de insersion, eliminacion, busqueda, etc.
//en un arreglo unidimensional desordenado.
//Castillo Gardea Mariano
//01070097
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void captura(int []);
void insertar(int []);
void imprimir(int []);
void eliminar(int []);
void modificar(int []);
int buscar(int [], int);
int k;
int n=20;
void main()
{int datos[20]; clrscr(); captura(datos); insertar(datos);
 imprimir(datos); eliminar(datos); imprimir(datos);
 modificar(datos); imprimir(datos); getchar();
}

void captura(int datos[])
{do{cout<<"Cuantos datos deseas capturar: "; cin>>k;}
 while(n<k); for(int i=0; i<k; i++) cin>>datos[i];
}

void insertar(int datos[])
{if(k<n)
 {cout<<"\nIntroduzca dato a insertar: "; cin>>datos[k++];}
 else cout<<"\nArreglo Saturado";
}

void eliminar(int datos[])
{int dato, dir;
 cout<<"\nQue dato desea eliminar: "; cin>>dato;
 dir=buscar(datos,dato);
 if(dir==k)  cout<<"Dato NO encontrado\n";
 else  {for(;dir<k; dir++) {datos[dir]=datos[dir+1];} k--; }
}

void modificar(int datos[])
{int dato, dir, valor;
 cout<<"\nQue dato desea modificar\n"; cin>>valor;
 dir=buscar(datos,valor);
 if(dir==k)  cout<<"Dato NO encontrado\n";
 else {cout<<"Introduce nuevo dato:\n "; cin>>dato;
      datos[dir]=dato;}
}

int buscar(int datos[], int dato)
{int i=0;
 while(datos[i]!=dato && i<k)
 {i++;} return i;
}

void imprimir(int datos[])
{for(int i=0; i<k; i++) cout<<datos[i];}
