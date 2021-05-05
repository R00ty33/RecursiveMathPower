/** Nicholas Rudolph */
/** Recursion        */
/** Feb 7th 2020     */
/** directives */
#include <stdio.h> /** printf */

/** recursion power method */
int power(int x, int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 1;
    if (x == 0)
        return 0;
    else {
        return (n >= 2) ? ((x * x) * power(x, n - 2)) : (x * power(x, n - 1));
    }
}

/** main */
int main() {
    int x, n, result;

    printf("\nEnter value for x: ");
    scanf("%d", &x);

    printf("\nEnter value for n: ");
    scanf("%d", &n);

    result = power(x, n);

    printf("\n%d raised to the power of %d = %d\n", x, n, result);

    return 0;
} // end of main