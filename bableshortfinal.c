#include<stdio.h>
int main()
{
    int a[]={2,1,4,3};
    int size=sizeof(a)/sizeof(int);
    int i,j,t;
    for(i=0;i<=size-1;i++)
    printf("%d,",a[i]);
    for(j=0;j<=size-1;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    printf("\n");
    for(i=0;i<=size-1;i++)
    printf("%d,",a[i]);

    return 0;

}