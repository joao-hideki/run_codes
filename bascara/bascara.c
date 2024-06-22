#include <stdio.h>
#include <math.h>

void raizes (float a, float b, float c, float* x1, float* x2) {
    float delta = (b*b)-(4*a*c);
    if (delta >= 0) {
        *x1 = (-b+sqrt(delta))/(2*a);
        *x2 = (-b-sqrt(delta))/(2*a);

        printf("%.2f %.2f", *x1, *x2);
    } else {
        printf("NARN");
    }
}

int main() {
    float a, b, c;
    float x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    raizes(a, b, c, &x1, &x2);

    return 0;
}