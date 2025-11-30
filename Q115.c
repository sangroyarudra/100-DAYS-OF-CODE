/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
int areAnagrams(char *s, char *t) {
    int count[26] = {0}; // Assuming only lowercase letters

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; // Not an anagram
        }
    }
    return 1; // Anagram
}   
int main() {
    char s1[] = "anagram";
    char t1[] = "nagaram";
    if (areAnagrams(s1, t1)) {
        printf("Anagram\n"); // Output: Anagram
    } else {
        printf("Not Anagram\n");
    }

    char s2[] = "rat";
    char t2[] = "car";
    if (areAnagrams(s2, t2)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n"); // Output: Not Anagram
    }

    return 0;
}
