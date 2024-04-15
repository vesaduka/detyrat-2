#include <stdio.h>
#include <stdlib.h>

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
int shuma_faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return faktorial(n) + shuma_faktorial(n - 1);
    }
}

int main() {
    int n;
    printf("Jepni numrin n: ");
    scanf("%d", &n);

    int rezultati = shuma_faktorial(n);
    printf("Shuma e faktorialeve deri ne %d: %d\n", n, rezultati);
    return 0;
}
