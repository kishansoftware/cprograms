#include<stdio.h>
int main()
{
    int a[]={23,45,56,78,90};
    int n=sizeof(a)/sizeof(int);
    int max=a[0];
    for(i=1;i<=n-1;i++)
    if(a[i]>max)
    max=a[i];
    printf("max=%d",max);
    return 0;

}