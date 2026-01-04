#include <stdio.h>

long factorial(int n); 

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defined \n");
    } else {
        long result = factorial(n); 
        printf("Factorial of %d is: %ld\n", n, result);
    }

    return 0;
}

long factorial(int n) {
    long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;  
    }
    return fact;
}
