#include "point.h"

void point::show(){
    cout << this -> xVal << "," << this -> yVal << endl;
}
void point::TT(int x)
{
    this -> xVal += x;
    this -> yVal += x;
}
void point::SetxVal(int value){
     this->xVal = value;
}
int point::GetxVal(){
    return this->xVal;
}
point:: point( int x, int y )
{
    this->xVal = x;
    this -> yVal = y ;
}

point:: point (const point& p)
{
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}
point:: ~point()
{
    cout << " huy point (" << this -> xVal << "," << this -> yVal << ")" << endl;
}
TG:: TG(int xa, int ya, int xb, int yb, int xc, int yc)
: A(xa,ya), B(xb,yb), C(xc,yc)
{

}
TG::TG(const point& pa, const point& pb, const point& pc)
{
    this->A=pa;
    this->B=pb;
    this->C=pc;
}
TG::~TG(){}
void TG::show()
{
    this->A.show();
    this->B.show();
    this->C.show();
}
ostream& operator<< (ostream& o, point& p)
{
    o << p.xVal << ", " << p.yVal<< endl;
    return o;
}
istream& operator>> (istream& i , point& p)
{
    cout <<"xVal = ";
    i >> p.xVal;
    cout << "yVal = ";
    i >> p.yVal;
    return i;
}
bool point::operator== (const point& p)
{
    return (this->xVal == p.xVal && this->yVal == p.yVal);
}