#include <stdio.h>

double poli (double* vet, int grau, double x) {
    double polinomio = 0.0;
    // double potencia;

    // int aux = 0;
    // for (int i = grau; i >= 0; i--) {
    //     potencia = 1;
    //     for (int j = 1; j <= i; j++) {
    //         potencia *= x;
    //     }
    //     polinomio += vet[aux] * potencia;
    //     aux++;
    // }

    for (int i = 0; i < grau+1; i++) {
        if (grau - i > 0) {
            double potencia = 1;
            for (int j = (grau-i); j > 0; j--) {
                potencia *= x;
            }
            polinomio += vet[i] * potencia;
        } else {
            polinomio += vet[i];
        }
    }

    return polinomio;
}

int main() {
    int n;
    scanf("%d", &n);
    double vet[n+1];

    double x;
    scanf("%lf", &x);

    for(int i = 0; i <= n; i++) {
        scanf("%lf", &vet[i]);
    }
    // poli(vet, n, x);
    printf("%.2lf", poli(vet, n, x));

    return 0;
}
