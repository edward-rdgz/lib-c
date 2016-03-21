//Programa de estructuras
//Articulo bases de datos
//Castillo Gardea Mariano
//01070097
#include <C:\TC\BIN\MATRIZ.H>
#include <C:\TC\BIN\PRESENTA.H>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void menu(matriz A, matriz B)
{int op; limpiar();double x;
 gotoxy(10,5);  cout<<"[1] OBTENER UN ELEMENTO DE A..";
 gotoxy(10,6);  cout<<"[2] OBTENER UN ELEMENTO DE B..";
 gotoxy(10,7);  cout<<"[3] ASIGNAR UN ELEMENTO DE A..";
 gotoxy(10,8);  cout<<"[4] ASIGNAR UN ELEMENTO DE B..";
 gotoxy(10,9);  cout<<"[5] IGUALAR A<-B..............";
 gotoxy(10,10); cout<<"[6] IGUALAR B<-A..............";
 gotoxy(10,11); cout<<"[7] SUMAR A + B...............";
 gotoxy(10,12); cout<<"[8] NEGATIVA DE A.............";
 gotoxy(10,13); cout<<"[9] NEGATIVA DE B.............";
 gotoxy(10,14); cout<<"[10] RESTAR A - B.............";
 gotoxy(10,15); cout<<"[11] RESTAR B - A.............";
 gotoxy(10,16); cout<<"[12] ESCALAR PARA A...........";
 gotoxy(10,17); cout<<"[13] ESCALAR PARA B...........";
 gotoxy(10,18); cout<<"[14] PRODUCTO A * B...........";
 gotoxy(10,19); cout<<"[15] PRODUCTO B * A...........";
 gotoxy(10,20); cout<<"[16] TRANSPUESTA DE A.........";
 gotoxy(10,21); cout<<"[17] TRANSPUESTA DE B.........";
 gotoxy(10,22); cout<<"[18] DETERMINANTE DE A........";
 gotoxy(10,23); cout<<"[19] DETERMINANTE DE B........";
 gotoxy(10,24); cout<<"[20] INVERSA DE A.............";
 gotoxy(10,25); cout<<"[21] INVERSA DE B.............";
 gotoxy(10,26); cout<<"[22] SALIR....................";
 do{gotoxy(22,28); cout<<"Seleccione una opcion (1-22): ";cin>>op;
 if(op<1 || op>22)
  {gotoxy(20,28);cout<<"Opci¢n incorrecta vuelva a intentar";}
 }while(op<1 || op>22);
 switch(op)
 {case 1:  {limpiar();gotoxy(28,4);  cout<<"[1] OBTENER UN ELEMENTO DE A..";
	    obtener(A);menu(A,B);break;}
  case 2:  {limpiar(); gotoxy(28,4); cout<<"[2] OBTENER UN ELEMENTO DE B..";
	    obtener(B);menu(A,B);break;}
  case 3:  {limpiar(); gotoxy(28,4); cout<<"[3] ASIGNAR UN ELEMENTO DE A..";
	    imprimir(asignar(A));getchar();menu(A,B);break;}
  case 4:  {limpiar(); gotoxy(28,4); cout<<"[4] ASIGNAR UN ELEMENTO DE B..";
	    imprimir(asignar(B));getchar();menu(A,B);break;}
  case 5:  {limpiar(); gotoxy(28,4); cout<<"[5] IGUALAR A<-B..............";
	    imprimir(igual(A,B));menu(A,B);break;}
  case 6:  {limpiar(); gotoxy(28,4); cout<<"[6] IGUALAR B<-A..............";
	    imprimir(igual(B,A));menu(A,B);break;}
  case 7:  {limpiar(); gotoxy(28,4); cout<<"[7] SUMAR A + B...............";
	    imprimir(sumar(A,B));menu(A,B);break;}
  case 8:  {limpiar(); gotoxy(28,4); cout<<"[8] NEGATIVA DE A.............";
	    imprimir(negativa(A));menu(A,B);break;}
  case 9:  {limpiar(); gotoxy(28,4); cout<<"[9] NEGATIVA DE B.............";
	    imprimir(negativa(B));menu(A,B);break;}
  case 10: {limpiar(); gotoxy(28,4); cout<<"[10] RESTAR A - B.............";
	    imprimir(restar(A,B));menu(A,B);break;}
  case 11: {limpiar(); gotoxy(28,4); cout<<"[11] RESTAR B - A.............";
	    imprimir(restar(B,A));menu(A,B);break;}
  case 12: {limpiar(); gotoxy(28,4); cout<<"[12] ESCALAR PARA A...........";
	    imprimir(escalar(A));menu(A,B);break;}
  case 13: {limpiar(); gotoxy(28,4); cout<<"[13] ESCALAR PARA B...........";
	    imprimir(escalar(B));menu(A,B);break;}
  case 14: {limpiar(); gotoxy(28,4); cout<<"[14] PRODUCTO A * B...........";
	    imprimir(producto(A,B));menu(A,B);break;}
  case 15: {limpiar(); gotoxy(28,4); cout<<"[15] PRODUCTO B * A...........";
	    imprimir(producto(B,A));menu(A,B);break;}
  case 16: {limpiar(); gotoxy(28,4); cout<<"[16] TRANSPUESTA DE A.........";
	    imprimir(transpuesta(A));menu(A,B);break;}
  case 17: {limpiar(); gotoxy(28,4); cout<<"[17] TRANSPUESTA DE B.........";
	    imprimir(transpuesta(B));menu(A,B);break;}
  case 18: {limpiar(); gotoxy(28,4); cout<<"[18] DETERMINANTE DE A........";
	    x=det(A);gotoxy(5,5);cout<<"Determinante = "<<x;getchar();menu(A,B);break;}
  case 19: {limpiar(); gotoxy(28,4); cout<<"[19] DETERMINANTE DE B........";
	    x=det(B);gotoxy(5,5);cout<<"Determinante = "<<x;getchar();menu(A,B);break;}
  case 20: {limpiar(); gotoxy(28,4); cout<<"[20] INVERSA DE A.............";
	    inversa(A);menu(A,B);break;}
  case 21: {limpiar(); gotoxy(28,4); cout<<"[21] INVERSA DE B.............";
	    inversa(B);menu(A,B);break;}
  case 22: {limpiar(); gotoxy(28,4); cout<<"[22] SALIR....................";
	    gotoxy(10,10); cout<<"Saliendo...";
	    gotoxy(25,23); cout<<"Presione Enter Para Salir...";break;
	   }
 }
}

