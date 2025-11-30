/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
#include <limits.h>
void maxInSubarrays(int* arr, int arrSize, int k) {
    for (int i = 0; i <= arrSize - k; i++) {
        int maxElem = INT_MIN;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] > maxElem) {
                maxElem = arr[i + j];
            }
        }
        printf("%d ", maxElem);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int k = 3;      
    printf("Maximum elements in each subarray of size %d: ", k);
    maxInSubarrays(arr, arrSize, k);
    return 0;
}