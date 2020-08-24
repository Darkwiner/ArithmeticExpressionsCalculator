#ifndef LISTAEXPRE_H_INCLUDED
#define LISTAEXPRE_H_INCLUDED
#include "expresionR.h"

typedef struct nodoL{
                    expresionR info;
                    nodoL * sig;
               		} listaE;

typedef listaE * listaExpre;

//Crear listaExpre
void crearListaExpre (listaExpre &L);

//Obtiene el n�mero m�ximo de los identificadores guardados en la listaExpre
///PRECONDICI�N: existe al menos 1
int maxId (listaExpre L);

//Guarda la expresi�nR al final de la lista
void guardarExpreAlFinal (expresionR expre, listaExpre &L);

//Comprobar que existan expresiones para mostrar
boolean esVacia (listaExpre Lexpre);

//Busca si el identificador existe en la listaExpre
boolean existeIdent (identificador ident, listaExpre Lexpre);

//Devuelve la expresi�n con ese ident de la listaExpre
///PRECONDICI�N: el ident existe en la lista
void obtenerExpresionRDeLista (identificador ident, listaExpre Lexpre,expresionR &pExpresion);

//Muestro lista de expresiones por pantalla
void mostrarListaExpre (listaExpre L,boolean ImprimoResultado);

//Borrar todas las expresiones de la lista
void borrarListaExpre(listaExpre &L);

//SELECTORAS

//Devuelve la expresi�n de la listaExpre
///PRECONDICI�N: el ident existe en la lista
expresionR obtenerExpresionR (listaExpre Lexpre);

#endif
