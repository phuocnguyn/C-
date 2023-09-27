#include <iostream>
#include "Number.h"
using namespace std;
int main()
{
    Number n1 (2.4);
    int x = int(n1);
    double y = double (n1);
    cout << x << ",  " << y << endl;
    return 0;
}