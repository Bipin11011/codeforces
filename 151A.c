#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int total_drinks = k * l;
    int total_slices = c * d;
    int total_salt = p;

    int max_drinks = total_drinks / nl;
    int max_slices = total_slices;
    int max_salt = total_salt / np;

    int min_servings = fmin(max_drinks, fmin(max_slices, max_salt));

    printf("%d\n", min_servings / n);

    return 0;
}