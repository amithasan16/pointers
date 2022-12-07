#include<stdio.h>
int main()
{
    int a=12,b=12;
    int sum=a+b;
    int* p;
    p=&sum;
    printf("%p\n",p);

    printf("%d",*p);
}