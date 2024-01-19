#include<stdio.h>

int main()
{
    int a,b=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a&b==1)
    printf("Its an odd number");
    else
    printf("Its an even number");
    return 0;
}