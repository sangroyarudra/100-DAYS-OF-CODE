/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.


Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
int findPivotInteger(int n) {
    for (int x = 1; x <= n; x++) {
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 1; i <= x; i++) {
            leftSum += i;
        }
        for (int j = x; j <= n; j++) {
            rightSum += j;          
        }
        if (leftSum == rightSum) {  
            return x;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter a positive integer n: "); 
    scanf("%d", &n);
    int pivotInteger = findPivotInteger(n);
    printf("%d\n", pivotInteger);
    return 0;
}   