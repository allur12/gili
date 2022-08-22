
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x, y, r, sx, sy;
    cout<< "Enter value of Circle: \n\n";
    cout<< "x = ";
    cin>> x;
    cout<< "y = ";
    cin>> y;
    cout<< "radius: ";
    cin>> r;

    // initial circle
    circle(x, y, r);

    cout<< "Enter Scaling value of x: ";
    cin>> sx;
    cout<< "Enter Scaling value of y: ";
    cin>> sy;

    int newX, newY, newR;

    // new circle after Scaling
    newX = x * sx;
    newY = y * sy;
    newR = sqrt((x*x + y*y));
    circle(100+newX, 100+newY, newR);

    getch();
    return 0;
}

