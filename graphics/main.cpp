#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;
int t,x_1,y_1,x_2,y_2,xt1,yt1,xt2,yt2,x_3,y_3,x_4,y_4,xt3,xt4,yt3,yt4,depth;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(WHITE);
    cout<<"Enter coordinates, (top left, bottom right)";
    cin>>x_1>>y_1>>x_2>>y_2;
    cout<<"Enter angle in degrees: ";

    t=t*3.14/180;
    line(x_1,y_1,x_2,y_1);
    line(x_2,y_1,x_2,y_2);
    line(x_2,y_2,x_1,y_2);
    line(x_1,y_2,x_1,y_1);
    cin>>t;
    x_1=x_1*cos(t)-y_1*sin(t); y_1 = y_1*cos(t)+x_1*sin(t);
    x_2=x_2*cos(t)-y_2*sin(t); y_2 = y_2*cos(t)+x_2*sin(t);

    line(x_1,y_1,x_2,y_1);
    line(x_2,y_1,x_2,y_2);
    line(x_2,y_2,x_1,y_2);
    line(x_1,y_2,x_1,y_1);
    depth = 2;

    xt1 = x_1+depth;
    xt2 = x_2+depth;


    getch();
    closegraph();
}
