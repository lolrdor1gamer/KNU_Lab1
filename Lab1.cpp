#include <iostream>
#include "Circle.h"
using namespace std;

void First();

int main()
{
    First();
}


void First()
{
    float x, y, r;
    cout << "Wrote your x,y and radius" << endl;
    cin >> x >> y >> r;
    Circle c(x, y, r);

    Circle c1(c);
    cout << "Copied x:" << c1.m_x << endl << "Copied y:" << c1.m_y << endl << "Copied r:" << c1.m_r << endl << "Copied Square:" << c1.Square() << endl;
}



