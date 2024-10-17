#include<stdio.h>
void submatrix(int c[2][2],int a[2][2],int b[2][2],int m,int n)
{
	int i,j;
for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
		c[i][j]=a[i][j]-b[i][j];
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
int a[2][2]={{5,8},{8,9}};
int b[2][2]={{1,3},{2,1}};
int c[2][2];
int m=2,n=2;
int i,j;
printmatrix(a,2,2);
printmatrix(b,2,2);
submatrix(c,a,b,2,2);
printmatrix(c,2,2);
return 0;

}

