#include <stdio.h>

int main(int argc, char **argv) {
    int a = *argv[1] - '0', b = *argv[2] - '0';
    freopen("out.txt", "w", stdout);
    printf("%d\n", a + b);
}