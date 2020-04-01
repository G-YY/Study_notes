#include <iostream>
#include <string>
using namespace std;

int main(int argc,char *argv[]){
    bool b=0;
    cout<<"b="<<b<<endl;
    b++;
    cout<<"b="<<b<<endl;
    b=b-3;
    cout<<"b="<<b<<endl;
//--------------------------------------------
    bool a=false;
    int c=a;
    cout<<"sizeof(a)"<<sizeof(a)<<endl;
    cout<<"sizeof(a)"<<sizeof(c)<<"\tc="<<c<<endl;
    //------------------------------------
    int d=1;
    int e=2;
    (d<e?d:e)=3;
    cout<<"d="<<d<<"\te="<<e<<endl;

    return 0;
}
