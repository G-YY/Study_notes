#include <stdint.h>
#include <iostream>
using namespace std;
int add(int a,int b);
int add(int a,int b,int c);
typedef int(*PFUNC)(int a,int b);
int main(int argc,char  *argv[])
{
    cout<<"add(1,2) "<<(int*)add(1,2)<<endl;
    cout<<"add(1,2,3) "<<(int*)add(1,2,3)<<endl;//�����ַ��ͬ��������ͬ�ĺ���
    int c=0;
    PFUNC p =add;
    c=p(1,2);
    cout<<"c="<<c<<endl;
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int add(int a,int b ,int c)
{
    return a+b+c;
}
