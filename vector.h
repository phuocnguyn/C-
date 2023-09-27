#include <iostream>
using namespace std;
class Vector
{
    private:
    int *data;
    int count;
    public:
    Vector (int =2 , int = 1);
    ~Vector();
    friend ostream& operator<<(ostream&, Vector&);
};