#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // declare two points
    int x1, y1, x2, y2;
    cout<< "Enter x1 = ";
    cin>> x1;
    cout<< "Enter y1 = ";
    cin>> y1;
    cout<< "Enter x2 = ";
    cin>> x2;
    cout<< "Enter y2 = ";
    cin>> y2;

    int dx, dy, m, b;

    dx = x2 - x1;
    dy = y2 - y1;
    m = dy/dx;
    b = y1 - m * x1;

    int x, y, xend, color = 15;

    if(dx < 0)
    {
        x = x2;
        y = y2;
        xend = x1;
    } else
    {
        x = x1;
        x = y1;
        xend = x2;
    }

    putpixel(x, y, color);
    while(x != xend)
    {
        x += 1;
        y = m * x + b;
        putpixel(x, y, color);
    }

    getch();
    return 0;
}
