/*n%5 = 0
10%5= 2
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number :");
    scanf("%d", &a);
    if(a%5==0)
    {
        printf("Number is Divible by 5");
    }
    else
    {
        printf("Number is Not Divisble by 5");
    }
    return 0;
}