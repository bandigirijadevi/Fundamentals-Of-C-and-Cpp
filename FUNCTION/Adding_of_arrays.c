#include <stdio.h>
void addMatrix(int a[2][2], int b[2][2])
{
int result[2][2];
for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
result[i][j] = a[i][j] + b[i][j];
}
}
 printf("Result:\n");
for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
 printf("%d ", result[i][j]);
}
printf("\n");
 }
}
int main()
{
 int a[2][2] = {{1, 2}, {3, 4}};
 int b[2][2] = {{5, 6}, {7, 8}};
addMatrix(a, b);
 return 0;
}