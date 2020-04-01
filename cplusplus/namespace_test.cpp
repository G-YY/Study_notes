#include <stdint.h>
#include <iostream>
using namespace std;
namespace First
{
    int i=0;
}
namespace Second
{
    int i=1;
    namespace Internal
    {
        struct P
        {
            int x;
            int y;
        };
    }
}
int main(int argc,char  *argv[])
{
    using namespace First;
    using Second::Internal::P;
    cout<<"First::i="<<i<<endl;
    cout<<"Second::i="<<Second::i<<endl;
    P p={2,3};
    cout<<"p.x="<<p.x<<endl;
    cout<<"p.y="<<p.y<<endl;
}
