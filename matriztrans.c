#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// F=filas;C=Columnas;M=Matriz
void ImpresionMatriz(int **M, int f, int c)
{
    for (int  i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%i\t",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int **MatrizTranspuesta(int**M,int f, int c)´
{
    int **Mt=(int**)malloc(f*sizeof(int*));
}
int main()
{
    int f, int c;
    printf("Ingrese el numero de filas");
    scanf("%i", &f);
    printf("Ingrese el numero de columnas");
    scanf("%i", &c);
    return 0;
}
