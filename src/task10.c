#include <stdio.h>
#include <stdlib.h>

int gen_array(int *arr, int n) {
    int i = 0;
    while (n) {
        arr = realloc(arr, (i + 1) * sizeof(int));
        int d = n % 10;
        n /= 10;
        arr[i] = d;
        ++i;
    }
    int l = i;
    for (int j = 0; j< l/2; ++j){
        int t = arr[j];
        arr[j] = arr[l-j-1];
        arr[l-j-1] = t;
    }


    return i;
}


int digits_sum(int n, int sum) {
    if (n) {
        int d = n % 10;
        n /= 10;
        sum += d;
        digits_sum(n, sum);
    } else {
        return sum;
    }
}


int main() {
    int number = 561310;
    int *arr  = calloc(0, sizeof(int));
    int len = gen_array(arr, number);
    for (int i = 0; i < len; ++i) {
        printf("%d\t", arr[i]);
    }

    printf("\n%d\n", digits_sum(number, 0));

    return 0;
}