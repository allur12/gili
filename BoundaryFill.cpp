#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

void boundaryFill(int x, int y, int fill_color, int boundary_color)
{
    int color = getpixel(x, y);
    delay(.7);
    if (color != boundary_color && color != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill(x + 1, y, fill_color, boundary_color);
        boundaryFill(x, y + 1, fill_color, boundary_color);
        boundaryFill(x - 1, y, fill_color, boundary_color);
        boundaryFill(x, y - 1, fill_color, boundary_color);
    }
}

int main()
{
    int gDriver = DETECT;
    int gMode;
    initgraph(&gDriver, &gMode, "C:\\TC\\BGI");

    int boundary_color = WHITE;
    int fill_color = BLUE;
    int x = 200, y = 200, r = 100;

    setcolor(boundary_color);
    circle(x, y, r);

    boundaryFill(x, y, fill_color, boundary_color);

    getch();
    closegraph();
    return 0;
}
