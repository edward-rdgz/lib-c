#include <C:\TC\BIN\MATRIZ.H>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
typedef int E;

void imprimir(matriz m)
{E fil=0, col=0, esp=0;
 for(fil=0;fil<m.f;fil++)
 {for(col=0;col<m.c;col++)
  {gotoxy(3+col+esp,5+fil);cout<<m.matrice[fil][col];esp+=4;}
   esp=0;}
 getchar();
}
