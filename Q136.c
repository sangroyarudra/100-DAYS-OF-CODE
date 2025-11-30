/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main() {
    enum Menu choice = ADD; // Change this value to test other operations
    int a = 10, b = 20;
    int result;

    switch (choice) {
        case ADD:
            result = a + b;
            printf("%d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("%d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("%d\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
