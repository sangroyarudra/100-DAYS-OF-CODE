/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
#include <limits.h>
int maxSumSubarray(int* arr, int arrSize, int k) {
    if (k > arrSize || k <= 0) {
        return 0; // Invalid case
    }

    int maxSum = INT_MIN;
    int currentSum = 0;

    // Calculate the sum of the first 'k' elements
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Slide the window over the array
    for (int i = k; i < arrSize; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int maxSum = maxSumSubarray(arr, arrSize, k);
    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    return 0;
}