#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    int n;
    initgraph(&gd, &gm, "");

    // declare two points
    int x1, y1, x2, y2, color = 15;
    cout<< "Enter x1 = ";
    cin>> x1;
    cout<< "Enter y1 = ";
    cin>> y1;
    cout<< "Enter x2 = ";
    cin>> x2;
    cout<< "Enter y2 = ";
    cin>> y2;

    float dx, dy, step;

    dx = x2 - x1;
    dy = y2 - y1;

    if(abs(dx) >= abs(dy))
    {
        step = abs(dx);
    }
    else
    {
        step = abs(dy);
    }

    float x, y;
    float xinc, yinc;

    x = x1;
    y = y1;
    xinc = dx/step;
    yinc = dy/step;

    putpixel(x, y, color);
    for(int i = 1; i < step; i++)
    {
        x += xinc;
        y += yinc;
        putpixel(round(x), round(y), color);
        cout<< "\n" << round(x) << " " << round(y);
    }
    cin>> n;
    return 0;
}
