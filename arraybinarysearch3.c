#include <stdio.h>
int main()
{
    int a[] = {3, 5, 8, 9, 17}; // 1-5
    int size = sizeof(a) / sizeof(int);
    int n;
    int i;
    int pos;
    printf("Enter value of number");
    scanf("%d", &pos); // 1 = 0, 7=6, 10 =9,pos-pos-1 x>=10   x=10 1-10  pos 1,2,9,10,11
    // pos>=10
    if (pos < 1 || pos > size)
        printf("Error");
    else
        printf("%d", a[pos-1]);
    return 0;
}