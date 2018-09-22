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
        printf("s1[:n] == s2[:n]");
    } else {
        printf("s1[:n] != s2[:n]");
    }


    return 0;
}