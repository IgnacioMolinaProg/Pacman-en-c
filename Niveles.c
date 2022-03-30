#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <pthread.h>
#include "gotoxy.h"
#include "Graficos.h"
#include "Niveles.h"
void CancionStart()
{
    PlaySound(TEXT("pacmanStart.wav"),NULL, SND_FILENAME);
}
void Waka()
{
    PlaySound(TEXT("Waka.wav"),NULL, SND_FILENAME);
    pthread_exit(0);
}
void GameOver()
{
    PlaySound(TEXT("GameOver.wav"),NULL, SND_FILENAME);
}
void Sirena()
{
    while(TRUE)
    {
        PlaySound(TEXT("Sirena.wav"),NULL, SND_FILENAME);
    }
}
int mover_Up_1(Ejes* direc,Ejes* lab)
{
    int sePuede=0;
    int x1=lab->x;
    int y1=lab->y;
    int x=direc->x;
    int y=direc->y;
    if(x==(x1+0))
        if(y!=(y1+14))
            sePuede=1;
    if(x==(x1+1))
        if((y!=(y1+1))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26)))
            sePuede=1;
    if(x==(x1+2))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+3))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+4))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+5))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+6))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+7))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+8))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+9))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+10))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+11))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+12))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+13))
        if((y!=(y1+1))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+14))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+15))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+16))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+17))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+18))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+19))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+20))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+21))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+22))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+23))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+24))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+25))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+26))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+27))
        if((y!=(y1+1))&&(y!=(y1+8))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+26)))
            sePuede=1;
    if(x==(x1+28))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+29))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+30))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+31))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+32))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+33))
        if((y!=(y1+1))&&(y!=(y1+8))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+26)))
            sePuede=1;
    if(x==(x1+34))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+35))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+36))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+37))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+38))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+39))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+40))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+41))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+42))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+43))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+44))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+45))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+46))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+47))
        if((y!=(y1+1))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+48))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+49))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+50))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+51))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+52))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+53))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+54))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+55))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+56))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+57))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+58))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+59))
        if((y!=(y1+1))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26)))
            sePuede=1;
    if(x==(x1+60))
        if(y!=(y1+14))
            sePuede=1;
    return sePuede;
}
int mover_Down_1(Ejes* direc,Ejes* lab)
{
    int sePuede=0;
    int x1=lab->x;
    int y1=lab->y;
    int x=direc->x;
    int y=direc->y;
    if(x==(x1+0))
        if(y!=(y1+14))
            sePuede=1;
    if(x==(x1+1))
        if((y!=(y1+8))&&(y!=(y1+(14)))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+2))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+3))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+4))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+5))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+6))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+7))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+8))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+9))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+10))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+11))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+12))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+13))
        if((y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+14))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+15))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+16))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+17))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+18))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+19))
        if((y!=(y1+1))&&(y!=(y1+8))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+20))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+21))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+22))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+23))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+24))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+25))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+26))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+27))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+28))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+29))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+30))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+31))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+32))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+33))
        if((y!=(y1+5))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+34))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+35))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+36))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+37))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+38))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+39))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+40))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+11))&&(y!=(y1+17))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+41))
        if((y!=(y1+1))&&(y!=(y1+8))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+42))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+43))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+44))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+45))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+46))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+47))
        if((y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+48))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+49))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+50))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+51))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+52))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+53))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+54))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+55))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+56))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+57))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+58))
        if((y!=(y1+1))&&(y!=(y1+5))&&(y!=(y1+8))&&(y!=(y1+14))&&(y!=(y1+20))&&(y!=(y1+23))&&(y!=(y1+26))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+59))
        if((y!=(y1+8))&&(y!=(y1+(14)))&&(y!=(y1+23))&&(y!=(y1+29)))
            sePuede=1;
    if(x==(x1+60))
        if(y!=(y1+14))
            sePuede=1;
    return sePuede;
}
int mover_Left_1(Ejes* direc,Ejes* lab)
{
    int sePuede=0;
    int x1=lab->x;
    int y1=lab->y;
    int x=direc->x;
    int y=direc->y;
    if(y==(y1+1))
        if((x!=(x1+1))&&(x!=(x1+33)))
            sePuede=1;
    if(y==(y1+2))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+3))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+4))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+5))
        if(x!=(x1+1))
            sePuede=1;
    if(y==(y1+6))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+7))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+8))
        if((x!=(x1+1))&&(x!=(x1+19))&&(x!=(x1+33))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+9))
        if((x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+10))
        if((x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+11))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+12))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+13))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+14))
    {
        if(x!=(x1+41))
            sePuede=1;
        if(x==(x1-2))
            sePuede=2;
    }
    if(y==(y1+15))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+16))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+17))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+18))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+19))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+20))
        if((x!=(x1+1))&&(x!=(x1+33)))
            sePuede=1;
    if(y==(y1+21))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+22))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+23))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+53)))
            sePuede=1;
    if(y==(y1+24))
        if((x!=(x1+7))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+53)))
            sePuede=1;
    if(y==(y1+25))
        if((x!=(x1+7))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+53)))
            sePuede=1;
    if(y==(y1+26))
        if((x!=(x1+1))&&(x!=(x1+19))&&(x!=(x1+33))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+27))
        if((x!=(x1+1))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y+28))
        if((x!=(x1+1))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+29))
        if(x!=(x1+1))
            sePuede=1;
    return sePuede;
}
int mover_Right_1(Ejes* direc,Ejes* lab)
{
    int sePuede=0;
    int x1=lab->x;
    int y1=lab->y;
    int x=direc->x;
    int y=direc->y;
    if(y==(y1+1))
        if((x!=(x1+27))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+2))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+3))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+4))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+5))
        if(x!=(x1+59))
            sePuede=1;
    if(y==(y1+6))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+7))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+8))
        if((x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+41))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+9))
        if((x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+10))
        if((x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+11))
        if((x!=(x1+13))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+12))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+13))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+14))
    {
        if(x!=(x1+19))
            sePuede=1;
        if(x==(x1+62))
            sePuede=2;
    }
    if(y==(y1+15))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+16))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+17))
        if((x!=(x1+13))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+18))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+19))
        if((x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47)))
            sePuede=1;
    if(y==(y1+20))
        if((x!=(x1+27))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+21))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+22))
        if((x!=(x1+1))&&(x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+23))
        if((x!=(x1+7))&&(x!=(x1+47))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+24))
        if((x!=(x1+7))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+53)))
            sePuede=1;
    if(y==(y1+25))
        if((x!=(x1+7))&&(x!=(x1+13))&&(x!=(x1+19))&&(x!=(x1+41))&&(x!=(x1+47))&&(x!=(x1+53)))
            sePuede=1;
    if(y==(y1+26))
        if((x!=(x1+13))&&(x!=(x1+27))&&(x!=(x1+41))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+27))
        if((x!=(x1+1))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y+28))
        if((x!=(x1+1))&&(x!=(x1+27))&&(x!=(x1+33))&&(x!=(x1+59)))
            sePuede=1;
    if(y==(y1+29))
        if(x!=(x1+59))
            sePuede=1;
    return sePuede;
}
int esEquina_niv1(Ejes direc,Ejes laberinto)
{
    int respuesta=0;
    if(direc.y==laberinto.y+1)
        if((direc.x==laberinto.x+13)||(direc.x==laberinto.x+47))
            respuesta=1;
    if(direc.y==laberinto.y+5)
        if((direc.x==laberinto.x+1)||(direc.x==laberinto.x+13)||(direc.x==laberinto.x+19)||(direc.x==laberinto.x+27)||(direc.x==laberinto.x+33)||(direc.x==laberinto.x+41)||(direc.x==laberinto.x+47)||(direc.x==laberinto.x+59))
            respuesta=1;
    if(direc.y==laberinto.y+8)
        if((direc.x==laberinto.x+13)||(direc.x==laberinto.x+47))
            respuesta=1;
    if(direc.y==laberinto.y+11)
        if((direc.x==laberinto.x+27))
            respuesta=1;
    if(direc.y==laberinto.y+14)
        if((direc.x==laberinto.x+13)||(direc.x==laberinto.x+19)||(direc.x==laberinto.x+41)||(direc.x==laberinto.x+47))
            respuesta=1;
    if(direc.y==laberinto.y+17)
        if((direc.x==laberinto.x+19)||(direc.x==laberinto.x+41))
            respuesta=1;
    if(direc.y==laberinto.y+20)
        if((direc.x==laberinto.x+13)||(direc.x==laberinto.x+47))
            respuesta=1;
    if(direc.y==laberinto.y+23)
        if((direc.x==laberinto.x+13)||(direc.x==laberinto.x+19)||(direc.x==laberinto.x+41)||(direc.x==laberinto.x+47))
            respuesta=1;
    if(direc.y==laberinto.y+26)
        if((direc.x==laberinto.x+7)||(direc.x==laberinto.x+53))
            respuesta=1;
    return respuesta;
}
int moverFantasma_niv1(Ejes* f,Ejes* lab,int random,char matriz[61][29])
{
    Sleep(80);
    int mePudeMover=0,x=f->x,y=f->y;
    tapar(f->x,f->y);
    if(matriz[f->x-25][f->y-10]=='1')
    {
        gotoxy(x+3,y);
        color(7);
        printf(".");
    }
    if(matriz[f->x-29][f->y-10]=='1')
    {
        gotoxy(x-1,y);
        color(7);
        printf(".");
    }
    if(matriz[f->x-27][f->y-9]=='1')//imprime las pelotas cuando sube
    {
        if(f->y<38)
        {
            gotoxy(x+1,y+1);
            color(7);
            printf(".");
        }
    }
    if(matriz[f->x-27][f->y-11]=='1')//imprime las pelotas cuando baja
    {
        if(f->y>10)
        {
            gotoxy(x+1,y-1);
            color(7);
            printf(".");
        }
    }
    //--------------pelotas grandes--------------------
    if(matriz[f->x-25][f->y-10]=='2')
    {
        gotoxy(x+3,y);
        color(7);
        printf("%c",254);
    }
    if(matriz[f->x-29][f->y-10]=='2')
    {
        gotoxy(x-1,y);
        color(7);
        printf("%c",254);
    }
    if(matriz[f->x-27][f->y-9]=='2')//imprime las pelotas cuando sube
    {
        if(f->y<38)
        {
            gotoxy(x+1,y+1);
            color(7);
            printf("%c",254);
        }
    }
    if(matriz[f->x-27][f->y-11]=='2')//imprime las pelotas cuando baja
    {
        gotoxy(x+1,y-1);
        color(7);
        printf("%c",254);
    }

    switch(random)
    {
    case 1:
        mePudeMover=mover_Up_1(f,lab);
        if(mePudeMover==1)
            f->y--;
        else
            mePudeMover=0;
        break;
    case 2:
        mePudeMover=mover_Down_1(f,lab);
        if(mePudeMover==1)
            f->y++;
        else
            mePudeMover=0;
        break;
    case 3:
        mePudeMover=mover_Left_1(f,lab);
        if(mePudeMover==1)
            f->x--;
        if(mePudeMover==2)
            f->x+=63;
        if(mePudeMover==0)
            mePudeMover=0;
        break;
    case 4:
        mePudeMover=mover_Right_1(f,lab);
        if(mePudeMover==1)
            f->x++;
        if(mePudeMover==2)
            f->x-=63;
        if(mePudeMover==0)
            mePudeMover=0;
        break;
    }
    fantasmaPink(f->x,f->y);
    return mePudeMover;
}
void moverPacman_niv1(Ejes* p,Ejes* lab,int direccion)
{
    tapar(p->x,p->y);
    if(direccion==72)//Flecha Arriba
        if(mover_Up_1(p,lab)==1)
            p->y--;
    if(direccion==80)//Flecha Abajo
        if(mover_Down_1(p,lab)==1)
            p->y++;
    if(direccion==75)//Flecha Izquierda
    {
        if(mover_Left_1(p,lab)==1)
            p->x--;
        if(mover_Left_1(p,lab)==2)
            p->x+=63;
    }
    if(direccion==77)//Flecha Derecha
    {
        if(mover_Right_1(p,lab)==1)
            p->x++;
        if(mover_Right_1(p,lab)==2)
            p->x-=63;
    }
    pacman(p->x,p->y);
}
void cargarMatriz_1(char matriz[61][29])
{
    int x,y;
    for(y=0; y<29; y++)
        for(x=0; x<61; x++)
            matriz[x][y]='0';

    for(x=1; x<61; x+=2)
        if(x<28||x>31)
            matriz[x][0]='1';
    for(x=1; x<61; x+=2)
        if(x==1||x==13||x==27||x==33||x==47||x==59)
            matriz[x][1]='1';
    for(x=1; x<61; x+=2)
    {
        if(x==13||x==27||x==33||x==47)
            matriz[x][2]='1';
        if(x==1||x==59)
            matriz[x][2]='2';
    }
    for(x=1; x<61; x+=2)
        if(x==1||x==13||x==27||x==33||x==47||x==59)
            matriz[x][3]='1';
    for(x=1; x<61; x+=2)
        matriz[x][4]='1';
    for(x=1; x<61; x+=2)
        if(x==1||x==13||x==19||x==41||x==47||x==59)
            matriz[x][5]='1';
    for(x=1; x<61; x+=2)
        if(x==1||x==13||x==19||x==41||x==47||x==59)
            matriz[x][6]='1';
    for(x=1; x<61; x+=2)
        if((x>0&&x<14)||(x>18&&x<28)||(x>32&&x<42)||x>46)
            matriz[x][7]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==27||x==33||x==47)
            matriz[x][8]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==27||x==33||x==47)
            matriz[x][9]='1';
    for(x=1; x<61; x+=2)
        if(x==13||(x>18&&x<42)||x==47)
            matriz[x][10]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==19||x==41||x==47)
            matriz[x][11]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==19||x==41||x==47)
            matriz[x][12]='1';
    for(x=1; x<61; x+=2)
        if((x>12&&x<20)||(x>40&&x<48))
            matriz[x][13]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==19||x==41||x==47)
            matriz[x][14]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==19||x==41||x==47)
            matriz[x][15]='1';
    for(x=1; x<61; x+=2)
        if(x==13||(x>17&&x<28)||(x>32&&x<42)||x==47)
            matriz[x][16]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==19||x==41||x==47)
            matriz[x][17]='1';
    for(x=1; x<61; x+=2)
        if(x==13||x==19||x==41||x==47)
            matriz[x][18]='1';
    for(x=1; x<61; x+=2)
        if((x>0&&x<28)||(x>32&&x<60))
            matriz[x][19]='1';
    for(x=1; x<61; x+=2)
        if(x==1||x==13||x==27||x==33||x==47||x==59)
            matriz[x][20]='1';
    for(x=1; x<61; x+=2)
        if(x==1||x==13||x==27||x==33||x==47||x==59)
            matriz[x][21]='1';
    for(x=1; x<61; x+=2)
    {
        if((x>1&&x<8)||(x>12&&x<48)||(x>52&&x<58))
            matriz[x][22]='1';
        if(x==1||x==59)
            matriz[x][22]='2';
    }
    for(x=1; x<61; x+=2)
        if(x==7||x==13||x==19||x==41||x==47||x==53)
            matriz[x][23]='1';
    for(x=1; x<61; x+=2)
        if(x==7||x==13||x==19||x==41||x==47||x==53)
            matriz[x][24]='1';
    for(x=1; x<61; x+=2)
        if((x>0&&x<14)||(x>18&&x<28)||(x>32&&x<42)||x>46)
            matriz[x][25]='1';
    for(x=1; x<61; x+=2)
        if(x==1||x==27||x==33||x==59)
            matriz[x][26]='1';
    for(x=1; x<61; x+=2)
        if(x==1||x==27||x==33||x==59)
            matriz[x][27]='1';
    for(x=1; x<61; x+=2)
        matriz[x][28]='1';
}
int siMatrizVacia(char matriz[61][29])
{
    int rta=1,i,j;
    for(j=0; j<29; j++)
    {
        for(i=0; i<61; i++)
        {
            if(matriz[i][j]=='1'||matriz[i][j]=='2')
                rta=0;
        }
    }
    return rta;
}
int Nivel_1()
{
    pthread_t hiloStart;
    pthread_t hiloWaka;
    pthread_t hiloGameOver;
    pthread_create(&hiloStart, NULL, (void *)CancionStart,NULL);

    char cTecla=0;
    Ejes p,f,lab;
    Ejes* cordFantasma;
    Ejes* cordPacman;
    Ejes* cordLaberinto;
    cordFantasma=&f;
    cordPacman=&p;
    cordLaberinto=&lab;
    int xMatriz=61,yMatriz=29;
    char matriz[xMatriz][yMatriz];
    cargarMatriz_1(matriz);
    int puntaje=0;
    cordPacman->x=28;//x tiene que ser mayor a 1
    cordPacman->y=10;
    cordLaberinto->x=cordPacman->x-1;
    cordLaberinto->y=cordPacman->y-1;
    cordFantasma->x=cordPacman->x+29;
    cordFantasma->y=cordPacman->y+14;
    int salirDelCajon=0;
    system("cls");
    color(7);
    pelotasNivel_1(p.x,p.y,matriz);
    color(1);
    laberinto_1(lab.x,lab.y);
    cordPacman->x+=29;
    cordPacman->y+=16;
    pacman(p.x,p.y);
    int moverRandom=1+rand()%4;
    int meMovi=1;
    cuentaRegresiva(55,20,matriz);
    gotoxy(100,10);
    color(6);
    printf("PUNTAJE:");
    mostrarPuntaje(100,12,puntaje);
    while(cTecla!=27)
    {
        if(salirDelCajon==4)//despues que el fantasma sale del cajon se empieza a mover solo
        {
            if(meMovi==1||meMovi==2)//si la dirrecion a donde me quiero mover hay una pared
            {
                if(esEquina_niv1(f,lab)==1)
                    moverRandom=1+rand()%4;
                meMovi=moverFantasma_niv1(cordFantasma,cordLaberinto,moverRandom,matriz);
            }
            else
            {
                moverRandom=1+rand()%4;
                meMovi=moverFantasma_niv1(cordFantasma,cordLaberinto,moverRandom,matriz);
            }
        }
        else
        {
            meMovi=moverFantasma_niv1(cordFantasma,cordLaberinto,1,matriz);
            salirDelCajon++;
        }
        if(kbhit())
        {
            cTecla=getch();
            moverPacman_niv1(cordPacman,cordLaberinto,cTecla);
            //si en la posicion del pacman hay una pelota pos matriz=0
            if(matriz[p.x-26][p.y-10]=='1')
            {
                puntaje++;
                pthread_create(&hiloWaka, NULL,(void *)Waka,NULL);
                matriz[p.x-26][p.y-10]='0';
            }
            if(matriz[p.x-27][p.y-10]=='1')
            {
                puntaje++;
                pthread_create(&hiloWaka, NULL,(void *)Waka,NULL);
                matriz[p.x-27][p.y-10]='0';
            }
            if(matriz[p.x-28][p.y-10]=='1')
            {
                puntaje++;
                pthread_create(&hiloWaka, NULL, (void *)Waka,NULL);
                matriz[p.x-28][p.y-10]='0';
            }
            if(matriz[p.x-27][p.y-10]=='2')
            {
                puntaje+=2;
                matriz[p.x-27][p.y-10]='0';
            }
            if(matriz[p.x-26][p.y-10]=='2')
            {
                puntaje+=2;
                matriz[p.x-26][p.y-10]='0';
            }
            if(matriz[p.x-28][p.y-10]=='2')
            {
                puntaje+=2;
                matriz[p.x-28][p.y-10]='0';
            }
            mostrarPuntaje(100,12,puntaje);
        }
        //si la pos del fantasma es igual a la pos de pacman se corta  el while
        if(((cordPacman->x==cordFantasma->x)||(cordPacman->x+1==cordFantasma->x)||(cordPacman->x+2==cordFantasma->x)||(cordPacman->x==cordFantasma->x+1)||(cordPacman->x==cordFantasma->x+2))&&(cordPacman->y==cordFantasma->y))
        {
            color(7);
            Perdiste(29,20);
            pthread_create(&hiloGameOver, NULL, (void *) &GameOver,NULL);
            Sleep(1500);
            break;
        }
        //si agarrate todas las pelotas ganas y se corta el while
        if(siMatrizVacia(matriz)==1)
        {
            color(7);
            Ganaste(29,20);
            break;
        }
    }
    return puntaje;
}


