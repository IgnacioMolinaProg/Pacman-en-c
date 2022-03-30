#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <pthread.h>
#include "gotoxy.h"
#include "Graficos.h"
#include "Niveles.h"
#include "Usuarios.h"
#include "Listas.h"
#include "Menus.h"

void AltEnter()//pantalla completa
{
    keybd_event(VK_MENU,0x38,0,0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
    return;
}
void AltF4()//cerrar consola
{
    keybd_event(VK_MENU,0x38,0,0);
    keybd_event(VK_F4,0x73,0,0);
    keybd_event(VK_F4,0x73,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

int main()
{
    AltEnter();
    system("cls");
    Portadapacman(40,15);
    loading(50,30);
    menuPrincipal();
    AltF4();
    return 0;
}
