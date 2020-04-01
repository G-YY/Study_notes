#include <stdint.h>
#include <iostream>
using namespace std;
void static_cast_demo()
{
    int i=0x12345;
    char c= 'c';
    int* pi=&i;
    char* pc=&c;
    c=static_cast<char>(i);
    //pc=static_cast<char*>(pi);//ERROR,不能在基本类型指针之间转换
    //C:\code\CPP\type_cast_test.cpp|11|error: invalid static_cast from type 'int*' to type 'char*'|
}
void const_cast_demo()
{
    const int& j=1;
    int& k =const_cast<int&>(j);

    const int x=2;
    int& y=const_cast<int&>(x);

    //int z=const_cast<int>(x);//ERROR,只能用于引用和指针之间
    //C:\code\CPP\type_cast_test.cpp|21|error: invalid use of const_cast with type 'int',
    // which is not a pointer, reference, nor a pointer-to-data-member type|
    k=5;
    cout<<"k="<<k<<endl;
    cout<<"j="<<j<<endl;

    y=8;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"&x="<<&x<<endl;
    cout<<"&y="<<&y<<endl;

}
void reinterpret_cast_demo()
{
    int i=0;
    char c='c';
    int* pi=&i;
    char* pc=&c;
    pc=reinterpret_cast<char*>(pi);
    pi=reinterpret_cast<int*>(pc);
    pi=reinterpret_cast<int*>(i);
    //c=reinterpret_cast<char>(i);//ERROR基本类型

}
void dynamic_cast_demo()
{
    int i =0;
    int* pi =&i;
    //char* pc=dynamic_cast<char*>(pi);//用于类指针之间，有虚函数支持
}
int main(int argc,char  *argv[])
{
    static_cast_demo();
    const_cast_demo();
    reinterpret_cast_demo();
    dynamic_cast_demo();
    return 0;
}
