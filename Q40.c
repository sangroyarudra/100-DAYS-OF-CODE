
/*
Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char binary[MAX];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate 1's complement
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid input. Please enter a binary number.\n");
            return 1;
        }
    }

    printf("1's complement: %s\n", binary);
    return 0;
}