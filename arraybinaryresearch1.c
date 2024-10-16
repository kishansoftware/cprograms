#include<stdio.h>
int main()
{
    int a[]={1,4,5,7,9};
    int  searchvalue=9;
    int left=0,right,mid;
    right=sizeof(a)/sizeof(int);
    while(1)
    {
        mid=(left+right)/2;
        if(searchvalue==a[mid])
        {
            printf("%d found at %d",searchvalue,mid);
            return 0;
        }
        if(searchvalue<a[mid])
        right=mid-1;
        else
        left=mid+1;
        if(left>right)
        {
            printf("%d is not found",searchvalue);
            return 0;
        }
    }
    return 0;
       
    
}