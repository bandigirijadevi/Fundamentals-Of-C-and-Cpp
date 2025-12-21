#include<stdio.h>
int main()
{
    int cp;
    printf("Enter the Cost Price :");
    scanf("%d", &cp);
    int sp;
    printf("Enter the Selling Price :");
    scanf("%d", &sp);
    if(cp>sp)
    {
        printf("cost price");

    }
    else{
        printf("selling price");

    }
    return 0;


}