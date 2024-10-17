#include<stdio.h>
int main()
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{5,6},{7,8}};
	int c[2][2];
	int m=2,n=2,u=0;
	int j,i,k,l,t;
	for(i=0;i<=m-1;i++)
	{
	for(j=0;j<=n-1;j++)
	{
		printf("%4d",a[i][j]);
	}
	printf("\n");
}
printf("\n");
	for(i=0;i<=m-1;i++)
	{
	for(j=0;j<=n-1;j++)
	{
		printf("%4d",b[i][j]);
	}
	printf("\n");
}
printf("\n");
for(i=0;i<=m-1;i++)
	{
	for(j=0;j<=n-1;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
		printf("%4d",c[i][j]);
	}
	printf("\n");

}
return 0;
}
