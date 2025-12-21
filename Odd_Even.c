/* n%2 == 0
n is even
10%2 = 5
n%2 != 0
n is odd
7%2 = 3.5
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number :");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}