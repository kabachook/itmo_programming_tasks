#include <math.h>

#ifndef ITMO_PROGRAMMING_TASKS_PARALLELOGRAM_H
#define ITMO_PROGRAMMING_TASKS_PARALLELOGRAM_H

struct Parallelogram {
    struct point {
        double x, y;
    } vec1, vec2;
};

double perimeter(struct Parallelogram *figure);

double area(struct Parallelogram *figure);




#endif //ITMO_PROGRAMMING_TASKS_PARALLELOGRAM_H
