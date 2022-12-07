#include<stdio.h>
int main()
{
    int a=12;
    int* p;
    p=&a;
    printf("%d\n",*p);
    *p=13;
    printf("%d",*p);
}