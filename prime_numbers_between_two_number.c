//flag = 1(true)
//flag = 0(false)
//++j = j=2 to j=3

#include<stdio.h>
int isPrimeNumber(int n)
{
    int i,f=1;
    for(i=2;i<=n;i++)
    {
        if(n % i == 0)
        {
            f=0;
            return 0;
        }
    }
    return f;

}
int main()
{
int n1=2,n2=10,j,f;
printf("prime number between %d and %d are : ", n1,n2);
for(j=n1;j<n2;++j)
{
    f=isPrimeNumber(j);
    if(f == 1)
    {
        printf("%d ",j);
    }
}
return 0;
}