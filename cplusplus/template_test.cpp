#include <stdio.h>
#include <iostream>
using namespace std;
template <typename T>
void Swap(T& a,T& b)
{
    T t=a;
    a=b;
    b=t;
}

template <typename T>
class Op
{
public:
    T process(T v)
    {
        return v*v;
    }
};
int main()
{
    int a=0;
    int b=1;
    Swap(a,b);
    cout<<"a="<<a<<"\tb="<<b<<endl;
    double c=0.01;
    double d=0.02;
    Swap<double>(c,d);
    cout<<"c="<<c<<"\td="<<d<<endl;


    //
    Op<int> opint;
    Op<double> opdouble;
    cout<<"(-1)的平方:"<<opint.process(-1)<<endl;
    cout<<"0.01的平方:"<<opdouble.process(0.1)<<endl;


    return 0;
}
