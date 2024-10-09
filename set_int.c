#include <stdio.h>

void set_int(int *ptr, int nbr) {
    *ptr = nbr;

}

int main(void) {
    int i = 1;

    set_int(&i, 2);
    printf("%d", i);
}