#include<stdio.h>
int main()
{
    int a[]={3,5,8,9,8};
    int size=sizeof(a)/sizeof(int);
    int n;
    int i;
    int x=0;
    printf("Enter value of number:\n");
    scanf("%d",&n);
    for(i=0;i<=size-1;i++)
    {
        if(n==a[i])
        {
            printf("%d found at %d",n,n+1);
        }
    }
}