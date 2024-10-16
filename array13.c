#include<stdio.h>
int main()
{
    int a=3,b=5,c=9,max;
    if(a<b || a<c)
    {
    if(b>=c)
    max=b;
    else
    max=c;
    }
    else
    max=a;
    printf("%d",max);
    return 0;
}