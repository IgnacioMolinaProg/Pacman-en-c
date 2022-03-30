#ifndef NIVELES_H_INCLUDED
#define NIVELES_H_INCLUDED
typedef struct
{
    int x;
    int y;
}Ejes;
///MUSICA
void CancionStart();
void Waka();
void GameOver();
void Sirena();
///MOVIMIENTOS
int mover_Up_1(Ejes* direc,Ejes* lab);
int mover_Down_1(Ejes* direc,Ejes* lab);
int mover_Left_1(Ejes* direc,Ejes* lab);
int mover_Right_1(Ejes* direc,Ejes* lab);
int esEquina_niv1(Ejes direc,Ejes laberinto);
int moverFantasma_niv1(Ejes* f,Ejes* lab,int random,char matriz[61][29]);
void moverPacman_niv1(Ejes* p,Ejes* lab,int direccion);
///MATRIZ
void cargarMatriz_1(char matriz[61][29]);
int siMatrizVacia(char matriz[61][29]);
///NIVELES
int Nivel_1();


#endif // NIVELES_H_INCLUDED
