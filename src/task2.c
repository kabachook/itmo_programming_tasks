// MSVC
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
    double alpha;
    printf("Enter alpha:");
    scanf("%lf", &alpha);
    double z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha)),
            z2 = tan(3 * alpha);
    printf("z1 = %.10lf\nz2 = %.10lf\n", z1, z2);
    return 0;
}