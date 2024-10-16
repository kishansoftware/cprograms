#include<stdio.h>
int main()
{
    int a,b,c,mid;
    printf("Enter value of a number");
    scanf("%d",&a);
    printf("Enter value of b number");
    scanf("%d",&b);
    printf("Enter value of c number");
    scanf("%d",&c);
    if((a>b && a<c)||(a>c && a<b))
    {
    mid=a;
    
    }
    else
    if((b>c && b<a)||(b>a &&b<c))
    {
    mid=b;
}
else
mid=c;
    printf("middle number=%d",mid);
    
    return 0;
}