/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.


Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
int kthSmallest(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k - 1)
            return arr[pi];
        else if (pi < k - 1)
            low = pi + 1;
        else
            high = pi - 1;
    }
    return -1; // This should not happen if k is valid
}
int main() {
    int arr1[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int k1 = 4;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", kthSmallest(arr1, n1, k1));
    // Output: 5
    int arr2[] = {7, 10, 4, 3, 20, 15};
    int k2 = 3;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", kthSmallest(arr2, n2, k2)); 
    // Output: 7
    return 0;
}
