#include <iostream>
using namespace std;
class SV
{
private:
    int MSSV;
    bool gender;
    double DTB;
public:
    SV(int = 0, bool = true, double = 0.0);
    ~SV();
    
    friend ostream& operator<<(ostream&, const SV&);
    friend istream& operator>>(istream&, SV&);
    bool operator==(const SV&);
};

