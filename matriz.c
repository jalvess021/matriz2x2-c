#include <stdio.h>

int main() {
    int matriz[3][3], i, x;

    printf("Digite os 9 termos da matriz:\n");
    for (i = 0; i <= 2; i++) {
        for (x = 0; x <= 2; x++) {
            scanf("%d", &matriz[i][x]);
        }
    }
    printf("A matriz foi multiplicada por 5, resultando:\n");
        for (i = 0; i <= 2; i++) {
            for (x = 0; x <= 2; x++) {
                matriz[i][x] *= 5;
                printf("|%d| ", matriz[i][x]);
            }
            printf("\n");
        }
    return 0;
}