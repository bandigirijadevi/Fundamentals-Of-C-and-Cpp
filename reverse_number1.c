#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    printf("Reverse = %d", reverse(1234));
    return 0;
}