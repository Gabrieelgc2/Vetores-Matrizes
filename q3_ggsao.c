#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        int matriz[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j <= i) {
                    matriz[i][j] = i - j + 1;
                } else {
                    matriz[i][j] = j - i + 1;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%3d", matriz[i][j]);
                if (j < N - 1) printf(" ");
            }
            printf("\n"); 
        }
        printf("\n"); 
    }

    return 0;
}
