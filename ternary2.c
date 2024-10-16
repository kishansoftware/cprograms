#include<stdio.h>
int main()
{
    int year,leapyear;
    printf("Enter value of number");
    scanf("%d",&year);
    leapyear=(year%400==0 || (year%4==0 && year%100!=0))?1:0;
    // printf("\n%d",leapyear);
    if(leapyear==1)
    printf("Leap Year");
    else 
    printf("Not leap year");
    return 0;
}