#include <stdio.h>
int main()
 {
    int a[5] = {10, 45, 23, 67, 34};
    int i, max, smax;
    max = smax = a[0];
    for(i = 1; i < 5; i++) {
        if(a[i] > max) {
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] != max) {
            smax = a[i];
        }
    }
    printf("Second Largest = %d", smax);
    return 0;
}