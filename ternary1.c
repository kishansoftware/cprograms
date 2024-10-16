#include<stdio.h>
int main()
{
    int a=888,b=100,c=300,max;
    max=(a>b && a>c)?a:(b>=c) ?b:c;
    printf("\n%d\n%d",max,(a>b && a>c)?a:(b>=c) ?b:c);
    (a>b && a>c)?printf("a"):(b>=c)?printf("b"):printf("c");
    return 0;
}