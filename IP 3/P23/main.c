/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ultima biblioteca
 * @version 0.1
 * @date 2025-06-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include"graficos.h"
#define GRAVEDAD 1

int main()
{
    int tecla;
    int x, y;
    bool ti = false, td = false;
    int aceleracion = 0;
    int rx = 100, ry = 100, rw = 50, rh = 50;
    Imagen *imagen = ventana.creaImagen("imagen.bmp");

    rw = ventana.anchoImagen(imagen);
    rh = ventana.altoImagen(imagen);

    ventana.tamanioVentana(800, 600);
    ventana.tituloVentana("Mi primer ventana");

    
    ventana.colorFondo(COLORES.AZUL);

    tecla = ventana.teclaPresionada();

    while( tecla != TECLAS.ESCAPE) {
        tecla = ventana.teclaPresionada();
        
        aceleracion += GRAVEDAD;
        ry += aceleracion;

        
        if(tecla == TECLAS.ESPACIO) {
            aceleracion = -20;
        }
        if(tecla == TECLAS.DERECHA) {
            td = true;
        }
        if(tecla == TECLAS.IZQUIERDA) {
            ti = true;
        }

        if(ti) rx -= 10;
        if(td) rx += 10;

        // Piso
        if(ry + rh > ventana.altoVentana()) ry = ventana.altoVentana() - rh;

        // Bardas
        if(rx <= 0) rx = 0;
        if(rx + rw >= ventana.anchoVentana()) rx = ventana.anchoVentana() - rw;


        ventana.raton(&x, &y);
        //ventana.color(COLORES.NEGRO);


        ventana.limpiaVentana();

        ventana.colorRGB(255,255,255);
        ventana.texto(100,50, "HOLA");

        //ventana.rectanguloRelleno(rx,ry, rx + rw, ry + rh);

        ventana.muestraImagen(rx, ry, imagen);
        //ventana.muestraImagenEscalada(rx, ry, rw, rh, imagen);
        ventana.circuloRelleno(x,y, 10);


        tecla = ventana.teclaSoltada();
        if(tecla == TECLAS.DERECHA) {
            td = false;
        }
        if(tecla == TECLAS.IZQUIERDA) {
            ti = false;
        }

        ventana.actualizaVentana();
        ventana.espera(1);
    }

    ventana.eliminaImagen(imagen);
    ventana.cierraVentana();
    return 0;
}
