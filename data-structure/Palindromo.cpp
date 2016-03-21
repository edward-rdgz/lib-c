#include <PALIND~1.H>
#include <STRING.H>
#include <CTYPE.H>
void main()
{       clrscr();
	LD L1, L2;	char palabra[80];	int ban=1;
	cin.getline(palabra,79);
	for(int i=0; i<strlen(palabra); i++)
	{	palabra[i]=toupper(palabra[i]);		}
	cout<<"La cadena introducida es: "<<palabra<<endl;
	cout<<"El numero de letras son:  "<<strlen(palabra)<<endl;
	for(i=0; i<strlen(palabra); i++)
	{	L1.insfinal(palabra[i]);
		L2.insinicio(palabra[i]);
	}
	i=0;
	while(ban && i<strlen(palabra))
	{       if(L1.delinicio()!=L2.delinicio())	ban=0;
		i++;
	}

	if(ban)		cout<<endl<<"LA PALABRA ESCRITA ES UN 'PALINDROMO'";
	else		cout<<endl<<"LA PALABRA ESCRITA NO ES UN PALINDROMO";
	cout<<endl;
	L1.visualiza();cout<<endl;L2.visualiza();
	getchar();
}

