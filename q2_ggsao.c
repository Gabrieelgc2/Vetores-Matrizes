#include <stdio.h>

int main() {
    int L; 
    char T; 
    float matriz[12][12]; 
    float somar_valores = 0.0; 
    int i;

    scanf("%d", &L);
    scanf(" %c", &T);

    for (int linha = 0; linha < 12; linha++) {
        for (int coluna = 0; coluna < 12; coluna++) {
            scanf("%f", &matriz[linha][coluna]);
        /*
        matriz[0][0] ler valor usuario
        matriz[0][1] ler valor usuario
        matriz[0][2] ler valor usuario
        matriz[0][3] ler valor usuario
        matriz[0][4] ler valor usuario
        matriz[0][5] ler valor usuario
        matriz[0][6] ler valor usuario
        matriz[0][7] ler valor usuario
        matriz[0][8] ler valor usuario
        matriz[0][9] ler valor usuario
        matriz[0][10] ler valor usuario
        matriz[0][11] ler valor usuario
        */
        }
    }
    for (i = 0; i < 12; i++) {
        somar_valores += matriz[L][i]; 
    }

  
    if (T == 'S') {
        printf("%.1f\n", somar_valores); 
    } else if (T == 'M') {
        printf("%.1f\n", somar_valores / 12.0); 
    }

    return 0;
}
