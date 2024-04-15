#include <stdio.h>


int prodhimi_parve_cift(int n);
int prodhimi_parve_cift(int n) {

    if (n <= 0) {
        return 1;
    } else {
        int numri_cift = 2 * n;
        return numri_cift * prodhimi_parve_cift(n - 1);
    }
}
int main() {
    int n ;
    printf("Vendosni numrin e kufizave:");
    scanf("%d", &n);
    printf("Prodhimi i %d numrave te pare cift eshte: %d\n", n, prodhimi_parve_cift(n));

    return 0;
}


