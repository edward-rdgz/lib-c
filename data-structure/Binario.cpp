#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void convertir (int );

void main ()
{
 clrscr();
 int x,res;
 cout<<"introduce el numero: ";
 cin>>x;
 convertir(x);
 getchar();
 }

 void convertir(int x)
 {
  if (x/2==0)
	cout<<x%2;
	else
	{
	 convertir(x/2);
	 cout<<x%2<<"";
	}
}

