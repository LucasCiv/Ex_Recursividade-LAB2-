
#include <stdio.h>

int g(int n) {
    if (n == 1) {
        return 1;
    } else if (n > 1 && n % 2 == 0) {
        return g(n - 1) + n * n;
    } else if (n > 1 && n % 2 != 0) {
        return g(n - 1) - n * n;
    }
}

int main() {
    int resultado;
    resultado = g(6);
    printf("%d", resultado);
    return 0;
}
