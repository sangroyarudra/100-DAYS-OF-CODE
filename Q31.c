/*
Q31: Write a program to take a number as input and print its equivalent binary representation.
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main()
{
    int num, binary = 0, rem, base = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 2;
        binary += rem * base;
        num /= 2;
        base *= 10;
    }
    printf("Binary representation: %d\n", binary);
    return 0;
}