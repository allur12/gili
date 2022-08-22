#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void plotCircle(int x, int y)
{
    // for displaying circle in positive portion
    int xc = 110, yc = 130, color = 15;

    putpixel(xc + x, yc + y, color);
    putpixel(xc - x, yc+ y, color);
    putpixel(xc + x, yc - y, color);
    putpixel(xc - x, yc- y, color);
    putpixel(xc + y, yc + x, color);
    putpixel(xc - y, yc + x, color);
    putpixel(xc + y, yc - x, color);
    putpixel(xc - y, yc - x, color);

}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int  r,  color = 15;
    cout<< "Enter Radius = ";
    cin>> r;

    int x = 0, y = r, p = 1 - r;

    plotCircle(x, y);
    while( x <= y)
    {
        if(p < 0)
        {
            p = p + 2 * x + 3;
        }
        else
        {
            p = p + 2 * (x - y) + 5;
            y--;
        }
        x++;

        plotCircle(x, y);
    }

    getch();
    return 0;
}

