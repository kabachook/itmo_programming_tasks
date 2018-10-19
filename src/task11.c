#include <stdio.h>
#include <math.h>
#include "parallelogram.h"

int main() {
    struct Parallelogram p;
    printf("Enter two vectors:");
    scanf("%lf %lf %lf %lf", &p.vec1.x, &p.vec1.y, &p.vec2.x, &p.vec2.y);
    printf("Perimeter:%lf\nArea:%lf\n", perimeter(&p), area(&p));
    return 0;
}