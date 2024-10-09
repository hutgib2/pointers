#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void) {
    int i = 0;
    int j = 1;
    
    swap(&i, &j);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
}