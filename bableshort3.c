#include<stdio.h>
int main()
{
    int a[]={2,1,5,4,8,7};
    int i;
    int n;
    int size=sizeof(a)/sizeof(int);
    int t;
    for(i=0;i<=size-1;i++)
    printf("%d,",a[i]);
    printf("\n");
    t=a[2];
    a[2]=a[1];
    a[2]=t;
for(i=0;i<=size-1;i++)
    printf("%d,",a[i]);
  return 0;
}