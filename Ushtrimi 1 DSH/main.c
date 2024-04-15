#include <stdio.h>
#include <stdlib.h>

void mbush_matricen(int mat[][10], int n) {
    printf("Vendosni elementet e matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int mbledh_matricen(int mat[][10], int i, int j, int n) {
    if (i >= n) {
        return 0;
    }

    if (j >= n) {
        return mbledh_matricen(mat, i + 1, 0, n);
    }

    return mat[i][j] + mbledh_matricen(mat, i, j + 1, n);
}

int main() {
    int n;
    printf("Jepni madhesine e matrices katrore (deri ne 10): ");
    scanf("%d", &n);

    int mat[10][10];
    mbush_matricen(mat, n);
    int rezultati = mbledh_matricen(mat, 0, 0, n);
    printf("Shuma e elementeve te matrices: %d\n", rezultati);
    return 0;
}

