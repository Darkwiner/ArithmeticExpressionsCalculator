#include "listaExpre.h"


//Crear listaExpre
void crearListaExpre (listaExpre &L)
{
    L = NULL;
}

//Obtiene el n�mero m�ximo de los identificadores guardados en la listaExpre
///PRECONDICI�N: existe al menos 1
int maxId (listaExpre L)
{
    int MAX = 0;
    while (L != NULL)
    {
        MAX++;
        L = L->sig;
    }
    return MAX;
}

//Guarda la expresi�nR al final de la lista
void guardarExpreAlFinal (expresionR expre, listaExpre &L)
{
    if (L == NULL)
    {
        L = new listaE;
        L->info = expre;
        L->sig = NULL;
    }
    else
        guardarExpreAlFinal(expre, L->sig);
}

//Comprobar que existan expresiones para mostrar
boolean esVacia (listaExpre Lexpre)
{
    boolean vacia = FALSE;
    if (Lexpre == NULL)
        vacia = TRUE;
    return vacia;
}

//Busca si el identificador existe en la listaExpre
boolean existeIdent (identificador ident, listaExpre Lexpre)
{
    boolean existe = FALSE;
    while (Lexpre != NULL && !existe)
        if (identificadoresSonIguales(ident, obtenerIdentificador(Lexpre->info)))
            existe = TRUE;
        else
            Lexpre = Lexpre->sig;
    return existe;
}

//Devuelve la expresi�n con ese ident de la listaExpre
///PRECONDICI�N: el ident existe en la lista
void obtenerExpresionRDeLista (identificador ident, listaExpre Lexpre,expresionR &pExpresion)
{
    boolean existe=FALSE;
    while (Lexpre != NULL && !existe)
    {
        if (identificadoresSonIguales(ident, obtenerIdentificador(Lexpre->info) ))
        {
            existe = TRUE;
            pExpresion=Lexpre->info;
        }
        else
            Lexpre = Lexpre->sig;
    }
}

//Muestro lista de expresiones por pantalla
void mostrarListaExpre (listaExpre L,boolean ImprimoResultado)
{
     while (L != NULL)
    {

        mostrarExpresionR(L->info, ImprimoResultado);
        printf("\n");
        L = L->sig;
    }
}

//Borrar todas las expresiones de la lista
void borrarListaExpre(listaExpre &L)
{
    listaExpre aux;
    while (L != NULL)
    {
        aux = L->sig;
        expresionR pExpre = obtenerExpresionR(L);
        borrarExpR (pExpre);
        delete L;
        L=aux;
    }
}

//SELECTORAS

//Devuelve la expresi�n de la listaExpre
///PRECONDICI�N: el ident existe en la lista
expresionR obtenerExpresionR (listaExpre Lexpre)
{
    return Lexpre->info;
}
