#include <iostream>
#include "Matrix.h"
using namespace std;
int main()
{
    Matrix m1(3,4,1);
    m1(0,0) = 9;
    m1.Show();
    return 0;
}
   