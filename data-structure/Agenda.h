<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<!-- saved from url=(0224)http://65.54.187.250/cgi-bin/getmsg?curmbox=F000000001&a=2ec26e1f050efee654cc3bcc71597a74&msg=MSG1090110885.23&start=406335&len=45661&mimepart=4&disk=65.54.187.39_d298&login=nuverlomm&domain=hotmail%2ecom&_lang=ES&country=MX -->
<HTML><HEAD>
<META http-equiv=Content-Type content="text/html; charset=windows-1252">
<META content="MSHTML 6.00.2800.1106" name=GENERATOR></HEAD>
<BODY><PRE>//LISTAS DOBLE LIGADURA

#include &lt;A.h&gt;
#include &lt;STRING.H&gt;

#ifndef __LDOBLES_H
#define __LDOBLES_H

const int N=30;
const int D=50;
const int T=10;


struct NODO
{	char nom[N];
	char dir[D];
	char tel[T];
	NODO *sig, *ant;
};

class LD{	protected:
		NODO *Primero, *Ultimo;
	public:
		LD(){Primero=Ultimo=NULL;}
		void insinicio(char[],char[],char[]);
		void insfinal(char[],char[],char[]);
		void visualiza();
		void del(char[]);
};

void LD::insinicio(char n[], char d[], char t[])
{	NODO *p=new NODO; int i=0;
	NODO *x=Primero;
	if(Primero==Ultimo &amp;&amp; Primero!=NULL)
	{	if(strcmpi(x-&gt;nom,n)==0)
		{	cout&lt;&lt;"NOMBRE YA EXISTE";   }
		else
		{	while(n[i]!='\0'-1)
			{      p-&gt;nom[i]=n[i];	i++;	       }i=0;
			while(d[i]!='\0'-1)
			{      p-&gt;dir[i]=d[i];	i++;	       }i=0;
			while(t[i]!='\0'-1)
			{      p-&gt;tel[i]=t[i];	i++;	       }i=0;
			p-&gt;ant=NULL;
			if(Primero)
			{	p-&gt;sig=Primero;
				Primero-&gt;ant=p;
				Primero=p;
			}
			else
			{	p-&gt;sig=NULL;
				Primero=Ultimo=p;
			}
		}
	}
}

void LD::insfinal(char n[N], char d[D], char t[T])
{	int i=0;   int ban=0;
	if(!Primero)
		insinicio(n,d,t);
	else
	{	NODO *x=Primero;
		NODO *q=NULL;
		while(x)
		{	if(strcmpi(x-&gt;nom,n)==0)
			{	q=x-&gt;sig;
				x-&gt;sig-&gt;ant=q;
				delete x;
				ban=1;
			}
			q=x;
			x=x-&gt;sig;
		}
	}
	if(!ban)
	{  NODO *p=new NODO;
		while(n[i]!='\0'-1)
		{      p-&gt;nom[i]=n[i];	i++;	       }i=0;
		while(d[i]!='\0'-1)
		{      p-&gt;dir[i]=d[i];	i++;	       }i=0;
		while(t[i]!='\0'-1)
		{      p-&gt;tel[i]=t[i];	i++;	       }i=0;
		p-&gt;ant=NULL;
		if(Primero)
		{	p-&gt;sig=Primero;
			Primero-&gt;ant=p;
			Primero=p;
		}
		else
		{	p-&gt;sig=NULL;
			Primero=Ultimo=p;
		}
	}
}

void LD::visualiza()
{	if(!Primero)
		cout&lt;&lt;"NO EXISTE LISTA";
	else
	{	NODO *p=Primero;
		while(p)
		{	cout&lt;&lt;"\n\tNOMBRE:    "&lt;&lt;p-&gt;nom;
			cout&lt;&lt;"\n\tDIRECCION: "&lt;&lt;p-&gt;dir;
			cout&lt;&lt;"\n\tTELEFONO:  "&lt;&lt;p-&gt;tel&lt;&lt;endl;
			p=p-&gt;sig;
		}
	}
}

void LD::del(char n[])
{	int ban=0;
	if(!Primero)
		cout&lt;&lt;"NO HAY AMIGUIS :(";
	else
	{       NODO *p=Primero, *q=NULL;

		if(Primero==Ultimo)
		{	if((strcmpi(p-&gt;nom,n)==0))
			{	Primero=Ultimo=NULL; delete p;
				ban=1;
			}
		}
		else
		{	while(p)
			{	if(strcmpi(p-&gt;nom,n)==0)
				{  if(p==Primero)
					{	Primero=p-&gt;sig;
						Primero-&gt;ant=NULL;
						delete p;
					}
					else
					{
					q-&gt;sig=p-&gt;sig;
					q-&gt;sig-&gt;ant=q;
					p-&gt;sig-&gt;ant=q;
					delete p;
					ban=1;
					}
				}
				q=p;
				p=p-&gt;sig;
			}
		}
		if(ban)
			cout&lt;&lt;endl&lt;&lt;endl&lt;&lt;"\tAMIGUIS ENCONTRADO Y BORRADO";
		else
			cout&lt;&lt;endl&lt;&lt;endl&lt;&lt;"\tAMIGUIS NO ENCONTRADO";
	}
}

#endif
</PRE></BODY></HTML>
