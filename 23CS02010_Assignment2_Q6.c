#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    (a%2==1)?(printf("True, its an odd number")):(printf("False, its an even number"));
    return 0;
}