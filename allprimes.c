#include<stdio.h>
int main()
{
	int n=25,i,j,isprime,limit,count=0,loopcount=0;
//	printf("2,3");
//	count=2;
	for(i=2;i<=n;i++)
	
	{
		limit=(int)sqrt(i);
		isprime=1;
		for(j=2;j<=limit;j++)
		{
			loopcount++;
		if(i%j==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime)
	{
	printf("%d",i);
	count++;
}
}
	printf("/ntotal prime=%d,loopcount=%d",count,loopcount);

		return 0;	
		}

