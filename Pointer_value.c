#include<stdio.h>
int main()
{
    int a=1216;
    int* p;
    p=&a;
    printf("%p\n",p);
    printf("%d",*p);
}