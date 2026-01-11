#include <stdio.h>

int main() 
{
    int a[10], i, even = 0, odd = 0;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < 10; i++)
     {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
}