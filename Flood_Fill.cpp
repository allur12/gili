#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void fillArea(int x, int y, int clr)
{
    int getColor = getpixel(x, y);
    if(getColor == clr || getColor == 15) return;
    putpixel(x, y, clr);
    fillArea(x + 1, y, clr);
    fillArea(x - 1, y, clr);
    fillArea(x, y + 1, clr);
    fillArea(x, y - 1, clr);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(200,  50, 100, 200);
    line(100, 200,  300, 200);
    line(200, 50, 300, 200);

     // any point color inside the triangle
     int x = 200, y = 100;
     fillArea(x, y, 6);

    getch();
    return 0;
}
