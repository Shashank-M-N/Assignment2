#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The largest among the 3 is: %d",(a>b)?((a>c)?a:c):((b>c)?b:c));
    return 0;
}