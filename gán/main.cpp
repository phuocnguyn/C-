#include <iostream>
#include "point.h"
using namespace std;
int main()
{
    point p1(1,2);
    point p2 (p1);
    point p3 = p1;
    point p4;
    p4 = p1;
    return 0;
}