#include <stdio.h>

int main() {
    int n, g, aux;
    scanf("%d %d", &n, &g);
    printf("P2\n");
    printf("%d %d\n", 8*n, 8*n);
    aux = 0;
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            for (int k = 0; k < n; k++){
                if (i%2 == 0) {
                    if (j%2 == 0) {
                        printf("%d", g);
                    } else {
                        printf("0");
                    }
                    
                    if (j != 8) {
                        printf(" ");
                    }
                } else {
                    if (j%2 == 0) {
                        printf("0");
                    } else {
                        printf("%d", g);
                    }
                    
                    if (j != 8) {
                        printf(" ");
                    }
                }
            } 
        }
        printf("\n");

        if (aux < n-1) {
            aux++;
            i--;
        } else {
            aux = 0;
        }
    }
}