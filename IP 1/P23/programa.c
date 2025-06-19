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
#include"simplecontroller.h"

#define GRAVEDAD 1
#define JX 14
#define JY 27
#define BTN 26
#define VIB 15

int main()
{
    int tecla, x=-100, y=100, rx=100, ry=100, rw=50, rh=50, aceleracion = 0;
    bool ti = false, td = false;
    float jx, jy;
    bool btn;
    int temp = 1, tempy = 1;
    ventana.tamanioVentana(800, 600);
    ventana.tituloVentana("Chapulines");

    Imagen *chapulin = ventana.creaImagenConMascara("chapulin.bmp", "chapulinM.bmp");

    Board *control = connectDevice("COM7", B115200);

    control->pinMode(control, JX, INPUT);
    control->pinMode(control, JY, INPUT);
    control->pinMode(control, BTN, INPUT_PULLUP);
    control->pinMode(control, VIB, OUTPUT);
    
    rw = ventana.anchoImagen(chapulin);
    rh = ventana.altoImagen(chapulin);
    ventana.colorFondo(COLORES.VERDE);


    tecla = ventana.teclaPresionada();
    while(tecla != TECLAS.ESCAPE) {
        aceleracion += GRAVEDAD;
        ry += aceleracion;

        

        if (x > ventana.anchoVentana()) {
            temp = -1;
        } 

        if( x < 0) {
            temp = 1;
        }

        if (y > ventana.altoVentana()) {
            tempy = -1;
        } 

        if( y < 0) {
            tempy = 1;
        }

        x+=temp;
        y+=tempy;

        jx = control->analogRead(control, JX);
        jy = control->analogRead(control, JY);
        btn = control->digitalRead(control, BTN);

        // CALIBRACION
        float ajusteX = 0.6f;
        float ajusteY = 0.6f;
        float maxX = 1.0f - ajusteX;
        float maxY = 1.0f - ajusteY;
        int tx, ty;

        jx -= ajusteX;
        jy -= ajusteY;

        if(jx >= 0) {
            tx = (int)((jx * 10.0f) / maxX);
        } else {
            tx = (int)((jx * 10.0f) / ajusteX);
        }

        if(jy >= 0) {
            ty = (int)((jy * 10.0f) / maxY);
        } else {
            ty = (int)((jy * 10.0f) / ajusteY);
        }

        rx += tx;
        //y += ty;
        if(!btn) {
            aceleracion = -20;
            control->digitalWrite(control, VIB, true);
        } else {
            control->digitalWrite(control, VIB, false);
        }

        //ventana.imprimeEnConsola("%05.3f - %05.3f - %i - %i - %i\n", jx, jy, btn, tx, ty);
        


        tecla = ventana.teclaPresionada();

        if(ry + rh > ventana.altoVentana()) ry = ventana.altoVentana() - rh;

        if(tecla == TECLAS.DERECHA) td = true;
        if(tecla == TECLAS.IZQUIERDA) ti = true;
        if(tecla == TECLAS.ESPACIO) aceleracion = -30;
        if(td) rx += 10;
        if(ti) rx -= 10;

        if(rx <= 0) rx = 0;
        if(rx + rw >= ventana.anchoVentana()) rx = ventana.anchoVentana() - rw;

        //ventana.raton(&x, &y);
        

        ventana.limpiaVentana();

        ventana.color(COLORES.NEGRO);
        ventana.texto(rx,ry - 20, "Oz");
        //ventana.texto1(50,500, "Holi Canoli", 50, "Gabriola");
        //ventana.texto2(50,400, "Chapulines", 50, "Ink Free", true, true, true);

        //ventana.rectanguloRelleno(rx,ry, rx+rw,ry+rh);

        //ventana.muestraImagenEscalada(rx, ry, 50, 50, chapulin);

        ventana.circulo(x,y, 30);
        ventana.circuloRelleno(x,y, 20);

        ventana.muestraImagen(rx, ry, chapulin);
        

        int taux = ventana.teclaSoltada();
        if(taux == TECLAS.DERECHA) td = false;
        if(taux == TECLAS.IZQUIERDA) ti = false;

        ventana.actualizaVentana();
        ventana.espera(1);
    }

    ventana.cierraVentana();
    return 0;
}
