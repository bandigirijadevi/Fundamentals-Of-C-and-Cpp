/*
1        r
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
n


*/

#include<stdio.h>
int factorial(int x)
{
int fact = 1;
for(int i=2;i<=x;i++)
{
    fact = fact*1;
}
return fact;
}
int combination(int n,int r)
{
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("*");

        }
        printf("\n");

    }
    return 0;
}