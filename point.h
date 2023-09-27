#include <iostream>
using namespace std;
class point
{
    
        int xVal;
        int yVal;
    public:
        void show();
        void TT(int);
        
        point(int = 1,int = 1);
        point(const point& );
        ~point();
        int GetxVal();
        void SetxVal(int);
        friend void ChangePoint(point& p){
            p.xVal = 5;
            p.yVal = 6;
        }
        friend point operator+(const point&, const point&);
        point operator- (const point&);
        friend ostream& operator<< (ostream& , point& );
        friend istream& operator>> (istream& , point& );
        bool operator==(const point&p);
        const point& operator=(const point&);
};

class TG 
{
    private:
        point A, B,C;
    public:
        TG(int =1, int =1,int =2,int =2 , int = 3, int =3);
        TG(const point& , const point&, const point&);
        ~TG();
        void show();
};