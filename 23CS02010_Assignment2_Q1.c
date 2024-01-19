#include<stdio.h>

int main()
{
    int a=15;
    printf(" The value of a is 15 \n now ++a = %d",++a);
    //now the value of a is 16, as this is a pre increment process, this increments the value of a to 16 and then outputs it.
    printf("\n now a++ = %d",a++);
    //now the value of a is 17, as this is a post increment process, this outputs the value and then increments a to 17.
    printf("\n now --a = %d",--a);
    //now the value of a is 16, as this is a pre decrement process, this decrements the value of a to 16 and then outputs it.
    printf("\n now a-- = %d",a--);
    //now the value of a is 15, as this is a post decrement process, this outputs the value and then decrements a to 15.
    
    return 0;
}