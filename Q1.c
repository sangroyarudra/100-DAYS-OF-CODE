//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main() {
    printf("Enter your two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;   
}