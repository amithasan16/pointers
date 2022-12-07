#include<stdio.h>
int main()
{
    int i;
    int ara[9]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<9;i++)
    {
        printf("%p\n",&ara[i]);
    }
}