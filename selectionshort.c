#include<stdio.h>
int main()
{
    int a[]={2,4,1,3};
    int n=sizeof(a)/sizeof(int);
    int i;
    int pos=0;
    int min=a[0];
    for(i=1;i<=n-1;i++)
    {
    if(a[i]<min)
    {
    min=a[i];
    pos=i;
    }
    }
    printf("%d,%d",min,pos);
    return 0;
}
