#include <graphics.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");

    int personagem_x = 100;
    int personagem_y = 100;
    int cont = 0;
    
    // Enquanto nenhuma tecla for pressionada, continua loop
	while (!kbhit()) {
        // Limpa tela
        cleardevice();

        // Renderiza imagem
        readimagefile("guerreiro.png", 0, 0, 64, 64);
        writeimagefile("guerreiro.png", 64,64,124,124);

        // Imprime texto
        outtextxy(20,250, "Teste Teste");

        // Desenha circulo
        circle(200,200+cont,100);

        // Frame rate
        delay(17);
        cont++;
    }
    
    closegraph();
}