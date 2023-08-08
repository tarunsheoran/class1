#include <iostream>
using namespace std;
class demo
{
    int a;
    float b;
    public:
    void get()
    {
        a=5;
        b=5.6;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
}d;
    int main()
    {
        d.get();
        d.show();
        return 0;
    }