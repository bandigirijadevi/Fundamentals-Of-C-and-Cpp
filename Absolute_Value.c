#include<stdio.h>
int main()
{
    int z;
    printf("Enter the number : ");
    scanf("%d", &z);
    if(z < 0)
{
    z = z*(-1);

}    
printf("The Absolute Value is %d", z);
return 0;
}