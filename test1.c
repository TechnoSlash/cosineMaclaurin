//Write a C program to evaluate the Maclaurin's series of cosine function until its value becomes 10^-6.
#include <stdio.h>
#include <math.h>

double cosine(double x) {
    double sum = 1.0; // The first term of the series is always 1 (when n = 0).
    double term = 1.0;
    int n = 1;

    while (fabs(term) >= 1e-6) {
        term = -term * x * x / (2 * n * (2 * n - 1)); // Calculate the next term using the recursive formula.
        sum += term; // Add the new term to the sum.
        n++;
    }

    return sum;
}

int main() {
    double x;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    double result = cosine(x);
    printf("cos(%.2lf) = %.6lf\n", x, result);

    return 0;
}
