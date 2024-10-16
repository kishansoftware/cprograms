#include<stdio.h>
int main()
{
    int a[]={1,2,5,7,6,8};
    int size=sizeof(a)/sizeof(int);
    int n;
    int i;
    for(i=0;i<=size-2;i++)
    if(a[i]>>a[i+1])
    {
        printf("Wrong");
    }
    else
    
    printf("Right");
    
    //printf("%d<=%d  ",i,i+1);
    //printf("%d<=%d  ",a[i],a[i+1]);
    return 0;
}
