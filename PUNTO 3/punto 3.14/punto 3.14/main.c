#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double calculate_sine(double x) {
    double term = x, sum = x;
    int i = 1;
    while(fabs(term) > 0.001) {
        term = pow(-1, i) * pow(x, 2*i+1) / factorial(2*i+1);
        sum += term;
        i++;
    }
    return sum;
}

int main() {
    double x;
    printf("Ingrese un número: ");
    scanf("%lf", &x);
    printf("El seno de %.2lf es %.2lf\n", x, calculate_sine(x));
    return 0;
}
