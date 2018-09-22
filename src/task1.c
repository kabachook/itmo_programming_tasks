#define _CRT_SECURE_NO_WARNINGS // MSVC

#include <stdio.h>

int main(int argc, char **argv) {
    double a;
    char c;
    scanf("%lf %c", &a, &c);
    printf("variable a=%lf\nvariable c=%c\n", a, c);
    return 0;
}