#include <allegro.h>
#include "inicia.h"
#include <iostream>

using namespace std;

int main ()
{   int imprimir=0;
    int time=0;
    inicia_allegro(800,530);

    install_mouse();


    BITMAP *buffer = create_bitmap(800,530);
    BITMAP *fondo1 = load_bitmap("FONDO1.bmp",NULL);
    BITMAP *fondo2 = load_bitmap("FONDO2.bmp",NULL);
    BITMAP *fondo3 = load_bitmap("FONDO3.bmp",NULL);
    BITMAP *fondo4 = load_bitmap("FONDO4.bmp",NULL);
    BITMAP *fondo5 = load_bitmap("FONDO5.bmp",NULL);
    BITMAP *fondo6 = load_bitmap("FONDO6.bmp",NULL);
    BITMAP *fondo7 = load_bitmap("FONDO7.bmp",NULL);
    BITMAP *fondo8 = load_bitmap("FONDO8.bmp",NULL);
    BITMAP *fondo9 = load_bitmap("FONDO01.bmp",NULL);
    BITMAP *cursor = load_bitmap("cursor.bmp",NULL);

    bool salida = false;

    while (!key[KEY_ESC] &&  !salida){
        if (time>500) time=0;
        blit(fondo1,buffer,0,0,0,0,800,530);
        if (time<300){blit(fondo2,buffer,0,0,0,0,800,530);}time++;
        if (key[KEY_ENTER]){imprimir=5;}
        if(imprimir==5){blit(fondo3,buffer,0,0,0,0,800,530);

        if(mouse_x > 12 && mouse_x <64 &&
           mouse_y > 28 && mouse_y < 474 ){
                blit(fondo4,buffer,0,0,0,0,800,530);}             //1 izquierdo, 2 derecho //

        else if(mouse_x > 257 && mouse_x <308 &&
           mouse_y > 121 && mouse_y < 487 ){
                blit(fondo5,buffer,0,0,0,0,800,530);}

        else if(mouse_x > 407 && mouse_x <452 &&
           mouse_y > 12 && mouse_y < 501 ){
                blit(fondo6,buffer,0,0,0,0,800,530);}

        else if(mouse_x > 526 && mouse_x <606 &&
           mouse_y > 166 && mouse_y < 525 ){
                blit(fondo7,buffer,0,0,0,0,800,530);}

        else if(mouse_x > 738 && mouse_x <778 &&
           mouse_y > 70 && mouse_y < 483 ){
                blit(fondo8,buffer,0,0,0,0,800,530);
                if (mouse_b & 1) {
                    salida = true;}}}

        masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,13,22);
        blit(buffer,screen,0,0,0,0,800,530);
    }

    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN ()


