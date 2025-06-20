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
#include "simplecontroller.h"
#define GRAVEDAD 1
#define JX 14
#define JY 27
#define BTN 26
#define MTR 12

int main()
{
    int t, x =10 ,y =100, rx = 20, ry = 20, rw = 100, rh = 100;
    int aceleracion = 0;
    bool ti = false, td = false, fs = false;
    float jx, jy;
    bool btn;
    int incX = 1, incY = 1;

    Imagen *minion = ventana.creaImagenConMascara("minion.bmp", "minionm.bmp");

    Board *control = connectDevice("COM7", B115200);

    control->pinMode(control, JX, INPUT);
    control->pinMode(control, JY, INPUT);
    control->pinMode(control, BTN, INPUT_PULLUP);
    control->pinMode(control, MTR, OUTPUT);

    ventana.tamanioVentana(800, 600);
    ventana.tituloVentana("Emmanuel");

    rw = ventana.anchoImagen(minion);
    rh = ventana.altoImagen(minion);

    t = ventana.teclaPresionada();
    ventana.colorFondo(COLORES.CYAN);

    while(t != TECLAS.ESCAPE) {

        x+=incX;
        y+=incY;
        if(x > ventana.anchoVentana()) incX = -1;
        if(y > ventana.altoVentana()) incY = -1;
        if( x < 0) incX = 1;
        if(y < 0) incY = 1;



        jx = control->analogRead(control, JX);
        jy = control->analogRead(control, JY);
        btn = control->digitalRead(control, BTN);

        float ajusteX = 0.5f;
        float ajusteY = 0.5f;

        float maxX = 1.0 - ajusteX;
        float maxY = 1.0 - ajusteY;

        int tx;
        int ty;

        jx -= ajusteX;
        jy -= ajusteY;

        if(jx >= 0) {
            tx = (int)((jx * 20.0f) / maxX);
        } else {
            tx = (int)((jx * 20.0f) / ajusteX);
        }

        if(jy >= 0) {
            ty = (int)((jy * 20.0f) / maxY);
        } else {
            ty = (int)((jy * 20.0f) / ajusteY);
        }

        //x += tx;
        //y += ty;

        rx += tx;

        if(!btn) {
            aceleracion = -20;
            control->digitalWrite(control, MTR, true);
        } else {
            control->digitalWrite(control, MTR, false);
        }

        //ventana.imprimeEnConsola("%f - %f - %i - %i - %i\n", jx, jy, btn, tx, ty);



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
        //ventana.raton(&x, &y);


        ventana.limpiaVentana();
        ventana.circulo(x,y, 20);
        ventana.circuloRelleno(x,y, 15);




        ventana.muestraImagen(rx,ry, minion);


        ventana.color(COLORES.NEGRO);
        ventana.texto2(10,10, "Holi",50, "Candara", true, true, true);

        ventana.actualizaVentana();
        
        //ventana.imprimeEnConsola("Holi %i\n", 6);
        
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
