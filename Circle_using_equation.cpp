#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int r, x = 0, y, color = 15;
    cout<< "Enter Radius = ";
    cin>> r;

    // for displaying circle in positive portion
    int xc = 200, yc = 230;

    y = r;
    while(x < r/sqrt(2))
    {
        putpixel(xc + x, yc + y, color);
        putpixel(xc - x, yc+ y, color);
        putpixel(xc + x, yc - y, color);
        putpixel(xc - x, yc- y, color);
        putpixel(xc + y, yc + x, color);
        putpixel(xc - y, yc + x, color);
        putpixel(xc + y, yc - x, color);
        putpixel(xc - y, yc - x, color);

        x += 1;
        y = sqrt((r*r - x*x));
    }

    getch();
    return 0;
}
