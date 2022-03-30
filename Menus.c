#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <pthread.h>
#include "gotoxy.h"
#include "Graficos.h"
#include "Listas.h"
#include "Usuarios.h"
#include "Niveles.h"
#include <mmsystem.h>
void musicaMenu(int aux)
{
    while(aux==0)
        PlaySoundA(TEXT("PamanMenu.wav"),NULL,SND_FILENAME);
}
typedef struct
{
    char nombre[20];
    int nivel;
    int puntaje;
} stAuxPuntaje;
NodoListaUsuario* guardarEnListaPuntaje(char archivoPuntajes[],NodoListaUsuario* listaUsuarios)
{
    FILE* archi;
    stAuxPuntaje a;
    NodoListaUsuario* usuarioAux;
    archi=fopen(archivoPuntajes,"rb");

    if(archi!=NULL)
    {
        while(fread(&a,sizeof(stAuxPuntaje),1,archi)>0)
        {
            usuarioAux=buscarUsuario(listaUsuarios,a.nombre);
            usuarioAux->nivel[a.nivel].puntajes=agregarAlFinalPuntaje(usuarioAux->nivel[a.nivel].puntajes,crearNodoPuntajes(a.puntaje));
        }
        fclose(archi);
    }
    return listaUsuarios;
}
void guardarEnArchivoPuntaje(char archivoPuntaje[],NodoListaUsuario* listaUsuarios)
{
    FILE* archi;
    archi=fopen(archivoPuntaje,"ab");
    stAuxPuntaje auxiliar;
    mostrarListaPuntajes(listaUsuarios->nivel[0].puntajes,5,70);
    system("pause");
    if(archi!=NULL)
    {
        color(7);
        printf("\n");
        while(listaUsuarios!=NULL)
        {
            for(int i=0; i<3; i++)
            {

                while(listaUsuarios!=NULL)
                {
                    strcpy(auxiliar.nombre,listaUsuarios->usuario.nombreUsuario);

                    mostrarUsuario(listaUsuarios->usuario);
                    puts(listaUsuarios->usuario.pasword);
                    auxiliar.nivel=i;
                    printf("nivel: %i\n\n",auxiliar.nivel);
                    //auxiliar.puntaje=listaUsuarios->nivel[i].puntajes->Puntaje;


                    //fwrite(&auxiliar,sizeof(stAuxPuntaje),1,archi);
                    listaUsuarios=listaUsuarios->siguiente;

                }
            }


        }
        fclose(archi);
    }
}
void mostrarArchivoPuntaje(char archivoPuntaje [])
{
    FILE*archi;
    stAuxPuntaje auxiliar;
    archi=fopen(archivoPuntaje,"rb");
    fread(&auxiliar,sizeof(stAuxPuntaje),1,archi);
    if(archi!=NULL)
    {
        while(!feof(archi))
        {
            printf("\nNombre: %s",auxiliar.nombre);
            printf("\nNivel: %i",auxiliar.nivel);
            printf("\nPuntaje: %i",auxiliar.puntaje);
            fread(&auxiliar,sizeof(stAuxPuntaje),1,archi);
        }
        fclose(archi);
    }
    system("pause");
}
void guardarEnArchivoUsuario(char archivoUsuarios[],NodoListaUsuario* listaUsuarios)
{
    FILE* archi;
    archi=fopen(archivoUsuarios,"wb");
    if(archi!=NULL)
    {

        while(listaUsuarios!=NULL)
        {
            fwrite(&listaUsuarios->usuario,sizeof(Users),1,archi);
            listaUsuarios=listaUsuarios->siguiente;
        }
        fclose(archi);
    }
}
NodoListaUsuario* guardarEnListaUsuario(char archivoUsuarios[],NodoListaUsuario* listaUsuarios)
{
    FILE* archi;
    Users a;
    archi=fopen(archivoUsuarios,"rb");
    fread(&a,sizeof(Users),1,archi);
    if(archi!=NULL)
    {
        while(!feof(archi))
        {
            listaUsuarios=agregarAlFinalUsuario(listaUsuarios,crearNodoUsuario(a));
            fread(&a,sizeof(Users),1,archi);
        }
        fclose(archi);
    }
    return listaUsuarios;
}
void mostrarArchivoUsuarios(char archivoUsuarios [])
{
    FILE*archi;
    Users p;
    archi=fopen(archivoUsuarios,"rb");
    fread(&p,sizeof(Users),1,archi);
    if(archi!=NULL)
    {
        while(!feof(archi))
        {
           printf("\nNombre: ");
           puts(p.nombreUsuario);
           printf("Pasword: ");
           puts(p.pasword);
            fread(&p,sizeof(Users),1,archi);
        }
        fclose(archi);
    }
    system("pause");
}
void menuNiveles(celdaNiveles nivel[])
{
    system("cls");
    int x=20,y=15,opcion=0,voler=0;
    char salir;
    while(voler==0)
    {
        system("cls");
        x=20;
        y=15;
        opcion=0;
        voler=0;
        salir='s';
        while(opcion!=13)
        {
            gotoxy(45,10);
            color(7);
            printf("NIVELES");
            color(6);
            cubo(43,9,11,3);
            color(7);
            cuboFino(20,15,11,3);
            gotoxy(22,16);
            printf("NIVEL 1");
            cuboFino(35,15,11,3);
            gotoxy(37,16);
            printf("NIVEL 2");
            cuboFino(50,15,11,3);
            gotoxy(52,16);
            printf("NIVEL 3");
            cuboFino(65,15,11,3);
            gotoxy(67,16);
            printf(" SALIR");
            color(1);
            cubo(x,y,11,3);
            opcion=getch();
            switch(opcion)
            {
            case 75://IZQUIERDA
                if(x==20)
                    x=65;
                else
                    x-=15;
                color(1);
                cubo(x,y,11,3);
                break;
            case 77://DERECHA
                if(x==65)
                    x=20;
                else
                    x+=15;
                color(1);
                cubo(x,y,11,3);
                break;
            }
        }
        switch(x)
        {
        case 20:
            system("cls");
            Portadapacman(40,15);
            loading(50,30);
            while(salir=='s'||salir=='S')
            {
                //en la lista de puntaje agrego el nuevo puntaje que retorna nivel_1
                nivel[0].puntajes=agregarAlFinalPuntaje(nivel[0].puntajes,crearNodoPuntajes(Nivel_1()));
                gotoxy(100,22);
                color(6);
                printf(" LISTA DE PUNTAJES");
                color(6);
                cubo(99,21,21,3);
                color(7);
                mostrarListaPuntajes(nivel[0].puntajes,99,24);
                printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t");
                Sleep(1000);
                system("pause");
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tDesea Jugar nuevamente? S/N ");

                fflush(stdin);
                scanf("%c",&salir);
            }
            break;
        case 35:
            gotoxy(20,30);
            color(9);
            printf("Nivel en proceso de Desarrollo, lo esperamos pronto... ");
            system("pause");
            break;
        case 50:
            gotoxy(20,30);
            color(9);
            printf("Nivel en proceso de Desarrollo, lo esperamos pronto... ");
            system("pause");
            break;
        case 65:
            voler=1;
            break;
        }
    }


}
void menuPrincipal()
{
    int x=53,y=18,opcion,salir=0;
    char archivoUsuarios[]={"Usuarios.bin"};
    //char archivoPuntajes[]= {"Puntajes.bin"};
    NodoListaUsuario* listaUsuario=inicListaUsuario();
    Users usuarioIngresado;
    listaUsuario=guardarEnListaUsuario(archivoUsuarios,listaUsuario);
    //listaUsuario=guardarEnListaPuntaje(archivoPuntajes,listaUsuario);
    while(salir!=1)
    {
        x=53,y=18;
        opcion=0;
        system("cls");
        Portadapacman(40,11);
        while(opcion!=13)
        {

            color(7);
            gotoxy(55,19);
            printf("Ingresar Sesion");
            cuboFino(53,18,20,3);
            gotoxy(58,23);
            printf("Registrarse");
            cuboFino(53,22,20,3);
            gotoxy(55,27);
            printf("Eliminar Usuario");
            cuboFino(53,26,20,3);
            gotoxy(61,31);
            printf("Salir");
            cuboFino(53,30,20,3);
            color(1);
            cubo(x,y,20,3);
            opcion=getch();
            switch(opcion)
            {
            case 80://ABAJO
                if(y==30)
                    y=18;
                else
                    y+=4;
                cubo(x,y,20,3);
                break;
            case 72://ARRIBA
                if(y==18)
                    y=30;
                else
                    y-=4;
                cubo(x,y,20,3);
                break;
            }
        }
        switch(y)
        {
        case 18:
            if(listaUsuario!=NULL)//comprueba si hay por lo menos 1 usuario registrado
            {
                usuarioIngresado=ingresar(listaUsuario);
                if(existeUsuario(listaUsuario,usuarioIngresado.nombreUsuario)==1)
                    menuNiveles(buscarUsuario(listaUsuario,usuarioIngresado.nombreUsuario)->nivel);
            }
            else
            {
                system("cls");
                color(7);
                gotoxy(50,12);
                printf("INGRESAR SESION");
                color(6);
                cubo(48,11,19,3);
                gotoxy(25,18);
                color(4);
                printf("ERROR: No se encontraron Usuarios cargados. ");
                system("pause");
            }

            break;
        case 22:
            listaUsuario=registrar(listaUsuario);
            break;
        case 26:
            if(listaUsuario!=NULL)
                listaUsuario=elimarUsuario(listaUsuario);
            else
            {
                system("cls");
                color(7);
                gotoxy(50,12);
                printf("ELIMINAR USUARIO");
                color(6);
                cubo(48,11,20,3);
                gotoxy(25,18);
                color(4);
                printf("ERROR: No se encontraron Usuarios cargados. ");
                system("pause");
            }
            break;
        case 30:
            salir=1;
            break;
        }
    }

    guardarEnArchivoUsuario(archivoUsuarios,listaUsuario);
    //guardarEnArchivoPuntaje(archivoPuntajes,listaUsuario);

}
