#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Listas.h"
#include "gotoxy.h"
#include "Graficos.h"
#include "Niveles.h"

void arreglopass(char pass[20])
{
    int pos=0, cont=0;
    int i=0;
    for(i=0; i<20; i++)
    {
        pass[i]=0;
    }
    pass[pos]=getch();
    if((pass[pos]!=13)&&(pass[pos]!=8))
    {
        printf("*");
    }
    while(pass[pos]!=13)
    {
        pos++;
        fflush(stdin);
        pass[pos]=getch();
        while((pos>0)&&(pass[pos]==8))
        {
            pass[pos]=0;
            pos=pos-1;
            printf("\b \b");
            pass[pos]=getch();
            while(pos==0&&pass[pos]==8)
            {
                pass[pos]=getch();
            }
        }
        if((pass[pos]!=13)&&(pass[pos]!=8))
        {
            printf("*");
            cont++;
        }
    }
    pass[strlen(pass)-1]='\0';
}
NodoListaUsuario* registrar(NodoListaUsuario* listaUsuarios)
{
    Users usuarioAux;
    int x=30,y=17;
    char control='s';
    while(control=='s'||control=='S')
    {
        system("cls");
        color(7);
        gotoxy(x+20,y-5);
        printf("  REGISTRARSE");
        color(6);
        cubo(x+18,y-6,19,3);
        gotoxy(x,y);
        color(7);
        printf("Ingrese Nombre de Usuario: ");
        color(1);
        cubo(x+28,y-1,25,3);

        gotoxy(x+7,y+4);
        color(7);
        printf("Ingrese contrase%ca: ",164);
        color(1);
        cubo(x+28,y+3,25,3);

        gotoxy(x+30,y);
        color(7);
        fflush(stdin);
        gets(usuarioAux.nombreUsuario);

        if(existeUsuario(listaUsuarios,usuarioAux.nombreUsuario)==1)
        {
            gotoxy(2,28);
            color(4);
            printf("ERROR: El Usuario al que quiere ingresar ya existe, desea intententarlo de nuevo? S/N ");
            fflush(stdin);
            scanf("%c",&control);
        }
        else
        {
            control='n';
            gotoxy(x+30,y+4);
            color(7);
            fflush(stdin);
            gets(usuarioAux.pasword);
            listaUsuarios=agregarAlFinalUsuario(listaUsuarios,crearNodoUsuario(usuarioAux));
            printf("\n\n\n\t\t\tPudiste registrarte con exito!!! ");
            system("pause");
        }
    }
    gotoxy(52,31);
    color(6);
    printf("LISTA DE USUARIOS");
    color(6);
    cubo(50,30,21,3);
    color(7);
    mostrarListaUsuario(listaUsuarios,50,33);
    printf("\n\n\n\n\t\t\t\t\t");
    system("pause");

    return listaUsuarios;
}
Users ingresar(NodoListaUsuario* listaUsuarios)
{
    Users usuarioAux;
    int x=30,y=17;
    char control='s';
    while(control=='s'||control=='S')
    {
        system("cls");
        color(7);
        gotoxy(x+20,y-5);
        printf("INGRESAR SESION");
        color(6);
        cubo(x+18,y-6,19,3);
        gotoxy(x,y);
        color(7);
        printf("Ingrese Nombre de Usuario: ");
        color(1);
        cubo(x+28,y-1,25,3);
        gotoxy(x+7,y+4);
        color(7);
        printf("Ingrese contrase%ca: ",164);
        color(1);
        cubo(x+28,y+3,25,3);

        gotoxy(x+30,y);
        color(7);
        fflush(stdin);
        gets(usuarioAux.nombreUsuario);


        if(existeUsuario(listaUsuarios,usuarioAux.nombreUsuario)==0)
        {
            gotoxy(2,28);
            color(4);
            printf("ERROR: El Usuario al que quiere ingresar no existe. Desea intentarlo de nuevo? S/N ");
            fflush(stdin);
            scanf("%c",&control);
        }
        else
        {
            control='n';
            gotoxy(x+30,y+4);
            color(7);
            fflush(stdin);
            arreglopass(usuarioAux.pasword);

            if(compararPasword(listaUsuarios,usuarioAux.nombreUsuario,usuarioAux.pasword)==0)
            {
                gotoxy(2,28);
                color(4);
                printf("\nERROR: La contrase%ca que desea ingresar es incorrecta. Desea intentelo de nuevo? S/N ",164);
                fflush(stdin);
                scanf("%c",&control);
            }
            if(compararPasword(listaUsuarios,usuarioAux.nombreUsuario,usuarioAux.pasword)==1)
            {
                printf("\n\n\n\t\t\tPudiste ingresar sesion con exito!!! ");
                system("pause");
            }
        }
    }
    return usuarioAux;
}
NodoListaUsuario* elimarUsuario(NodoListaUsuario* listaUsuarios)
{
    int x=30,y=12;
    char control='s';
    Users usuarioAux;
    while(control=='s'||control=='S')
    {
        system("cls");
        color(7);
        gotoxy(x+20,y);
        printf("ELIMINAR USUARIO");
        color(6);
        cubo(x+18,y-1,20,3);

        gotoxy(x,y+5);
        color(7);
        printf("Ingrese Nombre de Usuario: ");
        color(1);
        cubo(x+28,y+4,25,3);

        gotoxy(x+7,y+9);
        color(7);
        printf("Ingrese contrase%ca: ",164);
        color(1);
        cubo(x+28,y+8,25,3);

        gotoxy(52,31);
        color(6);
        printf("LISTA DE USUARIOS");
        color(6);
        cubo(50,30,21,3);
        color(7);
        mostrarListaUsuario(listaUsuarios,50,33);

        gotoxy(x+30,y+5);
        color(7);
        fflush(stdin);
        gets(usuarioAux.nombreUsuario);

        if(existeUsuario(listaUsuarios,usuarioAux.nombreUsuario)==0)
        {
            gotoxy(2,28);
            color(4);
            printf("ERROR: El Usuario al que quiere borrar no existe. Desea intentarlo de nuevo? S/N ");
            fflush(stdin);
            scanf("%c",&control);
        }
        else
        {
            control='n';
            gotoxy(x+30,y+9);
            color(7);
            fflush(stdin);
            arreglopass(usuarioAux.pasword);

            if(compararPasword(listaUsuarios,usuarioAux.nombreUsuario,usuarioAux.pasword)==0)
            {
                gotoxy(2,28);
                color(4);
                printf("\nERROR: La contrase%ca que desea ingresar es incorrecta. Desea intentelo de nuevo? S/N ",164);
                fflush(stdin);
                scanf("%c",&control);
            }
            if(compararPasword(listaUsuarios,usuarioAux.nombreUsuario,usuarioAux.pasword)==1)
            {
                listaUsuarios=borrarNodoUsuario(listaUsuarios,usuarioAux.nombreUsuario);
                if(existeUsuario(listaUsuarios,usuarioAux.nombreUsuario)==0)
                {
                    printf("\n\n\n\t\t\t\t\tPudiste borrar el usuario con exito!!! ");
                    if(listaUsuarios!=NULL)
                    {
                        gotoxy(52,31);
                        color(6);
                        printf("LISTA DE USUARIOS");
                        color(6);
                        cubo(50,30,21,3);
                        color(7);
                        mostrarListaUsuario(listaUsuarios,50,33);
                        printf("\n\n\n\t\t\t\t\t\t                       ");
                        printf("\n\t\t\t\t\t\t                           ");
                        printf("\n\n\n\t\t\t\t\t   ");
                    }
                    else
                    {
                        gotoxy(50,30);
                        printf("                     ");
                        gotoxy(50,31);
                        printf("                     ");
                        gotoxy(50,32);
                        printf("                     ");
                        gotoxy(50,33);
                        printf("                     ");
                        gotoxy(50,34);
                        printf("                     ");
                        gotoxy(80,24);
                    }
                     system("pause");

                }
                else
                {
                    gotoxy(2,29);
                    color(4);
                    printf("ERROR: El Usuario no se pudo eliminar, intentelo de nuevo mas tarde.");
                    system("pause");
                }
            }
        }
    }


    return listaUsuarios;
}
