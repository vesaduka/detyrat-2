#include <stdio.h>


int sasiaPozitivCift(int v[], int n);

int main(void) {
    int n;
    printf("Jepni numrin e elementeve te vektorit: ");
    scanf("%d", &n);

    int v[n];
    printf("Jepni elementet e vektorit:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int rezultati = sasiaPozitivCift(v, n);
    printf("Sasia e numrave pozitiv cift ne vektor eshte: %d\n", rezultati);

    return 0;
}

int sasiaPozitivCift(int v[], int n) {
    if (n < 1) {
        return 0;
    }
    if ((v[n - 1] % 2 == 0) && (v[n - 1] > 0)) {
        return 1 + sasiaPozitivCift(v, n - 1);
    } else {
        return sasiaPozitivCift(v, n - 1);
    }
}
