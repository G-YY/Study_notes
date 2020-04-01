#include <iostream>
#include <string>
using namespace std;
int aa=1;
struct SV
{
    int& x;
    int& y;
    int& z;
};
struct Tref{
    char& r;//定义了字符类型的引用
};
struct Tref0{

    char* before;
     char& r;//定义了字符类型的引用
    char* after;
};
void swap(int& a,int& b){
    int t=a;
    a=b;
    b=t;
}

int main(int argc,char *argv[]){
    int bb=2;
    int* pc=new int(3);
    SV sv={aa ,bb ,*pc};
    //int& array[]={aa,bb,*pc};//error。地址不连续，C++不支持引用数组
    //C:\code\CPP\quote_test.cpp|30|error: declaration of 'array' as array of references|
    cout<<"&sv"<<&sv.x<<" "<<&sv.y<<" "<<&sv.z<<endl;
    delete pc;

    char ac='a';
    char& bc=ac;
    char ch='c';
    Tref0 ref0={&ac,bc,&ch};
    cout<<"sizeof(ref0)\t"<<sizeof(ref0)<<endl;//12
    cout<<"sizeof(ref0.before)\t"<<sizeof(ref0.before)<<endl;//4
    cout<<"sizeof(ref0.after)\t"<<sizeof(ref0.after)<<endl;//4，指针，
    cout<<"sizeof(&ref0.before)\t"<<&ref0.before<<endl;// 0x6dfecc
    cout<<"sizeof(&ref0.after)\t"<<&ref0.after<<endl;//0x6dfed4


    char& rc=ch;
    Tref ref={ch};
    cout<<"sizeof(char&)\t"<<sizeof(char&)<<endl;//1
    cout<<"sizeof(rc)\t"<<sizeof(rc)<<endl;//1
    cout<<"sizeof(Tref)\t"<<sizeof(Tref)<<endl;//4，指针，
    cout<<"sizeof(ref.r)\t"<<sizeof(ref.r)<<endl;//1

    int a=5;
    int& b=a;//必须同类型初始化，必须有初始值，不能为常量1，要是变量名
    b=10;
    cout<<"a="<<a<<"\tb="<<b<<endl;
    cout<<"&a="<<&a<<"\t&b="<<&b<<endl;
    const int& x=a;
    //x=10;//不能通过x修改a，x为只读属性
    int*p = (int*) &x;
    *p=10;
    cout<<"利用指针成功修改a为"<<a<<endl;



    int c=1;
    int d=2;
    swap(c,d);
    cout<<"c="<<c<<"\td="<<d<<endl;



}
//可以对同类型变量取别名，地址相同
