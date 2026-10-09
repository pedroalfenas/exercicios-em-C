#include <stdio.h>

int main() {
    int x, y, n, i, j, mat[501][501]={0}, resultado = 0;

    if (scanf("%d", &n) != 1) return 0;

    for(i=0; i<n; i++){
        if (scanf("%d %d", &x, &y) == 2) {
            mat[x][y] += 1;
        }
    }

    for(i=0; i<=500; i++){
        for(j=0; j<=500; j++){
            if(mat[i][j] > 1){
                resultado = 1;
            }
        }
        if (resultado == 1) break;
    }

    printf("%d\n", resultado);

    return 0;
}
