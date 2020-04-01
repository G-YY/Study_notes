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
//cÓïÑÔ±àÒëÊä³ö5£¬cpp±àÒëÊä³ö0£»
