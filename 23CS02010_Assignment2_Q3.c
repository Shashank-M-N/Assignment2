#include<stdio.h>

int main()
{
    int d;
    printf("Enter the number of days: ");
    scanf("%d",&d);
    printf("\nThe number of years = %d", d/365);
    d%=365;
    printf("\nThe number of months = %d", d/30);
    d%=30;
    printf("\nThe number of week = %d", d/7);
    d%=7;
    printf("\nThe number of days = %d", d);

    return 0;
}