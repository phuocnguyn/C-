#include <iostream>
#include "Matrix.h"
using namespace std;
Matrix::Matrix(int r, int c, int value)
    : row (r), col(c)
{
    this->data = new int*[this->row];
    for (int i = 0; i < this->row; i++)
    {
        *(this->data+i)= new int[this->col];
        for (int j = 0; j < this->col; i++)
        {
            *(*(this->data + i) + j) = value;
        }
        
    }
    
}

Matrix::~Matrix()
{
    for (int i = 0; i < this->row; i++)
    {
        delete[] *(this -> data + i);
    }
    delete[] this->data;
}

void Matrix::Show()
{
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col ; j++)
        {
            cout << (*this)(i, j) << " ";
        }
        cout << endl;
    }
    
}
ostream& operator<<(ostream& o, const Matrix& m)
{

    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.col; j++)
        {
            o << *(*(m.data + i ) + j ) << " ";

        }
        o << endl;
        
    }
    return o;
}
int& Matrix::operator()(const int& i, const int& j)
{
    static int NGU = 0;
    return (i >= 0 && i < this->row && j >= 0 && j < this->col)?*(*(this->data + i) +j) : NGU;
}