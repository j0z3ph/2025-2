/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include"graficos.h"
#define GRAVEDAD 1

int main()
{
    int tecla, x, y, rx=100, ry=100, rw=50, rh=50, aceleracion = 0;
    bool ti = false, td = false;
    ventana.tamanioVentana(800, 600);
    ventana.tituloVentana("Chapulines");

    Imagen *chapulin = ventana.creaImagenConMascara("chapulin.bmp", "chapulinM.bmp");

    rw = ventana.anchoImagen(chapulin);
    rh = ventana.altoImagen(chapulin);
    ventana.colorFondo(COLORES.VERDE);


    tecla = ventana.teclaPresionada();
    while(tecla != TECLAS.ESCAPE) {
        aceleracion += GRAVEDAD;
        ry += aceleracion;

        tecla = ventana.teclaPresionada();

        if(ry + rh > ventana.altoVentana()) ry = ventana.altoVentana() - rh;

        if(tecla == TECLAS.DERECHA) td = true;
        if(tecla == TECLAS.IZQUIERDA) ti = true;
        if(tecla == TECLAS.ESPACIO) aceleracion = -30;
        if(td) rx += 10;
        if(ti) rx -= 10;

        if(rx <= 0) rx = 0;
        if(rx + rw >= ventana.anchoVentana()) rx = ventana.anchoVentana() - rw;

        ventana.raton(&x, &y);
        

        ventana.limpiaVentana();

        ventana.color(COLORES.NEGRO);
        ventana.texto(rx,ry - 20, "Oz");
        //ventana.texto1(50,500, "Holi Canoli", 50, "Gabriola");
        //ventana.texto2(50,400, "Chapulines", 50, "Ink Free", true, true, true);

        //ventana.rectanguloRelleno(rx,ry, rx+rw,ry+rh);

        ventana.muestraImagen(rx, ry, chapulin);
        //ventana.muestraImagenEscalada(rx, ry, 50, 50, chapulin);

        ventana.circulo(x,y, 30);
        ventana.circuloRelleno(x,y, 20);


        int taux = ventana.teclaSoltada();
        if(taux == TECLAS.DERECHA) td = false;
        if(taux == TECLAS.IZQUIERDA) ti = false;

        ventana.actualizaVentana();
        ventana.espera(1);
    }

    ventana.cierraVentana();
    return 0;
}
