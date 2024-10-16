#include<stdio.h>
int main()
{
    int a=34,b=459,c=56,d=78,max;
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
printf("%d",max);
return 0;
}