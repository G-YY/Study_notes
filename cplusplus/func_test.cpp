#include <stdint.h>
#include <iostream>
using namespace std;
int mul(int x=0);
void func(int =0,int = 0)
{


}
int main(int argc,char  *argv[])
{
    func();
    func(1,2);
    cout<<"mul():"<<mul()<<endl;
    cout<<"mul(-1):"<<mul(-1)<<endl;
    return 0;

}

int mul(int x)
{
    return x*x;
}
