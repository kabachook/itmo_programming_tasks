// MSVC
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    // Subtask 4
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    bool *is_prime = malloc(sizeof(bool) * (n + 1));
    for (int i = 0; i <= n; ++i)
        is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (!is_prime[i]) continue;
        for (int j = i + i; j <= n; j += i)
            is_prime[j] = false;
    }

    printf("Primes: ");
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) printf("%d ", i);
    }

    // Subtask 5
    int p, m;
    double amount;
    printf("\nEnter annual interest rate:");
    scanf("%d", &p);
    printf("\nEnter amount:");
    scanf("%lf", &amount);
    printf("\nEnter months:");
    scanf("%d", &m);

    double k = 1. + p / 100. / 12;

    for (int i = 1; i <= m; ++i) {
        amount *= k;
        printf("Month %d: %.2lf\n", i, amount);
    }

    return 0;
}