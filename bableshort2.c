#include<stdio.h>
int main()
{
    int x=5;
    int y=7;
    x=x+y;
    y=x-y;
    x=x-y;
    //y=x-y;
    //x=x-y;
    //y=y+x;

    printf("x=%d,y=%d",x,y);
    return 0;
}