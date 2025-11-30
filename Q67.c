/*
Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int n, i, element, position;
    printf("Enter the number of elements in the array: ");      
    scanf("%d", &n);
    int arr[n + 1]; // Create an array with one extra space for the new
    printf("Enter %d elements: ", n);   
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);       
    }
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    // Validate position
    if(position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the right to make space for the new element
    for(i = n; i > position; i--) {         
        arr[i] = arr[i - 1];
    }
    // Insert the new element   
    arr[position] = element;        
    printf("Array after insertion: ");  
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}