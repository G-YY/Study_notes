#include <stdint.h>
#include <iostream>
#define FUNC(a,b) ((a)<(b)?(a):(b))//���ں�����ֱ���滻

inline int add_inline(int n);
inline int add_inline(int n)
{
    int ret=0;
    for(int i=0;i<n;i++){
        ret+=i;
    }
    return ret;
}

inline int func(int a,int b){
    return a<b?a:b;
}
int main(int argc,char  *argv[])
{
    int r=add_inline(10);
    std::cout<<"r="<<r<<std::endl;
    int a=1;
    int b=3;
    int c=FUNC(++a,b);//(++a)<(b)?++a:b����a��ֵΪ3������Ҫʹ��inline����
    std::cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<std::endl;//3,3,3
    return 0;
}
