#include<stdio.h>
int main()
{
    int weekno;
    printf("Enter value of week no");
    scanf("%d",&weekno);
    if(weekno<0||weekno>6)
    {
    printf("weekno error=%d",weekno);
    return 0;
    }
    if(weekno==0)
    printf("Sunday");
    else
    if(weekno==1)
    printf("Monday");
    else
    if(weekno==2)
    printf("Tuesday");
    else
    if(weekno==3)
    printf("Wednesday");
    else
    if(weekno==4)
    printf("Thursday");
    else
    if(weekno==5)
    printf("Friday");
    else
    if(weekno==6)
    printf("Saturday");
    return 0;
}