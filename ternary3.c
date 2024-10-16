#include<stdio.h>
int main()
{
    int a[]={3,4,5,8,9,12,16};
    int size=sizeof(a)/sizeof(int);
    int n;
    int i;
    int pos;
    printf("Enter value of number");
    scanf("%d",&pos);
    if(pos<1 || pos>size)
    printf("Error");
    else
    printf("%d",a[pos-1]);
    return 0;
}