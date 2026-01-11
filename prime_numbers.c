#include<stdio.h>
int isPrime(int a)
{
    if(a <= 1)
    {
        return 0; // number less than 1 is not prime and 0 is to call of the function
    }
    int i;
    for(i=2;i<=a;i++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1; // it means it prime
}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",num);
    if(isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}