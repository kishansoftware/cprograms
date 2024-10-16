#include<stdio.h>
int main()
{
    int a=10,b=30,c=10;
    int kuchbhi=0;

    if(a==b)
    {
    printf("1 ");
    kuchbhi=kuchbhi+1;
    }
    else
    printf("0 ");
    if(a==c)
    {
    printf("1 ");
    kuchbhi=kuchbhi+1;
    }
    else
    printf("0");
    if(b==c)
    {
    printf("1");
    kuchbhi=kuchbhi+1;
    }
    else
    printf("0");
    printf("\n count=%d",kuchbhi);
    return 0;
}