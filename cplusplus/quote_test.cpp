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
    char& r;//�������ַ����͵�����
};
struct Tref0{

    char* before;
     char& r;//�������ַ����͵�����
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
    //int& array[]={aa,bb,*pc};//error����ַ��������C++��֧����������
    //C:\code\CPP\quote_test.cpp|30|error: declaration of 'array' as array of references|
    cout<<"&sv"<<&sv.x<<" "<<&sv.y<<" "<<&sv.z<<endl;
    delete pc;

    char ac='a';
    char& bc=ac;
    char ch='c';
    Tref0 ref0={&ac,bc,&ch};
    cout<<"sizeof(ref0)\t"<<sizeof(ref0)<<endl;//12
    cout<<"sizeof(ref0.before)\t"<<sizeof(ref0.before)<<endl;//4
    cout<<"sizeof(ref0.after)\t"<<sizeof(ref0.after)<<endl;//4��ָ�룬
    cout<<"sizeof(&ref0.before)\t"<<&ref0.before<<endl;// 0x6dfecc
    cout<<"sizeof(&ref0.after)\t"<<&ref0.after<<endl;//0x6dfed4


    char& rc=ch;
    Tref ref={ch};
    cout<<"sizeof(char&)\t"<<sizeof(char&)<<endl;//1
    cout<<"sizeof(rc)\t"<<sizeof(rc)<<endl;//1
    cout<<"sizeof(Tref)\t"<<sizeof(Tref)<<endl;//4��ָ�룬
    cout<<"sizeof(ref.r)\t"<<sizeof(ref.r)<<endl;//1

    int a=5;
    int& b=a;//����ͬ���ͳ�ʼ���������г�ʼֵ������Ϊ����1��Ҫ�Ǳ�����
    b=10;
    cout<<"a="<<a<<"\tb="<<b<<endl;
    cout<<"&a="<<&a<<"\t&b="<<&b<<endl;
    const int& x=a;
    //x=10;//����ͨ��x�޸�a��xΪֻ������
    int*p = (int*) &x;
    *p=10;
    cout<<"����ָ��ɹ��޸�aΪ"<<a<<endl;



    int c=1;
    int d=2;
    swap(c,d);
    cout<<"c="<<c<<"\td="<<d<<endl;



}
//���Զ�ͬ���ͱ���ȡ��������ַ��ͬ
