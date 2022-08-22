#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    int n;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2, x3, y3, theta;
    cout<< "Enter value of Line: \n\n";
    cout<< "x1 = ";
    cin>> x1;
    cout<< "y1 = ";
    cin>> y1;
    cout<< "x2 = ";
    cin>> x2;
    cout<< "y2 = ";
    cin>> y2;

    // initial Line
    line(x1, y1, x2, y2);

    cout<< "Rotation Angle: ";
    cin>> theta;


    // calculation
    x3 = x1 * cos(theta) - y1 * sin(theta);
    y3 = y1 * cos(theta) + x1 * sin(theta);

    line(x2, y2, x2-x3, y2-y3);

    getch();
    return 0;
}

