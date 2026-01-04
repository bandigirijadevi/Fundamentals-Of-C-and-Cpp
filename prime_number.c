#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    if (isPrime(17))
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}