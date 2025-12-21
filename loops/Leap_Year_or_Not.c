#include<stdio.h>
int main()
{
    int y;
    printf("Enter a Number : ");
    scanf("%d", &y);
    if(y%4 == 0 )
    {
        printf("Leap Year");
    
    }
    else{
        printf("years");
    }
    return 0;

}