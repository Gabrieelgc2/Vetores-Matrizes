#include <stdio.h>

int main() {
    int T, N;
    unsigned long long f[61];  

    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 60; i++) {
    /*
    f[2] = f[1] + f[0] = 1;
    Vai calcular todos os fibonaccis de 2 a 60.
    */
        f[i] = f[i-1] + f[i-2];
    }

    scanf("%d", &T);
    int casos[T];
    /*
    T = 3
    casos[3]
    */
    for (int i = 0; i < T; i++) {
        scanf("%d", &casos[i]);
    /*
    i = 0
    i < T
    i++
    0 < 3
    scanf("%d", &casos[0]);
    ler casos[0] i = 1;
    casos[0] = 0
    1 < 3
    scanf("%d", &casos[1]);
    ler casos[1] i = 2;
    casos[1] = 1
    2 < 3
    scanf("%d, &casos[2]");
    casos[2] = 2
    ler casos[2] i = 3;
    */
}
    for (int i = 0; i < T; i++) {
    /*
    i = 0
    i < 3
    i++
    0 < 3
    casos[0] = 0
    printf("Fib(0) = %llu\n", casos[0], f[casos[0]])

    1 < 3
    casos[1] = 1
    printf("Fib(1) = %llu\n", casos[1], f[casos[1]])

    2 < 3
    casos[2] = 2
    printf("Fib(2) = %llu\n", casos[2], f[casos[2]])
    */
    printf("Fib(%d) = %llu\n", casos[i], f[casos[i]]);
    }
    return 0;
}