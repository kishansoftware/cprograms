#include<stdio.h>
int main()
{
int a[]={1,3,4,5,6,8,9};
int size=sizeof(a)/sizeof(int);
int i;
int n;
printf("Enter value of number");
scanf("%d",a[i]);
for(i=0;i<=size-1;i++)
{
    printf("%d",a[i]);
}
return 0;
}