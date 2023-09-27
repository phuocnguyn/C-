#include <iostream>
using namespace std;
class Matrix
{
private:
    int **data;
    int row, col;
public:
    Matrix(int =2, int = 3, int = 1);
    ~Matrix();
    void Show();
    friend ostream& operator<<(ostream& , const Matrix& );
    friend istream& operator>>(istream&, Matrix&);
    int& operator()(const int&, const int&);
};

