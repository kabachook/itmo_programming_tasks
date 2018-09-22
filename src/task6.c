// MSVC
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *arr = malloc(sizeof(char) * 5);
    arr[0] = 'H';
    arr[1] = 'e';
    arr[2] = 'l';
    arr[3] = 'l';
    arr[4] = 'o';

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %c\n", i, *(arr + i));
    }

    free(arr);

    char arr2[] = "Hello";

    for (int i = 0; i < 5; i++) {
        printf("arr2[%d] = %c\n", i, arr2[i]);
    }

    free(arr2);

    return 0;
}