/*ARCHIVO: MATRIZ.H*/
#ifndef Matriz
#define Matriz
#define FORMAT "%8.31f"
typedef double D;
typedef int E;
typedef struct
{E f,c; D** matrice;}matriz;

/*Prototipos de funciones*/
matriz crear_vacia(E,E);
matriz crear(matriz);
matriz llenar(matriz);
void vaciar(matriz);
void obtener(matriz);
matriz asignar(matriz);
matriz igual(matriz,matriz);
matriz sumar(matriz,matriz);
matriz restar(matriz,matriz);
matriz negativa(matriz);
matriz escalar(matriz);
matriz producto(matriz, matriz);
matriz transpuesta(matriz);
D det(matriz);
void inversa(matriz);
void imprimir(matriz);
void menu(matriz,matriz);
#endif
