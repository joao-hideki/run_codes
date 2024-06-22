#include <stdio.h>

int primo(int n) {
    int aux = 0;
    for(int i = 1; i <= n; i++) {
        if (n%i == 0) aux++;
    }

    return aux == 2 ? 1 : 0;
}

int main() {
    int n;
    scanf("%d", &n);
    primo(n) ? printf("PRIMO") : printf("!PRIMO");
    return 0;
}