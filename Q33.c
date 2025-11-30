/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, original, rem, n = 0;
    float sum = 0.0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (original != 0)
    {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0)
    {
        rem = original % 10;
        sum += pow(rem, n);
        original /= 10;
    }
    if ((int)sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}