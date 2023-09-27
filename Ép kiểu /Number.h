#include <iostream>
using namespace std;
class Number
{
private:
    double d;
public:
 Number(double = 0.0);
 ~Number();
 friend ostream& operator<<(ostream& , const Number&);
 operator int();
 operator double();
};
