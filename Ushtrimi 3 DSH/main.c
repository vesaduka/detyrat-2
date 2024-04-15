#include <stdio.h>
#include <stdlib.h>

int vektor_simetrik(int v[], int i, int n) {

    if (i >= n) {
        return 1;
    }
    if (v[i] == v[n]) {
        return vektor_simetrik(v, i + 1, n - 1);
    } else {

        return 0;
    }
}

int main() {
    int n;
    printf("Jepni gjatesine e vektorit: ");
    scanf("%d", &n);

    int vektor[n];
    printf("Jepni elementet e vektorit:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vektor[i]);
    }
    if (vektor_simetrik(vektor, 0, n - 1)) {
        printf("Vektori eshte simetrik.\n");
    } else {
        printf("Vektori nuk eshte simetrik.\n");
    }

    return 0;
}
