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

// #include <math.h>

// void bascara();

// int main() {
//     printf("Hello, World!\n");
//     bascara();
//     return 0;
// }

// void bascara() {
//     float a, b, c;
//     printf("Digite os valores de a, b e c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     float d = b * b - 4 * a * c;

//     if (a == 0) {
//         printf("A variável 'a' não pode ser zero.\n");
//         return;
//     }

//     if (d >= 0) {
//         float r1 = (-b + sqrt(d)) / (2 * a);
//         float r2 = (-b - sqrt(d)) / (2 * a);
//         printf("As raízes são: %.2f e %.2f\n", r1, r2);
//     } else {
//         printf("As raízes são complexas.\n");
//     }
// }