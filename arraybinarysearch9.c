#include<stdio.h>
int main()
{
    int hour,minute;
    printf("Enter value of hour=");
    scanf("%d",&hour);
    printf("Enter value of minute=");
    scanf("%d",&minute);
    if(hour<0||hour>23)
    {
        printf("hour error,%d",hour);
        return 0;
    }
    if(minute<0||minute>59)
    {
        printf("minute error,%d",minute);
        return 0;
    }
    printf("time is correct=%d:%d\n",hour,minute);
    if(hour>13)
    {
        printf("%d:%d PM",hour-12,minute);
        printf("\nGood After None");
        
        return 0;
    }
    if(hour<=11)
    {
        printf("%d:%d AM",hour, minute);
        printf("\nGood Morning");
        return 0;
    }
    if(hour==12)
    {
        printf("%d:%d PM",hour,minute);
        return 0;
    }
return 0;

}