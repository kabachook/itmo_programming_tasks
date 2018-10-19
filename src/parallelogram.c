#include <math.h>
#include "parallelogram.h"

double perimeter(struct Parallelogram *figure) {
    return 2 * (sqrt(pow(figure->vec1.x, 2) + pow(figure->vec1.y, 2)) +
                sqrt(pow(figure->vec2.x, 2) + pow(figure->vec2.y, 2)));
}

double area(struct Parallelogram *figure) {
    double len1 = sqrt(pow(figure->vec1.x, 2) + pow(figure->vec1.y, 2)), len2 = sqrt(
            pow(figure->vec2.x, 2) + pow(figure->vec2.y, 2));
    double veccos = (figure->vec1.x * figure->vec2.x + figure->vec1.y * figure->vec2.y) /
                    (len1 * len2);
    double angle = acos(veccos);
    return len1*len2*sin(angle)/2;
};