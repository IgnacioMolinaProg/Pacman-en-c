#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED
#include "Listas.h"

void arreglopass(char pass[20]);//me muestra asteriscos al ingresar el pasword
NodoListaUsuario* registrar(NodoListaUsuario* listaUsuarios);
Users ingresar(NodoListaUsuario* listaUsuarios);
NodoListaUsuario* elimarUsuario(NodoListaUsuario* listaUsuario);


#endif // USUARIOS_H_INCLUDED
