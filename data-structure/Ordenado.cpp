//Programa de insersion, eliminacion, busqueda, etc.
//en un arreglo unidimensional ordenado.
//Castillo Gardea Mariano
//01070097
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void captura(int []);
void ordenar(int []);
void insertar(int []);
void imprimir(int []);
int buscar(int [], int);
void recorrer(int [], int, int);
void eliminar(int []);
void modificar(int []);
int k;
int n=20;
void main()
{int datos[20]; clrscr(); captura(datos); ordenar(datos);
 imprimir(datos); insertar(datos); imprimir(datos);
 eliminar(datos); imprimir(datos); modificar(datos);
 imprimir(datos);
 getchar();
}

void captura(int datos[])
{do{cout<<"Cuantos datos deseas capturar: "; cin>>k;}
 while(n<k);
 for(int i=0; i<k; i++) cin>>datos[i];
}

void ordenar(int datos[])
{int aux, pos;
 for(int i=0; i<k; i++)
 {pos=i;
  for(int j=i+1; j<k; j++)
   {if(datos[j]<datos[pos]) pos=j;}
  aux=datos[i];
  datos[i]=datos[pos];
  datos[pos]=aux;
 }
}

void insertar(int datos[])
{if(k<n)
 {cout<<"\nIntroduzca dato a insertar: "; cin>>datos[k++];}
 else cout<<"\nArreglo Saturado";
 ordenar(datos);
}

void eliminar(int datos[])
{int dato, i; cout<<"\nQue dato desea eliminar: "; cin>>dato;
 i=buscar(datos,dato);
 if(i==k)
  cout<<"\nDato NO encontrado\n";
 else
 {do{datos[i]=datos[i++];}
  while(i<k);
 k--;}
 ordenar(datos);
}

void modificar(int datos[])
{int dato, dir, valor;
 cout<<"\nQue dato desea modificar\n"; cin>>valor;
 dir=buscar(datos,valor);
 if(dir==k)  cout<<"Dato NO encontrado\n";
 else {cout<<"Introduce nuevo dato:\n "; cin>>dato;
      datos[dir]=dato;}
 ordenar(datos);
}


int buscar(int datos[], int dato)
{int i=0; while(i<k && datos[i]!=dato)i++; return i;
}

void imprimir(int datos[])
{for(int i=0; i<k; i++)
 cout<<datos[i];
}
