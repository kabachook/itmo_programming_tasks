// MSVC
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// Check if in 23 - 45 and printf 4th bit

int main(int argc, char **argv) {
    int a;
    printf("Enter number:");
    scanf("%d", &a);
    printf("Is %d in range 23 to 45? %d\n", a, a >= 23 && a <= 45);

    int b;
    printf("Enter number:");
    scanf("%d", &b);
    printf("%d's 4th bit is %d\n", b, (b >> 4) & 1);
    return 0;
}