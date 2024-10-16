#include<stdio.h>
int main()
{
	int a[]={3,4,3,3,4,3,4};
	int size=sizeof(a)/sizeof(int);
	int n,i;
	int count=0;
	printf("Enter value of the number");
	scanf("%d",&n);
	for(i=1;i<=size-1;i++)
	{
		if(n==a[i])
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
