    
#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main() {
    int n, flag;

    printf("Enter a positive number: ");
    scanf("%d", &n);  

    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}

int checkPrimeNumber(int n) {
    if (n <= 1) return 0;  

    int i, squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; ++i) {
        if (n % i == 0)  
            return 0;
    }
    return 1;
}

int checkArmstrongNumber(int num) {
    int originalNum = num, remainder, n = 0;
    double result = 0.0;

    
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (round(result) == num) ? 1 : 0;
}