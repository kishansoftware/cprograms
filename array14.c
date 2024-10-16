#include<stdio.h>
int main()
{
    int a=56,b=45,c=67,max;
    printf("Enter value of number");
    scanf("%d",&a);
    printf("Enter value of number");
    scanf("%d",&b);
    printf("Enter value of number");
    scanf("%d",&c);
    if(a<b || a<c)
    {
        if(b>=c)
        max=b;
        else
        max=c;
    }
    else
    max=a;
    printf("max=%d",max);
    return 0;
}