#include <stdio.h>
int gcd(int a, int b)
{
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    printf("LCM = %d", lcm(12, 15));
    return 0;
}