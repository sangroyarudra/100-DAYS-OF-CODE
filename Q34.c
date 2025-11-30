/*
Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:

Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main() {
    int num, i;
    bool isPrime = true;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false; // Found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}