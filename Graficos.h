#ifndef GRAFICOS_H_INCLUDED
#define GRAFICOS_H_INCLUDED

///PACMAN
void pacman(int x,int y);
void tapar(int x,int y);
void pacmanGrande(int x,int y);
void taparPacmanGrande(int x,int y);
void pelotaGrande(int x,int y);
void loading(int x,int y);
///FANTASMAS
void fantasmaPink(int x,int y);
void fantasmaBlue(int x,int y);
void fantasmaRed(int x,int y);
void fantasmaCeleste(int x,int y);
void fantasmaGreen(int x,int y);
///LINEAS LABERINTO
void esqUpLeft(int x,int y);//esquina arriba a la izquierda
void esqDownLeft(int x,int y);//esquina abajo a la izquierda
void esqDownRight(int x,int y);//esquina abajo a la derecha
void esqUpRight(int x,int y);//esquina arriba a la derecha
void linHori(int x,int y);//linea horizontal
void linVert(int x,int y);//linea vertical
void esqT_Up(int x,int y);//esquina en T arriba
void esqT_Down(int x,int y);//esquina en T abajo
void esqT_Left(int x,int y);//esquina en T izquierda
void esqT_Right(int x,int y);//esquina en T derecha
void esqCruz(int x,int y);//esquina en cruz
void cubo(int x,int y,int ancho,int alto);//el ancho y el alto tiene que ser mayor a 2
void cuboFino(int x,int y,int ancho,int alto);//el ancho y el alto tiene que ser mayor a 2
///PELOTAS
void pelotasNivel_1(int x,int y,char matriz[61][29]);
///LABERINTOS
void laberinto_1(int x,int y);
///LETRAS
void letra_G(int x,int y);
void letra_A(int x,int y);
void letra_N(int x,int y);
void letra_S(int x,int y);
void letra_T(int x,int y);
void letra_E(int x,int y);
void letra_P(int x,int y);
void letra_R(int x,int y);
void letra_D(int x,int y);
void letra_I(int x,int y);
void letra_C(int x,int y);
void letra_M(int x,int y);
///CARTELES
void Ganaste(int x,int y);
void Perdiste(int x,int y);
void Portadapacman(int x,int y);
///NUMEROS
void numero_0(int x,int y);
void numero_1(int x,int y);
void numero_2(int x,int y);
void numero_3(int x,int y);
void numero_4(int x,int y);
void numero_5(int x,int y);
void numero_6(int x,int y);
void numero_7(int x,int y);
void numero_8(int x,int y);
void numero_9(int x,int y);
void taparNumero(int x,int y);
///PUNTAJE
void mostrarPuntaje(int x,int y,int puntaje);
void cuentaRegresiva(int x,int y,char matriz[61][29]);

#endif // GRAFICOS_H_INCLUDED
