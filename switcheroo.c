#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[10];

    a[0] = 0;

    srand(time(NULL));

    int i;

    for (int i = 1; i < 10; i++) {
        a[i] = rand();
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }

    int b[10];

    int *pa = a;
    int *pb = b;

    for (i = 9; i >= 0; i--) {
        *(pb + i) = *(pa + 10 - i - 1);
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", pb[i]);
    }

    for (int i = 9; i >= 0; i--) {
        b[i] = a[10 - i - 1];
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", pb[i]);
    }

    return 0;

}
