#include <C:\TC\BIN\MATRIZ.H>
#include <C:\TC\BIN\PRESENTACION.H>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <alloc.h>
typedef int E;
typedef double D;

void obtener(matriz m)
{E fil=0, col=0, f,c,b=0;
 gotoxy(10,3);cout<<"A continuacion se introduzca fila y columna del elemento a localizar";
 gotoxy(3,5); cout<<"Filas:    ";cin>>f;f-=1;
 gotoxy(3,6); cout<<"Columnas: ";cin>>c;c-=1;
 for(fil=0;fil<m.f;fil++)
 {for(col=0;col<m.c;col++)
  {if(f==fil && c==col){b=1;gotoxy(3,10);cout<<m.matrice[f][c];getchar();break;}
  }
 }
 if(b==0)
 {gotoxy(3,10);cout<<"Direccion incorrecta";}}

matriz asignar(matriz m)
{E fil=0, col=0, f,c,b=0;
 gotoxy(10,3);cout<<"A continuacion se introduzca fila y columna del elemento a localizar";
 gotoxy(3,5); cout<<"Filas:    ";cin>>f;f-=1;
 gotoxy(3,6); cout<<"Columnas: ";cin>>c;c-=1;
 for(fil=0;fil<m.f;fil++)
 {for(col=0;col<m.c;col++)
  {if(f==fil && c==col){b=1;gotoxy(3,10);
   cout<<"Digite nuevo valor: ";
   cin>>m.matrice[f][c];getchar();break;}
  }
 }
 if(b==0)
 {gotoxy(3,10);cout<<"Direccion incorrecta";}
 limpiar();
 return m;
}

matriz igual(matriz A, matriz B){A=B;return A;}

matriz sumar(matriz A, matriz B)
{E i=0, j=0; matriz C;
 assert((A.f==B.f)&&(A.c==B.c));
 C=crear_vacia(A.f,B.c);
 for(i=0;i<A.f;i++)
 {for(j=0;j<A.c;j++)
  {C.matrice[i][j]=A.matrice[i][j]+B.matrice[i][j];}}
 return C;
}

matriz restar(matriz A, matriz B)
{E i=0, j=0; matriz C;
 assert((A.f==B.f)&&(A.c==B.c));
 C=crear_vacia(A.f,B.c);
 for(i=0;i<A.f;i++)
 {for(j=0;j<A.c;j++)
  {C.matrice[i][j]=A.matrice[i][j]-B.matrice[i][j];}}
 return C;
}

matriz negativa(matriz m)
{E i=0, j=0; matriz C; C=crear_vacia(m.f,m.c);
 for(i=0;i<m.f;i++)
 {for(j=0;j<m.c;j++)
  {C.matrice[i][j]=m.matrice[i][j]*(-1);}}
 return C;
}

matriz escalar(matriz m)
{E i=0, j=0, e; matriz C; C=crear_vacia(m.f,m.c);
 gotoxy(3,5);cout<<"Introduce el escalar: ";cin>>e;limpiar();
 for(i=0;i<m.f;i++)
 {for(j=0;j<m.c;j++)
  {C.matrice[i][j]=m.matrice[i][j]*(e);}}
 return C;
}

matriz producto(matriz A, matriz B)
{int i, j, k; matriz C; C=crear_vacia(A.f,B.c);
for(i=0; i<A.f; i++)
 {for(j=0; j<B.c; j++)
  {C.matrice[i][j]=0;
  for(k=0; k<A.c; k++)
   {C.matrice[i][j]=(C.matrice[i][j])+((A.matrice[i][k])*(B.matrice[k][j]));}}}
return C;
}

matriz transpuesta(matriz A)
{E i=0, j=0, y=0, z=0; matriz C; C=crear_vacia(A.f,A.c);
i=C.f=A.f; j=C.c=A.c;
for(y=0; y<i; y++)
 {for(z=0; z<j; z++)
  {C.matrice[y][z]=A.matrice[z][y];}}
return C;
}

double Determinante(double **A,int n)
{double **C,P[30][30],B[30][30],D=0;
int x,y,i,j;
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 P[i][j]=A[i][j];
if(n>=2){
for(x=0;x<n;x++){
for(i=0;i<n-1;i++)
 for(j=1;j<n;j++)
  {
   if(i<x)B[i][j-1]=P[i][j];else B[i][j-1]=P[i+1][j];
  }
for(y=0;y<n-1;y++)*(C+y)=B[y];
D+=pow(-1,x)*P[x][0]*Determinante(C,n-1);
}
return D;
}else return P[0][0];
}
D det(matriz X)
{double **A, //puntero doble que apunta a matrices
 B[10][10]; //matriz est tica que contendr  los datos
 E i,j,n,r; limpiar(); n=X.f;
 //A apunta a B
 for(i=0;i<n;i++)
  {*(A+i)=X.matrice[i];}
 //Se retorna el determinante de B
 r=Determinante(A,n);
 return r;
}
double **Inver(double **A,int n)
{
int i,j,k,x,y;
double M[30][30],B[30][30],Ct[30][30],**P;
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 M[i][j]=A[i][j];
 //se crea la submatriz B de orden n-1
 //pivoteando en x,y
 for(x=0;x<n;x++)
  for(y=0;y<n;y++)
   {
    for(i=0;i<n-1;i++)
     for(j=0;j<n-1;j++)
      {
       if( i<x && j<y  )B[i][j]=M[i][j];
	else if( i<x && j>=y )B[i][j]=M[i][j+1];
	 else if( i>=x && j<y )B[i][j]=M[i+1][j];
	  else if( i>=x && j>=y)B[i][j]=M[i+1][j+1];
      }
    for(k=0;k<n-1;k++)*(P+k)=B[k];
    //Se halla la transpuesta de la matriz de cofactores
    Ct[y][x]=pow(-1,x+y)*Determinante(P,n-1);
   }
for(k=0;k<n;k++)*(P+k)=Ct[k];
return P;
}

void inversa(matriz X)
{double **A,**InvA,B[30][30];
 int i,j,n;n=X.f;
 limpiar();
 for(i=0;i<n;i++)
  *(A+i)=X.matrice[i];
 InvA=Inver(A,n);
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 B[i][j]=InvA[i][j];
limpiar();
double D=det(X);
clrscr();
cout<<"LA MATRIZ INVERSA ES :";
	gotoxy(1,int(n/2)+(pow(-1,n+1)+1)/2+2);cout<<"I = ";
	cout<<abs(D)/D<<"/"<<abs(D)<<" * ";

	for(i=0;i<n;i++){
		gotoxy(13,3+i);cout<<"³";
		for(j=0;j<n;j++)
			cout<<D*B[i][j]<<" ";
		cout<<"³\n";}

cout<<"\n\nDeterminante= "<<Determinante(A,n);
getchar();
}


