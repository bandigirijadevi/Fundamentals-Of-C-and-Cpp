#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void findRoots(int a, int b, int c)
{
    //equation = ax*2+bx+c 
    if(a == 0) // a should be equal to 0
    {
        printf("Invalid");
        return;
    }
    //- Formula discriminant:d=b^2-4ac 
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d)); // abs = absolute square
    if (d > 0)
     {
       printf("Roots are real and different\n");
      printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a),(double)(-b - sqrt_val) / (2 * a));
      }
      else if (d == 0) 
      {
        printf("Roots are real and same\n");
        printf("%f", -(double)b / (2 * a));
       }

      else 
      {
         printf("Roots are complex\n");
         printf("%f + i%f\n%f - i%f", -(double)b / (2 * a), sqrt_val / (2 * a), -(double)b / (2 * a), sqrt_val / (2 * a));
     }

}
int main()
{
    int a = 1, b = -7, c = 12;
    findRoots(a, b, c); // Function call
    return 0;
}