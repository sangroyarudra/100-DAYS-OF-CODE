/*Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; // Multiply i to the factorial
        }
        printf("%llu\n", factorial);
    }
    return 0;
}