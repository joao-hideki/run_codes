#include <stdio.h>

// faorial recursivo
// int fatorial(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     return n*fatorial(n-1);
// }

// fatorial iterativo
int fatorial(int n) {
    int resultado = 1;
    for(int i = 1; i <= n; i++) {
        resultado*=i;
    }
    return resultado;
}

int main() {
    int n;
    float euler = 0.0;

    scanf("%d", &n);
    for(int i = 0; i<=n; i++) {
        euler += 1.0/fatorial(i);
    }

    scanf("%.10f", euler);

    return 0;
}
