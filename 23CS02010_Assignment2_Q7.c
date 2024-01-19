#include<stdio.h>

int main()
{
    float mc,tip,tax,d;
    int cost;
    printf("Enter the meal cost: ");
    scanf("%f",&mc);
    printf("\nEnter the tip percent: ");
    scanf("%f",&tip);
    printf("\nEnter the tax percent: ");
    scanf("%f",&tax);
    cost=(int)(mc+tip*mc/100+tax*mc/100);
    d=(mc+tip*mc/100+tax*mc/100)-cost;
    if(d>0.5)
        cost++;
    printf("\nThe total cost of the meal is: %d", cost);
    return 0;
}