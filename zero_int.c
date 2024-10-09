#include <stdio.h>

void zero_int(int *ptr) {
    *ptr = 0;
}

int main(void) {
    int i = 1;

    zero_int(&i);
    printf("%d", i);
}