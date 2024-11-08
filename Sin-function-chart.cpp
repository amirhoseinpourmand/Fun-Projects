#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

const int ScreenWidth{800}, ScreenHeight{600};

int main(){
    initwindow(ScreenWidth, ScreenHeight);
    float a;
    moveto(0, 320);
    for(a=0; a<360; a+=1)
        lineto(a, 320-sin(a*3.14/180)*100);
    getch();
    return 0;
}
