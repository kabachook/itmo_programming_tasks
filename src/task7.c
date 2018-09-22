#include <stdio.h>
#include <math.h>

enum Car {
    Light,
    Truck,
    Bus,
    Sport
};

struct Circle {
    double r;
};

union Keyboard {
    int n;
    struct {
        unsigned int numLock:1;
        unsigned int capsLock:1;
        unsigned int scrollLock:1;
    } state;
};

double calcLength(struct Circle *c) {
    return 2 * M_PI * c->r;
}

double calcArea(struct Circle *c) {
    return M_PI * c->r * c->r;
}


int main() {
    // Subtask 1
    enum Car c;
    c = Bus;
    printf("Car type: %d\n", c);

    // Subtask 2
    struct Circle fig;
    fig.r = 1;
    printf("Length: %lf\tArea: %lf\n", calcLength(&fig), calcArea(&fig));

    // Subtask 3
    union Keyboard k;
    printf("Enter keyboard state:");
    scanf("%x", &k.n);
    printf("State: %i, %i, %i", k.state.capsLock, k.state.numLock, k.state.scrollLock);

    return 0;
}