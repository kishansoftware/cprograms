#include<stdio.h>
int main()
{
    int a[]={2,3,4,2,3,4,5,5};
    int size=sizeof(a)/sizeof(int);
    int n;
    int i;
    int count=0;
    printf("Enter value of search");
    scanf("%d",&n);
    for(i=0;i<=size-1;i++)
    {
        if(n==a[i])
        {
            count=count+1
        }
    }
    printf("%d",count);
    return 0;
}