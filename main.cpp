#include <iostream>
#include "point.h"
using namespace std;
int main()
{
    point p1(5,7);
    point p2;
    p2.SetxVal(p1.GetxVal());
    point p3(1,2);
    ChangePoint(p1);
    p1.show();
    p2.show();
    p3.show();
    TG t1(p1,p2,p3);
    TG t2(9,8,7,6,5,4);
    t1.show();
    t2.show();
    return 0;
    point p4 = operator+(p1,p2);
    p4.show();
    p1==p3?cout << "true" : cout << "false";
    
}