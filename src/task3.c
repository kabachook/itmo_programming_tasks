// MSVC
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(int argc, char** argv) {
    int a;
    printf("Enter octal number:");
    scanf("%o", &a);
    printf("a in hex = %x\n", a);
    printf("a in hex = %x\t a << 4 = %x\n",a ,a << 4);
    printf("a in hex = %x\t ~a = %x\n", a, ~a);
    printf("Enter new value in hex:");
    int b;
    scanf("%x", &b);
    printf("b & a in hex = %x\n", b & a);
    return 0;
}