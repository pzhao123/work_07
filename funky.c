#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 10

int print_array(int *ap, int length) {
    printf("[ ");
    int i;
    for (int i = 0; i < length; i++) {
        printf("%d ", *(ap + i));
    }
    printf("]\n");
    return 0;
}

double array_avg(int *ap, int length) {
    double sum = 0;
    int i;
    for (int i = 0; i < length; i++) {
        sum += (*(ap + i));
    }
    double avg = sum / length;
    return avg;
}

int copy_array(int *ap, int *bp, int length) {
    int i;
    for (int i = 0; i < length; i++) {
        (*(bp + i)) = (*(ap + i));
    }
    return 0;
}

int main() {
    int print_array(int *ap, int length);
    double array_avg(int *ap, int length);
    int copy_array(int *ap, int *bp, int length);

    // int a[ARRAY_SIZE];
    // int i;
    // srand(time(NULL));
    // for (i = 0; i < ARRAY_SIZE; i++) {
    //     a[i] = rand();
    // }

    int a[ARRAY_SIZE] = {31, 95, 4, 11, 99, 29, 40, 14, 21, 97};
    int b[ARRAY_SIZE];

    int *ap = a;
    int *bp = b;

    printf("Array Values: ");
    print_array(ap, ARRAY_SIZE);
    printf("Average: %f\n", array_avg(ap, ARRAY_SIZE));
    printf("Array Values of Copied Array: ");
    copy_array(ap, bp, ARRAY_SIZE);
    print_array(bp, ARRAY_SIZE);

    return 0;
}