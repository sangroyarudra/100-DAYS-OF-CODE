// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>


int main() {
    int a , b , stamp;
    printf("enter for a :");
    scanf("%d",&a);
    printf("enter for b :");
    scanf("%d",&b);
    stamp = a;
    a = b;
    b = stamp ;
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}