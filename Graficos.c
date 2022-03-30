#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include "gotoxy.h"
#include "windows.h"


void pacman(int x,int y)
{
    gotoxy(x,y);
    color(6);
    printf("( )");
}
void tapar(int x,int y)
{
    gotoxy(x,y);
    color(6);
    printf("   ");
}
void fantasmaPink(int x,int y)
{
    gotoxy(x,y);
    color(5);
    printf("%c%c%c",178,178,178);
}
void fantasmaBlue(int x,int y)
{
    gotoxy(x,y);
    color(1);
    printf("%c%c%c",178,178,178);
}
void fantasmaRed(int x,int y)
{
    gotoxy(x,y);
    color(4);
    printf("%c%c%c",178,178,178);
}
void fantasmaCeleste(int x,int y)
{
    gotoxy(x,y);
    color(3);
    printf("%c%c%c",178,178,178);
}
void fantasmaGreen(int x,int y)
{
    gotoxy(x,y);
    color(10);
    printf("%c%c%c",178,178,178);
}
void esqUpLeft(int x,int y)
{
    gotoxy(x,y);
    printf("%c",201);
}
void esqDownLeft(int x,int y)
{
    gotoxy(x,y);
    printf("%c",200);
}
void esqDownRight(int x,int y)
{
    gotoxy(x,y);
    printf("%c",188);
}
void esqUpRight(int x,int y)
{
    gotoxy(x,y);
    printf("%c",187);
}
void linHori(int x,int y)
{
    gotoxy(x,y);
    printf("%c",205);
}
void linVert(int x,int y)
{
    gotoxy(x,y);
    printf("%c",186);
}
void esqT_Up(int x,int y)
{
    gotoxy(x,y);
    printf("%c",203);
}
void esqT_Down(int x,int y)
{
    gotoxy(x,y);
    printf("%c",202);
}
void esqT_Left(int x,int y)
{
    gotoxy(x,y);
    printf("%c",204);
}
void esqT_Right(int x,int y)
{
    gotoxy(x,y);
    printf("%c",185);
}
void esqCruz(int x,int y)
{
    gotoxy(x,y);
    printf("%c",206);
}
void cubo(int x,int y,int ancho,int alto)
{
    int i=0;
    ancho-=2;
    alto-=2;
    esqUpLeft(x,y);
    x+=1;
    for(i=0; i<ancho; i++)
    {
        linHori(x,y);
        x++;
    }
    esqUpRight(x,y);
    x-=ancho+1;
    y++;
    for(i=0; i<alto; i++)
    {
        linVert(x,y);
        linVert(x+ancho+1,y);
        y++;
    }
    esqDownLeft(x,y);
    x+=1;
    for(i=0; i<ancho; i++)
    {
        linHori(x,y);
        x++;
    }
    esqDownRight(x,y);
}
void cuboFino(int x,int y,int ancho,int alto)
{
    int i=0;
    ancho-=2;
    alto-=2;
    gotoxy(x,y);
    printf("%c",218);
    x+=1;
    for(i=0; i<ancho; i++)
    {
        gotoxy(x,y);
        printf("%c",196);
        x++;
    }
    gotoxy(x,y);
    printf("%c",191);
    x-=ancho+1;
    y++;
    for(i=0; i<alto; i++)
    {
        gotoxy(x,y);
        printf("%c",179);
        gotoxy(x+ancho+1,y);
        printf("%c",179);
        y++;
    }
    gotoxy(x,y);
    printf("%c",192);
    x+=1;
    for(i=0; i<ancho; i++)
    {
        gotoxy(x,y);
        printf("%c",196);
        x++;
    }
    gotoxy(x,y);
    printf("%c",217);
}
void pelotasNivel_1(int x,int y,char matriz[61][29])
{
    int i=0,j=0;

    for(i=0; i<29; i++)
    {
        for(j=0; j<61; j++)
        {
            gotoxy(x,y);
            if(matriz[j][i]=='1')
                printf("%c",46);
            if(matriz[j][i]=='2')
                printf("%c",254);
            x++;
        }
        x-=61;
        y++;
    }
}
void laberinto_1(int x,int y)
{
    int i=0;
    color(1);
    //FONDO
    cubo(x,y,63,31);
    //ATAJO
    esqDownLeft(x,y+9);
    esqDownLeft(x+50,y+13);
    esqDownLeft(x+50,y+19);
    esqDownRight(x+12,y+13);
    esqDownRight(x+12,y+19);
    esqDownRight(x+62,y+9);
    esqUpRight(x+12,y+9);
    esqUpRight(x+12,y+15);
    esqUpRight(x+62,y+19);
    esqUpLeft(x,y+19);
    esqUpLeft(x+50,y+9);
    esqUpLeft(x+50,y+15);
    x++;
    for(i=0; i<11; i++)
    {
        linHori(x,y+9);
        linHori(x,y+13);
        linHori(x,y+15);
        linHori(x,y+19);
        linHori(x+50,y+9);
        linHori(x+50,y+13);
        linHori(x+50,y+15);
        linHori(x+50,y+19);
        x++;
    }
    y+=10;
    for(i=0; i<3; i++)
    {
        linVert(x,y);
        linVert(x,y+6);
        linVert(x+38,y);
        linVert(x+38,y+6);
        y++;
    }
    x-=12;
    y-=3;
    for(i=0; i<9; i++)
    {
        if(i==3||i==5)
        {
            linHori(x,y);
            linHori(x+62,y);
        }
        else
        {
            gotoxy(x,y);
            printf(" ");
            gotoxy(x+62,y);
            printf(" ");
        }
        y++;
    }
    y-=19;
    //FIGURA 1
    cubo(x+4,y+2,9,3);
    //FIGURA 2
    cubo(x+16,y+2,11,3);
    //FIGURA 3
    cubo(x+30,y,3,5);
    esqT_Up(x+30,y);
    esqT_Up(x+32,y);
    //FIGURA 4
    cubo(x+36,y+2,11,3);
    //FIGURA 5
    cubo(x+50,y+2,9,3);
    //FIGURA 6
    cubo(x+4,y+6,9,2);
    //FIGURA 7
    cubo(x+16,y+6,3,8);
    cubo(x+18,y+9,9,2);
    esqDownLeft(x+18,y+9);
    esqUpLeft(x+18,y+10);
    //FIGURA 8
    cubo(x+22,y+6,19,2);
    cubo(x+30,y+7,3,4);
    esqUpRight(x+30,y+7);
    gotoxy(x+31,y+7);
    printf(" ");
    esqUpLeft(x+32,y+7);
    //FIGURA 9
    cubo(x+44,y+6,3,8);
    cubo(x+36,y+9,9,2);
    esqDownRight(x+44,y+9);
    esqUpRight(x+44,y+10);
    //FIGURA 10
    cubo(x+50,y+6,9,2);
    //CAJON FANTASMAS
    cubo(x+22,y+12,19,5);
    tapar(x+30,y+12);
    color(1);
    // FIGURA 11
    cubo(x+16,y+15,3,5);
    //FIGURA 12
    cubo(x+22,y+18,19,2);
    cubo(x+30,y+19,3,4);
    esqUpRight(x+30,y+19);
    gotoxy(x+31,y+19);
    printf(" ");
    esqUpLeft(x+32,y+19);
    //FIGURA 13
    cubo(x+44,y+15,3,5);
    //FIGURA 14
    cubo(x+4,y+21,9,2);
    cubo(x+10,y+21,3,5);
    linHori(x+10,y+21);
    esqUpRight(x+10,y+22);
    gotoxy(x+11,y+22);
    printf(" ");
    //FIGURA 15
    cubo(x+16,y+21,11,2);
    //FIGURA 16
    cubo(x+36,y+21,11,2);
    //FIGURA 17
    cubo(x+50,y+21,9,2);
    cubo(x+50,y+21,3,5);
    linHori(x+52,y+21);
    esqUpLeft(x+52,y+22);
    gotoxy(x+51,y+22);
    printf(" ");
    //FIGURA 18
    cubo(x,y+24,7,2);
    esqT_Left(x,y+24);
    esqT_Left(x,y+25);
    //FIGURA 19
    cubo(x+16,y+24,3,5);
    cubo(x+4,y+27,23,2);
    esqDownRight(x+16,y+27);
    gotoxy(x+17,y+27);
    printf(" ");
    esqDownLeft(x+18,y+27);
    //FIGURA 20
    cubo(x+22,y+24,19,2);
    cubo(x+30,y+25,3,4);
    esqUpRight(x+30,y+25);
    gotoxy(x+31,y+25);
    printf(" ");
    esqUpLeft(x+32,y+25);
    //FIGURA 21
    cubo(x+44,y+24,3,5);
    cubo(x+36,y+27,23,2);
    esqDownRight(x+44,y+27);
    gotoxy(x+45,y+27);
    printf(" ");
    esqDownLeft(x+46,y+27);
    //FIGURA 22
    cubo(x+56,y+24,7,2);
    esqT_Right(x+62,y+24);
    esqT_Right(x+62,y+25);
}
void letra_G(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    gotoxy(x+6,y);
    printf("%c",223);
    //linea del medio
    gotoxy(x+3,y+2);
    printf("%c",223);
    gotoxy(x+4,y+2);
    printf("%c",223);
    gotoxy(x+5,y+2);
    printf("%c",223);
    //lateral derecho
    gotoxy(x+6,y+2);
    printf("%c",219);
    gotoxy(x+6,y+3);
    printf("%c",219);
    gotoxy(x+6,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    gotoxy(x+5,y+4);
    printf("%c",220);
}
void letra_A(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
    //linea del medio
    gotoxy(x+1,y+2);
    printf("%c",220);
    gotoxy(x+2,y+2);
    printf("%c",220);
    gotoxy(x+3,y+2);
    printf("%c",220);
    gotoxy(x+4,y+2);
    printf("%c",220);
}
void letra_N(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //diagonal
    gotoxy(x+1,y);
    printf("%c",219);
    gotoxy(x+2,y+1);
    printf("%c",219);
    gotoxy(x+3,y+2);
    printf("%c",219);
    gotoxy(x+4,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
    //lateral derecho
    gotoxy(x+6,y);
    printf("%c",219);
    gotoxy(x+6,y+1);
    printf("%c",219);
    gotoxy(x+6,y+2);
    printf("%c",219);
    gotoxy(x+6,y+3);
    printf("%c",219);
    gotoxy(x+6,y+4);
    printf("%c",219);
}
void letra_S(int x,int y)
{
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    //linea del medio
    gotoxy(x,y+2);
    printf("%c",223);
    gotoxy(x+1,y+2);
    printf("%c",223);
    gotoxy(x+2,y+2);
    printf("%c",223);
    gotoxy(x+3,y+2);
    printf("%c",223);
    gotoxy(x+4,y+2);
    printf("%c",223);
    //lateral derecho
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
    //lateral inferior
    gotoxy(x,y+4);
    printf("%c",220);
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
}
void letra_T(int x,int y)
{
    //lateral superior
    gotoxy(x,y);
    printf("%c",223);
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    gotoxy(x+6,y);
    printf("%c",223);
    //lateral del medio
    gotoxy(x+3,y);
    printf("%c",219);
    gotoxy(x+3,y+1);
    printf("%c",219);
    gotoxy(x+3,y+2);
    printf("%c",219);
    gotoxy(x+3,y+3);
    printf("%c",219);
    gotoxy(x+3,y+4);
    printf("%c",219);
}
void letra_E(int x,int y)
{
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //linea del medio
    gotoxy(x+1,y+2);
    printf("%c",254);
    gotoxy(x+2,y+2);
    printf("%c",254);
    gotoxy(x+3,y+2);
    printf("%c",254);
    gotoxy(x+4,y+2);
    printf("%c",254);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    gotoxy(x+5,y+4);
    printf("%c",220);
}
void letra_P(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    //linea del medio
    gotoxy(x+1,y+2);
    printf("%c",220);
    gotoxy(x+2,y+2);
    printf("%c",220);
    gotoxy(x+3,y+2);
    printf("%c",220);
    gotoxy(x+4,y+2);
    printf("%c",220);
}
void letra_R(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    //linea del medio
    gotoxy(x+1,y+2);
    printf("%c",220);
    gotoxy(x+2,y+2);
    printf("%c",220);
    gotoxy(x+3,y+2);
    printf("%c",220);
    gotoxy(x+4,y+2);
    printf("%c",220);
    //diagonal
    gotoxy(x+1,y+3);
    printf("%c",223);
    gotoxy(x+2,y+3);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",223);
    gotoxy(x+4,y+4);
    printf("%c",220);
}
void letra_D(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",220);
    gotoxy(x+5,y+1);
    printf("%c",219);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",223);
    gotoxy(x+5,y+3);
    printf("%c",219);
    //lateral derecho
    gotoxy(x+6,y+2);
    printf("%c",219);
}
void letra_I(int x,int y)
{
    gotoxy(x,y);
    printf("%c",223);
    gotoxy(x,y+1);
    printf("%c",220);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
}
void letra_U(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
}
void letra_J(int x,int y)
{
    //lateral superior
    gotoxy(x,y);
    printf("%c",223);
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //lateral izquierdo
    gotoxy(x,y+2);
    printf("%c",220);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
}
void letra_C(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
     //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    gotoxy(x+5,y+4);
    printf("%c",220);
}
void letra_M(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //diagonal
    gotoxy(x+1,y);
    printf("%c",219);
    gotoxy(x+2,y+1);
    printf("%c",219);
    gotoxy(x+3,y+2);
    printf("%c",219);
    gotoxy(x+4,y+1);
    printf("%c",219);
    gotoxy(x+5,y);
    printf("%c",219);
    //lateral derecho
    gotoxy(x+6,y);
    printf("%c",219);
    gotoxy(x+6,y+1);
    printf("%c",219);
    gotoxy(x+6,y+2);
    printf("%c",219);
    gotoxy(x+6,y+3);
    printf("%c",219);
    gotoxy(x+6,y+4);
    printf("%c",219);
}
void Ganaste(int x,int y)
{
    letra_G(x,y);
    letra_A(x+9,y);
    letra_N(x+17,y);
    letra_A(x+26,y);
    letra_S(x+34,y);
    letra_T(x+42,y);
    letra_E(x+50,y);
}
void Perdiste(int x,int y)
{
    letra_P(x,y);
    letra_E(x+8,y);
    letra_R(x+16,y);
    letra_D(x+24,y);
    letra_I(x+33,y);
    letra_S(x+36,y);
    letra_T(x+44,y);
    letra_E(x+53,y);
}
void Portadapacman(int x,int y)
{
    color(6);
    letra_P(x,y);
    letra_A(x+8,y);
    letra_C(x+16,y);
    letra_M(x+24,y);
    letra_A(x+33,y);
    letra_N(x+41,y);
}
void numero_0(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    gotoxy(x+5,y+4);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+6,y);
    printf("%c",219);
    gotoxy(x+6,y+1);
    printf("%c",219);
    gotoxy(x+6,y+2);
    printf("%c",219);
    gotoxy(x+6,y+3);
    printf("%c",219);
    gotoxy(x+6,y+4);
    printf("%c",219);
}
void numero_1(int x,int y)
{
    //diagonal
    gotoxy(x+2,y);
    printf("%c",220);
    gotoxy(x+1,y+1);
    printf("%c",223);
    gotoxy(x,y+1);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+3,y);
    printf("%c",219);
    gotoxy(x+3,y+1);
    printf("%c",219);
    gotoxy(x+3,y+2);
    printf("%c",219);
    gotoxy(x+3,y+3);
    printf("%c",219);
    gotoxy(x+3,y+4);
    printf("%c",219);
}
void numero_2(int x,int y)
{
    //lateral superior
    gotoxy(x,y);
    printf("%c",223);
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //lateral izquierdo
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    //linea del medio
    gotoxy(x+1,y+2);
    printf("%c",223);
    gotoxy(x+2,y+2);
    printf("%c",223);
    gotoxy(x+3,y+2);
    printf("%c",223);
    gotoxy(x+4,y+2);
    printf("%c",223);
    gotoxy(x+5,y+2);
    printf("%c",223);
    //lateral derecho
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    gotoxy(x+5,y+4);
    printf("%c",220);
}
void numero_3(int x,int y)
{
    //lateral superior
    gotoxy(x,y);
    printf("%c",223);
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    //linea del medio
    gotoxy(x,y+2);
    printf("%c",254);
    gotoxy(x+1,y+2);
    printf("%c",254);
    gotoxy(x+2,y+2);
    printf("%c",254);
    gotoxy(x+3,y+2);
    printf("%c",254);
    gotoxy(x+4,y+2);
    printf("%c",254);
    //lateral inferior
    gotoxy(x,y+4);
    printf("%c",220);
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
}
void numero_4(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    //linea del medio
    gotoxy(x,y+2);
    printf("%c",223);
    gotoxy(x+1,y+2);
    printf("%c",223);
    gotoxy(x+2,y+2);
    printf("%c",223);
    gotoxy(x+3,y+2);
    printf("%c",223);
    gotoxy(x+4,y+2);
    printf("%c",223);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);

}
void numero_5(int x,int y)
{
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    //linea del medio
    gotoxy(x,y+2);
    printf("%c",223);
    gotoxy(x+1,y+2);
    printf("%c",223);
    gotoxy(x+2,y+2);
    printf("%c",223);
    gotoxy(x+3,y+2);
    printf("%c",223);
    gotoxy(x+4,y+2);
    printf("%c",223);
    //lateral inferior
    gotoxy(x,y+4);
    printf("%c",220);
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
}
void numero_6(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //linea del medio
    gotoxy(x+1,y+2);
    printf("%c",223);
    gotoxy(x+2,y+2);
    printf("%c",223);
    gotoxy(x+3,y+2);
    printf("%c",223);
    gotoxy(x+4,y+2);
    printf("%c",223);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
}
void numero_7(int x,int y)
{
    //lateral superior
    gotoxy(x,y);
    printf("%c",223);
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    gotoxy(x+5,y);
    printf("%c",223);
    //lateral derecha
    gotoxy(x+6,y);
    printf("%c",219);
    gotoxy(x+6,y+1);
    printf("%c",219);
    gotoxy(x+6,y+2);
    printf("%c",219);
    gotoxy(x+6,y+3);
    printf("%c",219);
    gotoxy(x+6,y+4);
    printf("%c",219);
}
void numero_8(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    gotoxy(x,y+2);
    printf("%c",219);
    gotoxy(x,y+3);
    printf("%c",219);
    gotoxy(x,y+4);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    //linea del medio
    gotoxy(x+1,y+2);
    printf("%c",254);
    gotoxy(x+2,y+2);
    printf("%c",254);
    gotoxy(x+3,y+2);
    printf("%c",254);
    gotoxy(x+4,y+2);
    printf("%c",254);
    //lateral inferior
    gotoxy(x+1,y+4);
    printf("%c",220);
    gotoxy(x+2,y+4);
    printf("%c",220);
    gotoxy(x+3,y+4);
    printf("%c",220);
    gotoxy(x+4,y+4);
    printf("%c",220);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
}
void numero_9(int x,int y)
{
    //lateral izquierdo
    gotoxy(x,y);
    printf("%c",219);
    gotoxy(x,y+1);
    printf("%c",219);
    //lateral superior
    gotoxy(x+1,y);
    printf("%c",223);
    gotoxy(x+2,y);
    printf("%c",223);
    gotoxy(x+3,y);
    printf("%c",223);
    gotoxy(x+4,y);
    printf("%c",223);
    //linea del medio
    gotoxy(x,y+2);
    printf("%c",223);
    gotoxy(x+1,y+2);
    printf("%c",223);
    gotoxy(x+2,y+2);
    printf("%c",223);
    gotoxy(x+3,y+2);
    printf("%c",223);
    gotoxy(x+4,y+2);
    printf("%c",223);
    //lateral derecho
    gotoxy(x+5,y);
    printf("%c",219);
    gotoxy(x+5,y+1);
    printf("%c",219);
    gotoxy(x+5,y+2);
    printf("%c",219);
    gotoxy(x+5,y+3);
    printf("%c",219);
    gotoxy(x+5,y+4);
    printf("%c",219);
}
void taparNumero(int x,int y)
{
    gotoxy(x,y);
    printf("          ");
    gotoxy(x,y+1);
    printf("          ");
    gotoxy(x,y+2);
    printf("          ");
    gotoxy(x,y+3);
    printf("          ");
    gotoxy(x,y+4);
    printf("          ");
}
void mostrarPuntaje(int x,int y,int puntaje)
{
    taparNumero(x,y);
    taparNumero(x+6,y);
    taparNumero(x+16,y);

    if(puntaje<10)
    {
        if(puntaje==0)
            numero_0(x,y);
        if(puntaje==1)
            numero_1(x,y);
        if(puntaje==2)
            numero_2(x,y);
        if(puntaje==3)
            numero_3(x,y);
        if(puntaje==4)
            numero_4(x,y);
        if(puntaje==5)
            numero_5(x,y);
        if(puntaje==6)
            numero_6(x,y);
        if(puntaje==7)
            numero_7(x,y);
        if(puntaje==8)
            numero_8(x,y);
        if(puntaje==9)
            numero_9(x,y);
    }
    if(puntaje<20&&puntaje>9)
    {
        numero_1(x,y);
        if(puntaje==10)
            numero_0(x+6,y);
        if(puntaje==11)
            numero_1(x+6,y);
        if(puntaje==12)
            numero_2(x+6,y);
        if(puntaje==13)
            numero_3(x+6,y);
        if(puntaje==14)
            numero_4(x+6,y);
        if(puntaje==15)
            numero_5(x+6,y);
        if(puntaje==16)
            numero_6(x+6,y);
        if(puntaje==17)
            numero_7(x+6,y);
        if(puntaje==18)
            numero_8(x+6,y);
        if(puntaje==19)
            numero_9(x+6,y);
    }
    if(puntaje<30&&puntaje>19)
    {
        numero_2(x,y);
        if(puntaje==20)
            numero_0(x+8,y);
        if(puntaje==21)
            numero_1(x+8,y);
        if(puntaje==22)
            numero_2(x+8,y);
        if(puntaje==23)
            numero_3(x+8,y);
        if(puntaje==24)
            numero_4(x+8,y);
        if(puntaje==25)
            numero_5(x+8,y);
        if(puntaje==26)
            numero_6(x+8,y);
        if(puntaje==27)
            numero_7(x+8,y);
        if(puntaje==28)
            numero_8(x+8,y);
        if(puntaje==29)
            numero_9(x+8,y);
    }
    if(puntaje<40&&puntaje>29)
    {
        numero_3(x,y);
        if(puntaje==30)
            numero_0(x+8,y);
        if(puntaje==31)
            numero_1(x+8,y);
        if(puntaje==32)
            numero_2(x+8,y);
        if(puntaje==33)
            numero_3(x+8,y);
        if(puntaje==34)
            numero_4(x+8,y);
        if(puntaje==35)
            numero_5(x+8,y);
        if(puntaje==36)
            numero_6(x+8,y);
        if(puntaje==37)
            numero_7(x+8,y);
        if(puntaje==38)
            numero_8(x+8,y);
        if(puntaje==39)
            numero_9(x+8,y);
    }
    if(puntaje<50&&puntaje>39)
    {
        numero_4(x,y);
        if(puntaje==40)
            numero_0(x+8,y);
        if(puntaje==41)
            numero_1(x+8,y);
        if(puntaje==42)
            numero_2(x+8,y);
        if(puntaje==43)
            numero_3(x+8,y);
        if(puntaje==44)
            numero_4(x+8,y);
        if(puntaje==45)
            numero_5(x+8,y);
        if(puntaje==46)
            numero_6(x+8,y);
        if(puntaje==47)
            numero_7(x+8,y);
        if(puntaje==48)
            numero_8(x+8,y);
        if(puntaje==49)
            numero_9(x+8,y);
    }
    if(puntaje<60&&puntaje>49)
    {
        numero_5(x,y);
        if(puntaje==50)
            numero_0(x+8,y);
        if(puntaje==51)
            numero_1(x+8,y);
        if(puntaje==52)
            numero_2(x+8,y);
        if(puntaje==53)
            numero_3(x+8,y);
        if(puntaje==54)
            numero_4(x+8,y);
        if(puntaje==55)
            numero_5(x+8,y);
        if(puntaje==56)
            numero_6(x+8,y);
        if(puntaje==57)
            numero_7(x+8,y);
        if(puntaje==58)
            numero_8(x+8,y);
        if(puntaje==59)
            numero_9(x+8,y);
    }
    if(puntaje<70&&puntaje>59)
    {
        numero_6(x,y);
        if(puntaje==60)
            numero_0(x+8,y);
        if(puntaje==61)
            numero_1(x+8,y);
        if(puntaje==62)
            numero_2(x+8,y);
        if(puntaje==63)
            numero_3(x+8,y);
        if(puntaje==64)
            numero_4(x+8,y);
        if(puntaje==65)
            numero_5(x+8,y);
        if(puntaje==66)
            numero_6(x+8,y);
        if(puntaje==67)
            numero_7(x+8,y);
        if(puntaje==68)
            numero_8(x+8,y);
        if(puntaje==69)
            numero_9(x+8,y);
    }
    if(puntaje<80&&puntaje>69)
    {
        numero_7(x,y);
        if(puntaje==70)
            numero_0(x+9,y);
        if(puntaje==71)
            numero_1(x+9,y);
        if(puntaje==72)
            numero_2(x+9,y);
        if(puntaje==73)
            numero_3(x+9,y);
        if(puntaje==74)
            numero_4(x+9,y);
        if(puntaje==75)
            numero_5(x+9,y);
        if(puntaje==76)
            numero_6(x+9,y);
        if(puntaje==77)
            numero_7(x+9,y);
        if(puntaje==78)
            numero_8(x+9,y);
        if(puntaje==79)
            numero_9(x+9,y);
    }
    if(puntaje<90&&puntaje>79)
    {
        numero_8(x,y);
        if(puntaje==80)
            numero_0(x+8,y);
        if(puntaje==81)
            numero_1(x+8,y);
        if(puntaje==82)
            numero_2(x+8,y);
        if(puntaje==83)
            numero_3(x+8,y);
        if(puntaje==84)
            numero_4(x+8,y);
        if(puntaje==85)
            numero_5(x+8,y);
        if(puntaje==86)
            numero_6(x+8,y);
        if(puntaje==87)
            numero_7(x+8,y);
        if(puntaje==88)
            numero_8(x+8,y);
        if(puntaje==89)
            numero_9(x+8,y);
    }
    if(puntaje<100&&puntaje>89)
    {
        numero_9(x,y);
        if(puntaje==90)
            numero_0(x+8,y);
        if(puntaje==91)
            numero_1(x+8,y);
        if(puntaje==92)
            numero_2(x+8,y);
        if(puntaje==93)
            numero_3(x+8,y);
        if(puntaje==94)
            numero_4(x+8,y);
        if(puntaje==95)
            numero_5(x+8,y);
        if(puntaje==96)
            numero_6(x+8,y);
        if(puntaje==97)
            numero_7(x+8,y);
        if(puntaje==98)
            numero_8(x+8,y);
        if(puntaje==99)
            numero_9(x+8,y);
    }
    if(puntaje<110&&puntaje>99)
    {
        numero_1(x,y);
        numero_0(x+6,y);
        if(puntaje==100)
            numero_0(x+15,y);
        if(puntaje==101)
            numero_1(x+15,y);
        if(puntaje==102)
            numero_2(x+15,y);
        if(puntaje==103)
            numero_3(x+15,y);
        if(puntaje==104)
            numero_4(x+15,y);
        if(puntaje==105)
            numero_5(x+15,y);
        if(puntaje==106)
            numero_6(x+15,y);
        if(puntaje==107)
            numero_7(x+15,y);
        if(puntaje==108)
            numero_8(x+15,y);
        if(puntaje==109)
            numero_9(x+15,y);
    }
    if(puntaje<120&&puntaje>109)
    {
        numero_1(x,y);
        numero_1(x+6,y);
        if(puntaje==110)
            numero_0(x+12,y);
        if(puntaje==111)
            numero_1(x+12,y);
        if(puntaje==112)
            numero_2(x+12,y);
        if(puntaje==113)
            numero_3(x+12,y);
        if(puntaje==114)
            numero_4(x+12,y);
        if(puntaje==115)
            numero_5(x+12,y);
        if(puntaje==116)
            numero_6(x+12,y);
        if(puntaje==117)
            numero_7(x+12,y);
        if(puntaje==118)
            numero_8(x+12,y);
        if(puntaje==119)
            numero_9(x+12,y);
    }
    if(puntaje<130&&puntaje>119)
    {
        numero_1(x,y);
        numero_2(x+6,y);
        if(puntaje==120)
            numero_0(x+14,y);
        if(puntaje==121)
            numero_1(x+14,y);
        if(puntaje==122)
            numero_2(x+14,y);
        if(puntaje==123)
            numero_3(x+14,y);
        if(puntaje==124)
            numero_4(x+14,y);
        if(puntaje==125)
            numero_5(x+14,y);
        if(puntaje==126)
            numero_6(x+14,y);
        if(puntaje==127)
            numero_7(x+14,y);
        if(puntaje==128)
            numero_8(x+14,y);
        if(puntaje==129)
            numero_9(x+14,y);
    }
    if(puntaje<140&&puntaje>129)
    {
        numero_1(x,y);
        numero_3(x+6,y);
        if(puntaje==130)
            numero_0(x+14,y);
        if(puntaje==131)
            numero_1(x+14,y);
        if(puntaje==132)
            numero_2(x+14,y);
        if(puntaje==133)
            numero_3(x+14,y);
        if(puntaje==134)
            numero_4(x+14,y);
        if(puntaje==135)
            numero_5(x+14,y);
        if(puntaje==136)
            numero_6(x+14,y);
        if(puntaje==137)
            numero_7(x+14,y);
        if(puntaje==138)
            numero_8(x+14,y);
        if(puntaje==139)
            numero_9(x+14,y);
    }
    if(puntaje<150&&puntaje>139)
    {
        numero_1(x,y);
        numero_4(x+6,y);
        if(puntaje==140)
            numero_0(x+14,y);
        if(puntaje==141)
            numero_1(x+14,y);
        if(puntaje==142)
            numero_2(x+14,y);
        if(puntaje==143)
            numero_3(x+14,y);
        if(puntaje==144)
            numero_4(x+14,y);
        if(puntaje==145)
            numero_5(x+14,y);
        if(puntaje==146)
            numero_6(x+14,y);
        if(puntaje==147)
            numero_7(x+14,y);
        if(puntaje==148)
            numero_8(x+14,y);
        if(puntaje==149)
            numero_9(x+14,y);
    }
    if(puntaje<160&&puntaje>149)
    {
        numero_1(x,y);
        numero_5(x+6,y);
        if(puntaje==150)
            numero_0(x+14,y);
        if(puntaje==151)
            numero_1(x+14,y);
        if(puntaje==152)
            numero_2(x+14,y);
        if(puntaje==153)
            numero_3(x+14,y);
        if(puntaje==154)
            numero_4(x+14,y);
        if(puntaje==155)
            numero_5(x+14,y);
        if(puntaje==156)
            numero_6(x+14,y);
        if(puntaje==157)
            numero_7(x+14,y);
        if(puntaje==158)
            numero_8(x+14,y);
        if(puntaje==159)
            numero_9(x+14,y);
    }
    if(puntaje<170&&puntaje>159)
    {
        numero_1(x,y);
        numero_6(x+6,y);
        if(puntaje==160)
            numero_0(x+14,y);
        if(puntaje==161)
            numero_1(x+14,y);
        if(puntaje==162)
            numero_2(x+14,y);
        if(puntaje==163)
            numero_3(x+14,y);
        if(puntaje==164)
            numero_4(x+14,y);
        if(puntaje==165)
            numero_5(x+14,y);
        if(puntaje==166)
            numero_6(x+14,y);
        if(puntaje==167)
            numero_7(x+14,y);
        if(puntaje==168)
            numero_8(x+14,y);
        if(puntaje==169)
            numero_9(x+14,y);
    }
    if(puntaje<180&&puntaje>169)
    {
        numero_1(x,y);
        numero_7(x+6,y);
        if(puntaje==170)
            numero_0(x+15,y);
        if(puntaje==171)
            numero_1(x+15,y);
        if(puntaje==172)
            numero_2(x+15,y);
        if(puntaje==173)
            numero_3(x+15,y);
        if(puntaje==174)
            numero_4(x+15,y);
        if(puntaje==175)
            numero_5(x+15,y);
        if(puntaje==176)
            numero_6(x+15,y);
        if(puntaje==177)
            numero_7(x+15,y);
        if(puntaje==178)
            numero_8(x+15,y);
        if(puntaje==179)
            numero_9(x+15,y);
    }
    if(puntaje<190&&puntaje>179)
    {
        numero_1(x,y);
        numero_8(x+6,y);
        if(puntaje==180)
            numero_0(x+14,y);
        if(puntaje==181)
            numero_1(x+14,y);
        if(puntaje==182)
            numero_2(x+14,y);
        if(puntaje==183)
            numero_3(x+14,y);
        if(puntaje==184)
            numero_4(x+14,y);
        if(puntaje==185)
            numero_5(x+14,y);
        if(puntaje==186)
            numero_6(x+14,y);
        if(puntaje==187)
            numero_7(x+14,y);
        if(puntaje==188)
            numero_8(x+14,y);
        if(puntaje==189)
            numero_9(x+14,y);
    }
    if(puntaje<200&&puntaje>189)
    {
        numero_1(x,y);
        numero_9(x+6,y);
        if(puntaje==190)
            numero_0(x+14,y);
        if(puntaje==191)
            numero_1(x+14,y);
        if(puntaje==192)
            numero_2(x+14,y);
        if(puntaje==193)
            numero_3(x+14,y);
        if(puntaje==194)
            numero_4(x+14,y);
        if(puntaje==195)
            numero_5(x+14,y);
        if(puntaje==196)
            numero_6(x+14,y);
        if(puntaje==197)
            numero_7(x+14,y);
        if(puntaje==198)
            numero_8(x+14,y);
        if(puntaje==199)
            numero_9(x+14,y);
    }
    if(puntaje<210&&puntaje>199)
    {
        numero_2(x,y);
        numero_0(x+8,y);
        if(puntaje==200)
            numero_0(x+17,y);
        if(puntaje==201)
            numero_1(x+17,y);
        if(puntaje==202)
            numero_2(x+17,y);
        if(puntaje==203)
            numero_3(x+17,y);
        if(puntaje==204)
            numero_4(x+17,y);
        if(puntaje==205)
            numero_5(x+17,y);
        if(puntaje==206)
            numero_6(x+17,y);
        if(puntaje==207)
            numero_7(x+17,y);
        if(puntaje==208)
            numero_8(x+17,y);
        if(puntaje==209)
            numero_9(x+17,y);
    }
    if(puntaje<220&&puntaje>209)
    {
        numero_2(x,y);
        numero_1(x+8,y);
        if(puntaje==210)
            numero_0(x+14,y);
        if(puntaje==211)
            numero_1(x+14,y);
        if(puntaje==212)
            numero_2(x+14,y);
        if(puntaje==213)
            numero_3(x+14,y);
        if(puntaje==214)
            numero_4(x+14,y);
        if(puntaje==215)
            numero_5(x+14,y);
        if(puntaje==216)
            numero_6(x+14,y);
        if(puntaje==217)
            numero_7(x+14,y);
        if(puntaje==218)
            numero_8(x+14,y);
        if(puntaje==219)
            numero_9(x+14,y);
    }
    if(puntaje<230&&puntaje>219)
    {
        numero_2(x,y);
        numero_2(x+8,y);
        if(puntaje==220)
            numero_0(x+16,y);
        if(puntaje==221)
            numero_1(x+16,y);
        if(puntaje==222)
            numero_2(x+16,y);
        if(puntaje==223)
            numero_3(x+16,y);
        if(puntaje==224)
            numero_4(x+16,y);
        if(puntaje==225)
            numero_5(x+16,y);
        if(puntaje==226)
            numero_6(x+16,y);
        if(puntaje==227)
            numero_7(x+16,y);
        if(puntaje==228)
            numero_8(x+16,y);
        if(puntaje==229)
            numero_9(x+16,y);
    }
    if(puntaje<240&&puntaje>229)
    {
        numero_2(x,y);
        numero_3(x+8,y);
        if(puntaje==230)
            numero_0(x+16,y);
        if(puntaje==231)
            numero_1(x+16,y);
        if(puntaje==232)
            numero_2(x+16,y);
        if(puntaje==233)
            numero_3(x+16,y);
        if(puntaje==234)
            numero_4(x+16,y);
        if(puntaje==235)
            numero_5(x+16,y);
        if(puntaje==236)
            numero_6(x+16,y);
        if(puntaje==237)
            numero_7(x+16,y);
        if(puntaje==238)
            numero_8(x+16,y);
        if(puntaje==239)
            numero_9(x+16,y);
    }
    if(puntaje<250&&puntaje>239)
    {
        numero_2(x,y);
        numero_4(x+8,y);
        if(puntaje==240)
            numero_0(x+16,y);
        if(puntaje==241)
            numero_1(x+16,y);
        if(puntaje==242)
            numero_2(x+16,y);
        if(puntaje==243)
            numero_3(x+16,y);
        if(puntaje==244)
            numero_4(x+16,y);
        if(puntaje==245)
            numero_5(x+16,y);
        if(puntaje==246)
            numero_6(x+16,y);
        if(puntaje==247)
            numero_7(x+16,y);
        if(puntaje==248)
            numero_8(x+16,y);
        if(puntaje==249)
            numero_9(x+16,y);
    }
    if(puntaje<260&&puntaje>249)
    {
        numero_2(x,y);
        numero_5(x+8,y);
        if(puntaje==250)
            numero_0(x+16,y);
        if(puntaje==251)
            numero_1(x+16,y);
        if(puntaje==252)
            numero_2(x+16,y);
        if(puntaje==253)
            numero_3(x+16,y);
        if(puntaje==254)
            numero_4(x+16,y);
        if(puntaje==255)
            numero_5(x+16,y);
        if(puntaje==256)
            numero_6(x+16,y);
        if(puntaje==257)
            numero_7(x+16,y);
        if(puntaje==258)
            numero_8(x+16,y);
        if(puntaje==259)
            numero_9(x+16,y);
    }
    if(puntaje<270&&puntaje>259)
    {
        numero_2(x,y);
        numero_6(x+8,y);
        if(puntaje==260)
            numero_0(x+16,y);
        if(puntaje==261)
            numero_1(x+16,y);
        if(puntaje==262)
            numero_2(x+16,y);
        if(puntaje==263)
            numero_3(x+16,y);
        if(puntaje==264)
            numero_4(x+16,y);
        if(puntaje==265)
            numero_5(x+16,y);
        if(puntaje==266)
            numero_6(x+16,y);
        if(puntaje==267)
            numero_7(x+16,y);
        if(puntaje==268)
            numero_8(x+16,y);
        if(puntaje==269)
            numero_9(x+16,y);
    }
    if(puntaje<280&&puntaje>269)
    {
        numero_2(x,y);
        numero_7(x+8,y);
        if(puntaje==270)
            numero_0(x+17,y);
        if(puntaje==271)
            numero_1(x+17,y);
        if(puntaje==272)
            numero_2(x+17,y);
        if(puntaje==273)
            numero_3(x+17,y);
        if(puntaje==274)
            numero_4(x+17,y);
        if(puntaje==275)
            numero_5(x+17,y);
        if(puntaje==276)
            numero_6(x+17,y);
        if(puntaje==277)
            numero_7(x+17,y);
        if(puntaje==278)
            numero_8(x+17,y);
        if(puntaje==279)
            numero_9(x+17,y);
    }
    if(puntaje<290&&puntaje>279)
    {
        numero_2(x,y);
        numero_8(x+8,y);
        if(puntaje==280)
            numero_0(x+16,y);
        if(puntaje==281)
            numero_1(x+16,y);
        if(puntaje==282)
            numero_2(x+16,y);
        if(puntaje==283)
            numero_3(x+16,y);
        if(puntaje==284)
            numero_4(x+16,y);
        if(puntaje==285)
            numero_5(x+16,y);
        if(puntaje==286)
            numero_6(x+16,y);
        if(puntaje==287)
            numero_7(x+16,y);
        if(puntaje==288)
            numero_8(x+16,y);
        if(puntaje==289)
            numero_9(x+16,y);
    }
    if(puntaje<300&&puntaje>289)
    {
        numero_2(x,y);
        numero_9(x+8,y);
        if(puntaje==290)
            numero_0(x+16,y);
        if(puntaje==291)
            numero_1(x+16,y);
        if(puntaje==292)
            numero_2(x+16,y);
        if(puntaje==293)
            numero_3(x+16,y);
        if(puntaje==294)
            numero_4(x+16,y);
        if(puntaje==295)
            numero_5(x+16,y);
        if(puntaje==296)
            numero_6(x+16,y);
        if(puntaje==297)
            numero_7(x+16,y);
        if(puntaje==298)
            numero_8(x+16,y);
        if(puntaje==299)
            numero_9(x+16,y);
    }
    if(puntaje<310&&puntaje>299)
    {
        numero_3(x,y);
        numero_0(x+8,y);
        if(puntaje==300)
            numero_0(x+17,y);
        if(puntaje==301)
            numero_1(x+17,y);
        if(puntaje==302)
            numero_2(x+17,y);
        if(puntaje==303)
            numero_3(x+17,y);
        if(puntaje==304)
            numero_4(x+17,y);
        if(puntaje==305)
            numero_5(x+17,y);
        if(puntaje==306)
            numero_6(x+17,y);
        if(puntaje==307)
            numero_7(x+17,y);
        if(puntaje==308)
            numero_8(x+17,y);
        if(puntaje==309)
            numero_9(x+17,y);
    }
    if(puntaje<320&&puntaje>309)
    {
        numero_3(x,y);
        numero_1(x+8,y);
        if(puntaje==310)
            numero_0(x+14,y);
        if(puntaje==311)
            numero_1(x+14,y);
        if(puntaje==312)
            numero_2(x+14,y);
        if(puntaje==313)
            numero_3(x+14,y);
        if(puntaje==314)
            numero_4(x+14,y);
        if(puntaje==315)
            numero_5(x+14,y);
        if(puntaje==316)
            numero_6(x+14,y);
        if(puntaje==317)
            numero_7(x+14,y);
        if(puntaje==318)
            numero_8(x+14,y);
        if(puntaje==319)
            numero_9(x+14,y);
    }
    if(puntaje<330&&puntaje>319)
    {
        numero_3(x,y);
        numero_2(x+8,y);
        if(puntaje==320)
            numero_0(x+16,y);
        if(puntaje==321)
            numero_1(x+16,y);
        if(puntaje==322)
            numero_2(x+16,y);
    }

}
void cuentaRegresiva(int x,int y,char matriz[61][29])
{
    char arregloAux[13];
    int j;
    for(j=24;j<37;j++)
    {
        if(j==24)
            arregloAux[0]=matriz[j][10];
        if(j==25)
            arregloAux[1]=matriz[j][10];
        if(j==26)
            arregloAux[2]=matriz[j][10];
        if(j==27)
            arregloAux[3]=matriz[j][10];
        if(j==28)
            arregloAux[4]=matriz[j][10];
        if(j==29)
            arregloAux[5]=matriz[j][10];
        if(j==30)
            arregloAux[6]=matriz[j][10];
        if(j==31)
            arregloAux[7]=matriz[j][10];
        if(j==32)
            arregloAux[8]=matriz[j][10];
        if(j==33)
            arregloAux[9]=matriz[j][10];
        if(j==34)
            arregloAux[10]=matriz[j][10];
        if(j==35)
            arregloAux[11]=matriz[j][10];
        if(j==36)
            arregloAux[12]=matriz[j][10];
        if(j==37)
            arregloAux[13]=matriz[j][10];

    }
    gotoxy(x-3,y);
    color(7);
    for(j=0;j<13;j++)
    {
        if(arregloAux[j]=='1')
            printf(".");
        else
            printf(" ");
    }
    color(6);
    numero_5(x,y);
    Sleep(700);
    taparNumero(x-2,y);
    gotoxy(x-2,y+1);
    color(1);
    printf("%c%c%c%c   %c%c%c%c",205,205,205,205,205,205,205,205);
    gotoxy(x-3,y);
    color(7);
    for(j=0;j<13;j++)
    {
        if(arregloAux[j]=='1')
            printf(".");
        else
            printf(" ");
    }
    color(6);
    numero_4(x,y);
    Sleep(700);
    taparNumero(x-2,y);
    gotoxy(x-2,y+1);
    color(1);
    printf("%c%c%c%c   %c%c%c%c",205,205,205,205,205,205,205,205);
    gotoxy(x-3,y);
    color(7);
    for(j=0;j<13;j++)
    {
        if(arregloAux[j]=='1')
            printf(".");
        else
            printf(" ");
    }
    color(6);
    numero_3(x,y);
    Sleep(700);
    taparNumero(x-2,y);
    gotoxy(x-2,y+1);
    color(1);
    printf("%c%c%c%c   %c%c%c%c",205,205,205,205,205,205,205,205);
    gotoxy(x-3,y);
    color(7);
    for(j=0;j<13;j++)
    {
        if(arregloAux[j]=='1')
            printf(".");
        else
            printf(" ");
    }
    color(6);
    numero_2(x,y);
    Sleep(700);
    taparNumero(x-2,y);
    gotoxy(x-2,y+1);
    color(1);
    printf("%c%c%c%c   %c%c%c%c",205,205,205,205,205,205,205,205);
    gotoxy(x-3,y);
    color(7);
    for(j=0;j<13;j++)
    {
        if(arregloAux[j]=='1')
            printf(".");
        else
            printf(" ");
    }
    color(6);
    numero_1(x+1,y);
    Sleep(700);
    taparNumero(x-2,y);
    gotoxy(x-2,y+1);
    color(1);
    printf("%c%c%c%c   %c%c%c%c",205,205,205,205,205,205,205,205);
    gotoxy(x-3,y);
    color(7);
    for(j=0;j<13;j++)
    {
        if(arregloAux[j]=='1')
            printf(".");
        else
            printf(" ");
    }
    color(6);
    numero_0(x,y);
    Sleep(700);
    taparNumero(x-2,y);
    gotoxy(x-2,y+1);
    color(1);
    printf("%c%c%c%c   %c%c%c%c",205,205,205,205,205,205,205,205);
    gotoxy(x-3,y);
    color(7);
    for(j=0;j<13;j++)
    {
        if(arregloAux[j]=='1')
            printf(".");
        else
            printf(" ");
    }
    color(6);
}
void pacmanGrande(int x,int y)
{
    gotoxy(x+1,y);
    color(6);
    printf(".--.");
    gotoxy(x,y+1);
    printf("/ _.-%c",39);
    gotoxy(x,y+2);
    printf("%c  %c-.",92,39);
    gotoxy(x+1,y+3);
    printf("%c--%c",39,39);
}
void taparPacmanGrande(int x,int y)
{
    gotoxy(x,y);
    color(6);
    printf("      ");
    gotoxy(x,y+1);
    printf("      ");
    gotoxy(x,y+2);
    printf("      ");
    gotoxy(x,y+3);
    printf("      ");
}
void pelotaGrande(int x,int y)
{
    gotoxy(x,y);
    printf(".-.");
    gotoxy(x,y+1);
    printf("'-'");
}
void loading(int x,int y)
{
    color(7);
    pelotaGrande(x+7,y+1);
    pelotaGrande(x+12,y+1);
    pelotaGrande(x+17,y+1);
    pelotaGrande(x+22,y+1);
    pelotaGrande(x+27,y+1);
    color(6);
    gotoxy(x+6,y+6);
    printf("L O A D I N G");
    int aux=x;
    for(int i=0;i<13;i++)
    {
        pacmanGrande(x,y);
        Sleep(100);
        gotoxy(aux+20,y+6);
        printf(". ");
        Sleep(200);
        printf(". ");
        Sleep(200);
        printf(".");
        Sleep(200);
        gotoxy(aux+20,y+6);
        printf("      ");
        taparPacmanGrande(x,y);
        x+=2;
    }

}









