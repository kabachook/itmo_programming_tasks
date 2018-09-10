// MSVC
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main(int argc, char **argv) {
    int arr[] = {12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        printf("arr[%d] = %d\n", i + 1, arr[i]);
    }
    int m1[2][2] = {{1, 1},
                    {1, 4}};
    int m2[2][2] = {{1, 2},
                    {4, 1}};

    int product[2][2] = {{m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0], m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1]},
                         {m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0], m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1]}};
    printf("Result of multipllication:\n%d\t%d\n%d\t%d\n", product[0][0], product[0][1], product[1][0], product[1][1]);
    return 0;
}