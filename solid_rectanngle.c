 #include<stdio.h>
 int main()
 {
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i= 1;i<=7;i++)// outer loop = np of lines
    {
        for(int n=1; i<=7;i++) // inner loop = no of hasttags in each line
        printf("#");
    }
    printf("\n");
    return 0;
 }