<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<!-- saved from url=(0224)http://65.54.187.250/cgi-bin/getmsg?curmbox=F000000001&a=2ec26e1f050efee654cc3bcc71597a74&msg=MSG1090110885.23&start=406335&len=45661&mimepart=3&disk=65.54.187.39_d298&login=nuverlomm&domain=hotmail%2ecom&_lang=ES&country=MX -->
<HTML><HEAD>
<META http-equiv=Content-Type content="text/html; charset=windows-1252">
<META content="MSHTML 6.00.2800.1106" name=GENERATOR></HEAD>
<BODY><PRE>//LISTAS DOBLE LIGADURA

#include AGENDA.h;
#include CTYPE.H;

void main()
{	clrscr();
	LD agenda;
	char opc='N';
	int op;
	char nombre[N];
	char direccion[D];
	char telefono[T];
	do
	{       cout&lt;&lt;"\n\t\tAGENDA VIRTUAL";
		cout&lt;&lt;"\n\n\n\n\n\t1.INSERTAR";
		cout&lt;&lt;"\n\t2.ELIMINAR";
		cout&lt;&lt;"\n\t3.VISUALIZAR";
		cout&lt;&lt;"\n\nselecciona una opcion: "; cin&gt;&gt;op;
		switch(op)
		{	case 1:
			{	clrscr();
				cout&lt;&lt;"\n\t\tAGENDA VIRTUAL";
				cout&lt;&lt;"\n\t1.INSERTAR AMIGUIS";
				cout&lt;&lt;"\n\tNOMBRE:    ";	gets(nombre);
				cout&lt;&lt;"\n\tDIRECCION: ";	gets(direccion);
				cout&lt;&lt;"\n\tTELEFONO:  ";	gets(telefono);
				agenda.insfinal(nombre,direccion,telefono);
				break;
			}
			case 2:
			{       clrscr();
				cout&lt;&lt;"\n\t\tAGENDA VIRTUAL";
				cout&lt;&lt;"\n\t1.BORRAR AMIGUIS";
				cout&lt;&lt;"\n\tNOMBRE:    ";	gets(nombre);
				agenda.del(nombre);
				break;
			}
			case 3:
			{       clrscr();
				cout&lt;&lt;"\n\t\tAGENDA VIRTUAL";
				cout&lt;&lt;"\n\t1.VER TODOS MIS AMIGUIS";
				agenda.visualiza();
				cout&lt;&lt;"\npresione enter";
				getchar();
				break;
			}
			default: break;
		}
	cout&lt;&lt;"\n\tDesea salir (S/N) :";
	cin&gt;&gt;opc; opc=toupper(opc);
	}while(opc=='N');
	getchar();
}
</PRE></BODY></HTML>
