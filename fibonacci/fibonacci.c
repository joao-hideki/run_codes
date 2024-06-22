#include <stdio.h>

int fibonnaci(int n) {
    int atual = 1;
    int anterior = 1;
    int anteAnterior = 1;

    for (int i = 3; i<=n; i++) {
        atual = anterior + anteAnterior;
        int aux = anterior;
        anterior = atual;
        anteAnterior = aux;
    }

    return atual;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibonnaci(n));
    return 0;
}
