//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main() {
    printf("Enter the radius of the circle: ");
    float radius;
    scanf("%f", &radius);
    float area = 3.14159 * radius * radius;
    float circumference = 2 * 3.14159 * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}
    