//Using OOPs

#include <iostream>
using namespace std;


class rectangle
{
public:
    float l, w;


    float area()
    {
        return l * w;
    }
};


int main()
{
    rectangle r;
   
    cout << "length: ";
    cin >> r.l;
   
    cout << "width: ";
    cin >> r.w;
   
    cout << "area : " << r.area() << endl;
   
    return 0;
}
