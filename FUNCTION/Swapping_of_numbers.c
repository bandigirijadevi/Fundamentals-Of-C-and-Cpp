#include <stdio.h>
void swap(int *a, int *b)
{
 int temp = *a;
*a = *b;
*b = temp;
}
int main()
{
int x = 10, y = 20;
 printf("before swapping: %d %d \n", x, y);
swap(&x, &y);
 printf("after swapping: %d %d", x, y);
  return 0;
}