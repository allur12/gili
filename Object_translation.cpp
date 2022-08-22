#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x, y, r, tx, ty;
    cout<< "Enter value of Circle: \n\n";
    cout<< "x = ";
    cin>> x;
    cout<< "y = ";
    cin>> y;
    cout<< "radius: ";
    cin>> r;

    // initial circle
    circle(x, y, r);

    cout<< "Enter translation value of tx: ";
    cin>> tx;
    cout<< "Enter translation value of ty: ";
    cin>> ty;

    int newX, newY;

    // new circle after translation
    for(int i = 0, j = 0; i <= tx, j <= ty; i++, j++)
    {
        newX = x + i;
        newY = y + j;
        circle(newX, newY, r);
        delay(50);
        cleardevice();
    }
    circle(newX, newY, r);

    getch();
    return 0;
}

