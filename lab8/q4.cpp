#include <stdio.h>

int sumOfCubes(int n) {
    if (n == 0)
        return 0;
    return (n * n * n) + sumOfCubes(n - 1);
}

int main() {
    int n;
    printf("Enter n to find sum of cubes (1³+2³+...+n³): ");
    scanf("%d", &n);
    printf("Sum of cubes up to %d = %d\n", n, sumOfCubes(n));
    return 0;
}
