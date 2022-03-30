#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

typedef struct
{
    char nombre[20];
    int nivel;
    int puntaje;
} stAux;
NodoListaUsuario* guardarEnListaPuntaje(char archivoPuntajes[],NodoListaUsuario* listaUsuarios);
void guardarEnArchivoPuntaje(char archivoPuntaje[],NodoListaUsuario* listaUsuarios);
void mostrarArchivoPuntaje(char archivoPuntaje []);
void guardarEnArchivoUsuario(char archivoUsuarios[],NodoListaUsuario* listaUsuarios);
NodoListaUsuario* guardarEnListaUsuario(char archivoUsuarios[],NodoListaUsuario* listaUsuarios);
void mostrarArchivoUsuarios(char archivoUsuarios []);
void menuNiveles(celdaNiveles nivel[]);
void menuPrincipal();

#endif // MENUS_H_INCLUDED
