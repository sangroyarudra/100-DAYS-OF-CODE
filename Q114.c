/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int index[256] = {0}; // ASCII character set

    for (int end = 0; end < n; end++) {
        start = (index[(unsigned char)s[end]] > start) ? index[(unsigned char)s[end]] : start;
        maxLength = (maxLength > end - start + 1) ? maxLength : end - start + 1;
        index[(unsigned char)s[end]] = end + 1;
    }

    return maxLength;
}
int main() {
    char s1[] = "abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(s1)); // Output: 3
    char s2[] = "bbbbb";
    printf("%d\n", lengthOfLongestSubstring(s2)); // Output: 1
    char s3[] = "pwwkew";
    printf("%d\n", lengthOfLongestSubstring(s3)); // Output: 3
    return 0;
}
