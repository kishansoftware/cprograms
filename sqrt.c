#include<stdio.h>
int main()
{
	int r,n;
	printf("Enter value of number=");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
	printf("%d",r);
		n=n/10;
		
	}
	//printf("%d",r);
	return 0;
}
