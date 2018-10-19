#include <stdio.h>
#include <string.h>

#define LEN 100

int main() {
    char s1[LEN], s2[LEN];
    unsigned int n;
    printf("Enter two strings and n:");
    scanf("%s %s %i", s1, s2, &n);

    // Compare first n chars
    int res = strncmp(s1, s2, n);
    if (res == 0) {
        printf("s1[:n] == s2[:n]\n");
    } else {
        printf("s1[:n] != s2[:n]\n");
    }

    // Copy first n chars
    char s_copy[LEN];
    strcpy(s_copy, s1);

    res = strncpy(s_copy, s2, n);
    printf("%s\n", res ? s_copy : "FAILED");


    // Find first occurrence of char in s1
    char c;
    scanf("%c", &c);
    char *occurrence = strchr(s1, c);
    printf("%c\n", *occurrence);

    // Find the first occurence of any char of s2 in s1
    occurrence = strpbrk(s1, s2);
    printf("%c\n", *occurrence);

    // Find the length of the maximum initial segment that consists of only the characters not found in another byte string

    printf("%d\n", strcspn(s1, s2));

    return 0;
}