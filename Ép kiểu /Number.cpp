#include "Number.h"
Number::Number (double d)
    :d(d)
{

}
Number:: ~Number()
{

}
ostream& operator<<(ostream& o, const Number& n)
{
    o << "number = " << n.d << endl;
    return o;
}
Number :: operator int()
{
    return int(this->d);
}
Number:: operator double()
{
    return this->d;
}