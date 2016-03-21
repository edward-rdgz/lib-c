#include <C:\TC\BIN\MATRIZ.H>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
//typedef double D;
//typedef int E;

matriz crear(matriz m)
{gotoxy(12,3);cout<<"A continuacion se introduzca el tama¤o de la matriz";
 gotoxy(3,5); cout<<"Filas:    ";cin>>m.f;
 gotoxy(3,6); cout<<"Columnas: ";cin>>m.c;
 return m;
}
matriz crear_vacia(E fi, E co)
{matriz m; m.f=fi; m.c=co;
 m.matrice=(D**)malloc(m.f * sizeof(D*));
 for(int fil=0;fil<m.f; fil++)
 {m.matrice[fil]=(D*)malloc(m.c * sizeof(D));}
 return m;
}

matriz llenar(matriz m)
{int fil=0, col=0, esp=0;
 m.matrice=(D**)malloc(m.f * sizeof(D*));
 for(fil=0;fil<m.f; fil++)
 {m.matrice[fil]=(D*)malloc(m.c * sizeof(D));}
 for(fil=0;fil<m.f;fil++)
 {for(col=0;col<m.c;col++)
  {gotoxy(3+col+esp,5+fil);cin>>m.matrice[fil][col];esp+=4;}
   esp=0;}
 return m;
}
void vaciar(matriz m){delete m.matrice;}
