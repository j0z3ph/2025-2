/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include"graficos.h"
#include<stdio.h>
#define GRAVEDAD 1

int main()
{
    int t, x ,y, rx = 20, ry = 20, rw = 100, rh = 100;
    int aceleracion = 0;
    bool ti = false, td = false, fs = false;

    Imagen *minion = ventana.creaImagenConMascara("minion.bmp", "minionm.bmp");
    ventana.tamanioVentana(800, 600);
    ventana.tituloVentana("Emmanuel");

    rw = ventana.anchoImagen(minion);
    rh = ventana.altoImagen(minion);

    t = ventana.teclaPresionada();
    ventana.colorFondo(COLORES.CYAN);

    while(t != TECLAS.ESCAPE) {
        t = ventana.teclaPresionada();
        aceleracion += GRAVEDAD;
        ry += aceleracion;
        ventana.pantallaCompleta(fs);

        if(td) {
            rx += 10;
        }
        if (ti) {
            rx -= 10;
        }

        if(ry + rh > ventana.altoVentana()) ry = ventana.altoVentana() - rh;

        if(t == TECLAS.ESPACIO) {
            aceleracion = -25;
        }
        if(rx <=0 ) rx = 0;
        if(rx + rw > ventana.anchoVentana()) rx = ventana.anchoVentana() - rw;

        if(t == TECLAS.DERECHA) {
            td = true;
        }
        
        if(t == TECLAS.IZQUIERDA) {
            ti = true;
        }

        if(t == TECLAS.ENTER) {
            fs = !fs;
        }

        


        

        ventana.raton(&x, &y);


        ventana.limpiaVentana();
        ventana.circulo(x,y, 20);
        ventana.circuloRelleno(x,y, 15);




        ventana.muestraImagen(rx,ry, minion);


        ventana.color(COLORES.NEGRO);
        ventana.texto2(10,10, "Holi",50, "Candara", true, true, true);

        ventana.actualizaVentana();
        
        ventana.imprimeEnConsola("Holi %i\n", 6);
        
        int nt = ventana.teclaSoltada();
        if(nt == TECLAS.DERECHA) {
            td = false;
        }
        if(nt == TECLAS.IZQUIERDA) {
            ti = false;
        }
        
        
        ventana.espera(1);
    }


    ventana.cierraVentana();
    
    return 0;
}
