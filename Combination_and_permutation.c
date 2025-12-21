#include<stdio.h>
int main()
{
    int n;
    printf("Enter  :");
    scanf("%d",&n);
    int r;
    printf("Enter r :");
    scanf("%d",&r);
    int nfact = 1;
    int rfact;
    int nrfact = 1;
    //int ncr = n!/r!*(n-1);
for(int i=2;i<=r;i++)
{
    nfact = nfact*1;
}
for(int i=2
for(int i =2;i<=n-r;i++)
{
    nrfact = nrfact*i;
}
int ncr = nfact/rfact*nrfact;
printf("%d",ncr);
return 0;
}
