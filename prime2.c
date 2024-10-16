#include<stdio.h>
int main()
{
	int t=4,i,n=500;
	for(i=5;i<=n;i=i+t)
	{
	t=6-t;
	printf("%d,t=%d\t",i,t);
}
return 0;
}
