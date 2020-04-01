#include <stdint.h>
#include <iostream>
using namespace std;
int main(int argc,char  *argv[])
{
    int* p=new int;
    *p=5;
    *p=*p+10;
    cout<<"p="<<p<<"\t*p="<<*p<<endl;
    delete p;
    p=new int[10];//p所指向的内存空间至少占用40个字节>=40
    for(int i=0;i<10;i++){
        p[i]=i+1;
        cout<<"p[i]="<<p[i]<<endl;
    }
    delete[] p;

    int* p1=new int(8);
    cout<<"初始化指针变量p1="<<*p1<<endl;
    delete p1;
    return 0;


}
