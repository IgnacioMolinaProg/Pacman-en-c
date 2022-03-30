#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED
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
///-----------PUNTAJES-------------
NodoListaPuntaje* inicListaPuntaje();
NodoListaPuntaje* crearNodoPuntajes(int dato);
NodoListaPuntaje* buscarUltimoPuntaje(NodoListaPuntaje* listaPuntajes);
NodoListaPuntaje* agregarAlFinalPuntaje(NodoListaPuntaje* listaPuntajes,NodoListaPuntaje* nuevoNodo);
void mostrarListaPuntajes(NodoListaPuntaje* listaPuntaje,int x,int y);
///-----------USUARIOS-------------
NodoListaUsuario* inicListaUsuario();
NodoListaUsuario* crearNodoUsuario(Users datos);
NodoListaUsuario* buscarUltimoUsuario(NodoListaUsuario* listaUsuario);
NodoListaUsuario* agregarAlFinalUsuario(NodoListaUsuario* listaUsuario,NodoListaUsuario* nuevoNodo);
void mostrarUsuario(Users datos);
void mostrarListaUsuario(NodoListaUsuario* listaUsuario,int x,int y);
NodoListaUsuario* borrarNodoUsuario(NodoListaUsuario* listaUsuario,char nombre[]);
int existeUsuario(NodoListaUsuario* listaUsuario,char nombre[]);
NodoListaUsuario* buscarUsuario(NodoListaUsuario* listaUsuario,char nombre[]);
int compararPasword(NodoListaUsuario* listaUsuario,char nombre[],char contrasenia[]);

#endif // LISTAS_H_INCLUDED
