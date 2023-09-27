#include "QLSV.h"
#include "SV.h"
#include <iostream>
using namespace std;
QLSV::QLSV()
{
    this -> p = NULL;
    this -> n = 0;
}
QLSV: ~QLSV()
{
    delete [] this -> p;
}
ostream& operator<<(ostream& o , const QLSV& db)
{
    for (int i = 0; i < db.n; i++)
    {
        o << *(db.p + i);
    }
    return o;
    
}


SV& QLSV:: operator[](const int& index)
{
    static SV NGU;
    return (index >= 0 && index < this -> n)?*(this->p + index) : NGU;
}


void QLSV::Add(const SV& i )
{
    if(this -> n == 0)
    {
        this -> p = new SV[this -> n + 1];
        *(this -> p)  = i;
    }
    else
    {
        SV* temp = new SV [ this -> n];
        for (int i = 0; i < this->n; i++)
        {
            temp[i] = (*this)[i];
            // *(this -> p + i)
        }
        delete [] this -> p;
        this -> p = new SV [this -> n + 1];
        for (int i = 0; i < this->n; i++)
        {
            *(this -> p + i) = temp [i];
        }
        *(this->p + this-> n)= s;
        delete [] temp;
    }
    
        
    this->n++;
}



void QLSV::Insert(const SV& i, const int&k)
{
    
}



int QLSV::IndexOf(const SV&s )
{
    int index = -1;
    for (int i = 0; i < this -> n; i++)
    {
        if (*(this->p)[i] == s)
        {
            index = i;
            break;
        }
    }
    return index;
    
}



void QLSV::RemoveAt(const int& index)
{
    if(index >= 0 && index < this->n)
    {
        if(this->n==1)
        {
            this -> p = NULL;
        }
        else
        {
            SV* temp[this->n - 1];
            for (int i = 0; i < index-1; i++)
            {
                *(temp[i]) = *(this[i]);
            }
            
            for (int i = index; i < this->n-1; i++)
            {
                 *(temp[i]) = *(this[i+1]);
            }
            delete [] this -> p;
            this -> P = new SV[this -> n - 1]
            for (int i = 0; i < this -> n - 1; i ++)
            {
                *(this[i]) = *(temp[i]);
            }
            delete [] temp;
        }
    }
}



void QLSV::Remove(const SV& s)
{
    if(IndexOf(s) >= 0 && IndexOf(s) < this -> n)
    {
        RemoveAt(IndexOf(s));
    }
}
void QLSV::Update(const int&)
{

}