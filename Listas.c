#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gotoxy.h"
#include "Graficos.h"
typedef struct NodoListaPuntaje
{
    int Puntaje;
    struct NodoListaPuntaje* anterior;
    struct NodoListaPuntaje* siguiente;
}NodoListaPuntaje;
typedef struct celdaNiveles
{
    NodoListaPuntaje* puntajes;
}celdaNiveles;
typedef struct
{
    char nombreUsuario[20];
    char pasword[20];
}Users;
typedef struct NodoListaUsuario
{
    Users usuario;
    celdaNiveles nivel[2];
    struct NodoListaUsuario* anterior;
    struct NodoListaUsuario* siguiente;
}NodoListaUsuario;
///LISTA PUNTAJE
NodoListaPuntaje* inicListaPuntaje()
{
    return NULL;
}
NodoListaPuntaje* crearNodoPuntajes(int dato)
{
    NodoListaPuntaje* aux=(NodoListaPuntaje*)malloc(sizeof(NodoListaPuntaje));
    aux->Puntaje=dato;
    aux->anterior=NULL;
    aux->siguiente=NULL;
    return aux;
}
///LISTA DE PUNTAJE
void mostrarListaPuntajes(NodoListaPuntaje* listaPuntaje,int x,int y)
{
    if(listaPuntaje!=NULL)
    {
        gotoxy(x+2,y);
        printf("%i",listaPuntaje->Puntaje);
        color(6);
        cubo(x,y-1,21,3);
        esqT_Left(x,y-1);
        esqT_Right(x+20,y-1);
        color(7);
        mostrarListaPuntajes(listaPuntaje->siguiente,x,y+=2);
    }
}
NodoListaPuntaje* buscarUltimoPuntaje(NodoListaPuntaje* listaPuntajes)
{
    NodoListaPuntaje* aux;
    if(listaPuntajes==NULL)
        aux=NULL;
    else
        if(listaPuntajes->siguiente==NULL)
            aux=listaPuntajes;
        else
            aux=buscarUltimoPuntaje(listaPuntajes->siguiente);
    return aux;
}
NodoListaPuntaje* agregarAlFinalPuntaje(NodoListaPuntaje* listaPuntajes,NodoListaPuntaje* nuevoNodo)
{
    NodoListaPuntaje* ultimo=NULL;
    if(listaPuntajes==NULL)
        listaPuntajes=nuevoNodo;
    else
    {
        ultimo=buscarUltimoPuntaje(listaPuntajes);
        ultimo->siguiente=nuevoNodo;
        nuevoNodo->anterior=ultimo;
    }
    return listaPuntajes;
}
///LISTA DE USUARIOS
NodoListaUsuario* inicListaUsuario()
{
    return NULL;
}
NodoListaUsuario* crearNodoUsuario(Users datos)
{
    NodoListaUsuario* aux=(NodoListaUsuario*)malloc(sizeof(NodoListaUsuario));
    aux->usuario=datos;
    aux->anterior=NULL;
    aux->siguiente=NULL;
    for(int i=0;i<3;i++)
        aux->nivel[i].puntajes=NULL;
    return aux;
}
NodoListaUsuario* buscarUltimoUsuario(NodoListaUsuario* listaUsuario)
{
    NodoListaUsuario* aux;
    if(listaUsuario==NULL)
        aux=NULL;
    else
        if(listaUsuario->siguiente==NULL)
            aux=listaUsuario;
        else
            aux=buscarUltimoUsuario(listaUsuario->siguiente);
    return aux;
}
NodoListaUsuario* agregarAlFinalUsuario(NodoListaUsuario* listaUsuario,NodoListaUsuario* nuevoNodo)
{
    NodoListaUsuario* ultimo=NULL;
    if(listaUsuario==NULL)
        listaUsuario=nuevoNodo;
    else
    {
        ultimo=buscarUltimoUsuario(listaUsuario);
        ultimo->siguiente=nuevoNodo;
        nuevoNodo->anterior=ultimo;
    }
    return listaUsuario;
}
void mostrarUsuario(Users datos)
{
    puts(datos.nombreUsuario);
}
void mostrarListaUsuario(NodoListaUsuario* listaUsuario,int x,int y)
{
    if(listaUsuario!=NULL)
    {
        gotoxy(x+2,y);
        mostrarUsuario(listaUsuario->usuario);
        color(6);
        cubo(x,y-1,21,3);
        esqT_Left(x,y-1);
        esqT_Right(x+20,y-1);
        color(7);
        mostrarListaUsuario(listaUsuario->siguiente,x,y+=2);
    }
}
NodoListaUsuario* borrarNodoUsuario(NodoListaUsuario* listaUsuario,char nombre[])
{
    NodoListaUsuario* aBorrar=inicListaUsuario();
    NodoListaUsuario* seguidora=inicListaUsuario();
    if(listaUsuario!=NULL)
    {
        if(strcmp(listaUsuario->usuario.nombreUsuario,nombre)==0)
        {
            aBorrar=listaUsuario;
            listaUsuario=listaUsuario->siguiente;
            if(listaUsuario!=NULL)
                listaUsuario->anterior=NULL;
            free(aBorrar);
        }
        else
        {
            seguidora=listaUsuario->siguiente;
            while(seguidora!=NULL && strcmp(seguidora->usuario.nombreUsuario,nombre)!=0)
            {
                seguidora=seguidora->siguiente;
            }
            if(seguidora!=NULL)
            {
                NodoListaUsuario* ante=seguidora->anterior;
                ante->siguiente=seguidora->siguiente;
                if(seguidora->siguiente)
                {
                    NodoListaUsuario* sig=seguidora->siguiente;
                    sig->anterior=ante;
                }
                free(seguidora);
            }
        }
    }
    return listaUsuario;
}
int existeUsuario(NodoListaUsuario* listaUsuario,char nombre[])
{
    int rta=0;
    if(listaUsuario!=NULL)
    {
        if(strcmp(listaUsuario->usuario.nombreUsuario,nombre)==0)
            rta=1;
        else
            rta=existeUsuario(listaUsuario->siguiente,nombre);
    }
    return rta;
}
NodoListaUsuario* buscarUsuario(NodoListaUsuario* listaUsuario,char nombre[])
{
    NodoListaUsuario* aux=inicListaUsuario();
    int i=0;
    while(listaUsuario!=NULL&&i==0)
    {
        if(strcmp(listaUsuario->usuario.nombreUsuario,nombre)!=0)
            listaUsuario=listaUsuario->siguiente;
        else
        {
            aux=listaUsuario;
            i=1;
        }
    }
    return aux;
}
int compararPasword(NodoListaUsuario* listaUsuario,char nombre[],char contrasenia[])
{
    int esIgual=0;
    while(listaUsuario!=NULL&&esIgual==0)
    {
        if(strcmp(listaUsuario->usuario.nombreUsuario,nombre)==0)
        {
            if(strcasecmp(listaUsuario->usuario.pasword,contrasenia)==0)
            {
                esIgual=1;
            }
            else
                break;
        }
        else
            esIgual=compararPasword(listaUsuario->siguiente,nombre,contrasenia);
    }
    return esIgual;
}





