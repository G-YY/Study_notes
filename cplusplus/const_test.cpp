#include <stdio.h>
int main()
{
    const int c=0;
    int* p = (int*)&c;
    *p=5;
    printf("c=%d\n",c);//0
    printf("*p=%d",*p);//5
    return 0;
}
//c���Ա������5��cpp�������0��
