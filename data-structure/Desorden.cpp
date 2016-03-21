//Programa de insersion, eliminacion, busqueda, etc.
//en un arreglo unidimensional desordenado.
//Castillo Gardea Mariano
//01070097
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void captura(int);

int k;
int n=100;
void main()
{int datos[100]; clrscr(); captura(datos[100]); getchar();
}

void captura(int datos[])
{cout<<"Cuantos datos deseas capturar: "; cin>>k;
 for(int i=0; i<k; i++) cin>>datos[i];
}