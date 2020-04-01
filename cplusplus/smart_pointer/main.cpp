#include <iostream>
#include "smartpointer.h"
using namespace std;
using namespace DTLib;

class Test
{
public :
    Test()
    {
        cout<<"Test()"<<endl;
    }
    ~Test()
    {
        cout<<"~Test()"<<endl;
    }
};
int main(int argc,char *argv[])
{
    SmartPointer<Test> sp=new Test();
    SmartPointer<Test> nsp;
    nsp=sp;
    //nsp++;//C:\code\study_code\cplusplus\smart_pointer\main.cpp|23|
    //error: no 'operator++(int)' declared for postfix '++' [-fpermissive]|
    cout<<sp.isNull()<<endl;//1¿Õ
    cout<<nsp.isNull()<<endl;//0Ö¸Ïò¶Ñ¿Õ¼ä

    return 0;
}
