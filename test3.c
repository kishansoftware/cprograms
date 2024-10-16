#include<stdio.h>
int main()
{
    int a[]={3,45,67,43,21,34,67};
    int n=sizeof(a)/sizeof(int);
    int max=[0];
    for(i=1;i<=n-1;i++)
    if(a[i]>max)
    max=a[i];
    printf("%d",max);
    return 0;
    
}