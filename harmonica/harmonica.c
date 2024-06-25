#include <stdio.h>

int main() {
    int n;
    float harmonica = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        harmonica += 1.0/i;
    }
    printf("%.8f", harmonica);
    return 0;
}
