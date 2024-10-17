#include<stdio.h>
void addmatrix(int c[2][2],int a[2][2],int b[2][2],int m,int n)
{
	int i,j;
	
	for(i=0;i<=m-1;i++)
	{
	for(j=0;j<=n-1;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("\n");
	
}
	
}
void printmatrix(int a[2][2],int m,int n)
{
	int i,j;
		for(i=0;i<=m-1;i++)
	{
	for(j=0;j<=n-1;j++)
	{
		printf("%4d",a[i][j]);
	}
	printf("\n");
}
printf("\n");
}
int main()
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{5,6},{7,8}};
	int c[2][2];
	int m=2,n=2;
	int j,i,k,l,t;
printmatrix(a,2,2);
printmatrix(b,2,2);
addmatrix(c,a,b,2,2);
printmatrix(c,2,2);
return 0;
}
