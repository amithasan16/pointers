#include<stdio.h>
int main()
{
    int a;
    int *p;//Pointer inuitialized(*) in same data_type which variable address is represent
    p=&a;
    printf("%p",p);
}