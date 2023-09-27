#include "SV.h"
#include <iostream>
using namespace std;
SV:: SV(int  m, bool  n, double  p)
   : MSSV(m), gender(n), DTB (p)
{
    // this->MSSV = m;
    // this->gender = m;
    // this->DTB = p;
}
SV:: ~SV()
{

}
bool SV::operator==(const SV& s)
{
    return (this->MSSV == s.MSSV);
}






ostream& operator<<(ostream& o , const SV& s)
{
    o << s.MSSV << ", " << s.gender << ", "<< s.DTB << endl;
    return o;
}
istream& operator>>(istream& i , SV& s){
    cout <<"MSSV = ";
    i >> s.MSSV;
    cout << "Gender = ";
    i >> s.gender;
    cout << "DTB = ";
    i >> s.DTB;
    return i;
}