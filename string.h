#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "boolean.h"

const int MAX = 80;
typedef char * string;

//Crear string
void strCrear(string &s);

//Carga string ingresado por teclado
void cargarString (string &s);

//Mostrar string en pantalla
void mostrarString (string s);

//Dice si el string es vacio
boolean stringVacio (string s);

//Compara dos strings si son iguales
boolean comparoString (string s1, string s2);

//Largo del string
int strlar (string s);

//Copiar el primer string en el segundo
void strcop(string &texto1, string  texto2);

//Convierte strings de números a tipo de dato int. PRECONDICIÓN: el string solo contiene números
int convertirString (string s);

//Escribe en el archivo los caracteres del string s (incluido '\0')
//PRECONDICION: El archivo viene abierto para escritura.
void bajarString (string s, FILE * f);

//Lee desde el archivo los caracteres del string s.
//PRECONDICION: El archivo viene abierto para lectura.
void subirString (string &s, FILE * f);

//Devuelve si es una variable o no
boolean esVariable (string s);

//Devuelve si es un numero o no
boolean esNumero (string s);

//Libera memoria dinamica del string
void liberarMemoriaString (string &s);

//Verifico si el nombre es alfanumérico
boolean esAlfanumerico(string s);

//Verificó extensión del archivo es .dat
boolean extensionValida(string s);

//Contar puntos en el nombre del archivo
boolean contarPuntos(string s);

//Agrego de a un carater a un string
void agregoCharAString(char a, string &s);

//Concateno string, segundo en el primero
void strcon(string & texto1,string texto2);

//Separo el numero de un string
string cortoNumeroDeExpresion (string s);

#endif // STRING_H_INCLUDED
