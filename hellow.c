#include<stdio.h>
int main()
{
    int a[]={1,3,5,7,9,3,6,8};
    int size=sizeof(a)/sizeof(int);
    int n;
    int i;
    for(i=0;i<=size-1;i++)
    if(a[i]>>a[i+1])
    {
        printf("wrong");
    }
    else
    {
    printf("right");
    }
    return 0;

}