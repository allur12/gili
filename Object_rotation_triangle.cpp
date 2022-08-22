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
    cout<< "x3 = ";
    cin>> x3;
    cout<< "y3 = ";
    cin>> y3;


    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);

    cout<< "Enter rotating angle: ";
    cin>> theta;


    int newX1 = abs(x1*cos(theta) - y1*sin(theta));
    int newY1 = abs(x1*sin(theta) + y1*cos(theta));
    int newX2 = abs(x2*cos(theta) - y2*sin(theta));
    int newY2 = abs(x2*sin(theta) + y2*cos(theta));
    int newX3 = abs(x3*cos(theta) - y3*sin(theta));
    int newY3 = abs(x3*sin(theta) + y3*cos(theta));

    cleardevice();

    line(newX1, newY1, newX2, newY2);
    line(newX2, newY2, newX3, newY3);
    line(newX1, newY1, newX3, newY3);

    getch();
    return 0;
}

