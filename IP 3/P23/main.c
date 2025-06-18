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
#include"simplecontroller.h"

#define GRAVEDAD 1

#define JX 14
#define JY 27
#define BTN 26

int main() 
{
    int tecla;
    int x=0, y=10;
    bool ti = false, td = false;
    float jx, jy;
    bool btn;

    int aceleracion = 0;
    int rx = 100, ry = 100, rw = 50, rh = 50;
    Imagen *imagen = ventana.creaImagenConMascara("imagen.bmp", "imagenM.bmp");
    Board *control = connectDevice("COM7", B115200);

    control->pinMode(control, JX, INPUT);
    control->pinMode(control, JY, INPUT);
    control->pinMode(control, BTN, INPUT_PULLUP);

    rw = ventana.anchoImagen(imagen);
    rh = ventana.altoImagen(imagen);

    ventana.tamanioVentana(800, 600);
    ventana.tituloVentana("Mi primer ventana");

    
    ventana.colorFondo(COLORES.AZUL);

    tecla = ventana.teclaPresionada();

    while( tecla != TECLAS.ESCAPE) {
        tecla = ventana.teclaPresionada();

        x++;

        jx = control->analogRead(control, JX);
        jy = control->analogRead(control, JY);
        btn = control->digitalRead(control, BTN);

        float ajusteX = 0.7f;
        float ajusteY = 0.7f;

        float maxX = 1.0f - ajusteX;
        float maxY = 1.0f - ajusteY;
        
        int tx, ty;
        

        jx -= ajusteX;
        
        jy -= ajusteY;

        if(jx >= 0) {
            tx = (int)((jx * 10.0f)/ maxX);
        } else {
            tx = (int)((jx * 10.0f) / ajusteX);
        }

        if(jy >= 0) {
            ty = (int)((jy * 10.0f)/ maxY);
        } else {
            ty = (int)((jy * 10.0f) / ajusteY);
        }

        //x += tx;
        //y += ty;
        rx += tx;
        if(!btn) {
            aceleracion = -20;
        }

        ventana.imprimeEnConsola("%f, %f, %i, %i, %i\n", jx, jy, btn, tx, ty);

        
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


        //ventana.raton(&x, &y);
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
