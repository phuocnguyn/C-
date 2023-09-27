#include "SV.h"
class QLSV
{
private:
    SV* p;
    int n;
public:
    QLSV();
    ~QLSV();
    friend ostream& operator<<(ostream&, const QLSV&);
    void Add(const SV&);
    void Insert(const SV&, const int&);
    int IndexOf(const SV&);
    void Remove(const SV&);
    void RemoveAt(const int&);
    void Update(const int&);
};
