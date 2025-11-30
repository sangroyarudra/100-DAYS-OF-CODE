/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    char str[100];
    sprintf(str, "%d", num);

    char temp = str[0];
    str[0] = str[strlen(str) - 1];
    str[strlen(str) - 1] = temp;

    printf("Swapped number: %s\n", str);
    return 0;
}