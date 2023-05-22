#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirMatriz(int **matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int** generarMatrizInversa(int **matriz, int filas, int columnas) {
    int **matrizInversa = (int**)malloc(filas * sizeof(int*));
    for (int i = 0; i < filas; i++) {
        matrizInversa[i] = (int*)malloc(columnas * sizeof(int));
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizInversa[i][j] = matriz[j][i];
        }
    }

    return matrizInversa;
}
int main() {
    int filas, columnas;

    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

   
}