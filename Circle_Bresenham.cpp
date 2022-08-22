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

    int x = 0, y = r, d = 3 - 2 * r;

    plotCircle(x, y);
    while( x <= y)
    {
        if(d < 0)
        {
            d = d + 4 * x + 6;
        }
        else
        {
            d = d + 4 * (x - y) + 10;
            y--;
        }
        x++;

        plotCircle(x, y);
    }

    getch();
    return 0;
}
