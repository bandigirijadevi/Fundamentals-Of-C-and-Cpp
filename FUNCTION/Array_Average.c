#include <stdio.h>float findAverage(int arr[], int size)
{
int sum = 0;
for (int i = 0; i < size; i++)
{
sum += arr[i];
}
return (float)sum / size;
}
int main()
{
int arr[] = {10, 20, 30, 40, 50};
printf("Average = %.2f",
findAverage(arr, 5));
return 0;
}