#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2, color = 15;
    cout<< "Enter x1 = ";
    cin>> x1;
    cout<< "Enter y1 = ";
    cin>> y1;
    cout<< "Enter x2 = ";
    cin>> x2;
    cout<< "Enter y2 = ";
    cin>> y2;

    int dx, dy,  p, x, y;
    dx = x2 - x1;
    dy = y2 -y1;
    p = 2 * dy - dx;
    x = x1;
    y = y1;

    for(int i = 0; i <=dx; i++)
    {
        if(p < 0)
        {
            putpixel(x, y, color);
            p += 2*dy;
            x += 1;
        } else
        {
            putpixel(x, y, color);
            p += 2*dy - 2*dx;
            x += 1;
            y += 1;
        }
    }

    getch();
    return 0;
}
