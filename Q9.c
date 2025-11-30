//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main() {
    float rate, simple_interest, compound_interest, amount;
    int time, principal;
    printf("Enter principal amount: ");
    scanf("%d", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    
    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;
    
    // Calculate Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;
    
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);
    return 0;
}