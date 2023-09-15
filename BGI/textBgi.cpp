#include <graphics.h>

int main()
{
    int graphicsDriver=DETECT,graphicsMode;
    initgraph(&graphicsDriver,&graphicsMode,"");
    circle(200,200,100);
    getch();
}
