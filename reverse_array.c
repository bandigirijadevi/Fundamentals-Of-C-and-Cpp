#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i;
    for(i=4;i>=0;i--)
        printf("%d ", a[i]);

    return 0;
}