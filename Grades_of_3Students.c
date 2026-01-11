#include <stdio.h>
void calculateResults(int m1, int m2, int m3, float *avg, float *percentage) 
{
    int total = m1 + m2 + m3;              
    *avg = total / 3.0;                    
    *percentage = (total / 300.0) * 100;   
}
int main()
 {
    int mark1, mark2, mark3;
    float average, percentage;
    printf("Enter marks for 3 subjects (out of 100):\n");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    calculateResults(mark1, mark2, mark3, &average, &percentage);
    printf("Student Results \n");
    printf("Marks Entered : %d, %d, %d\n", mark1, mark2, mark3);
    printf("Average Marks : %.2f\n", average);
    printf("Percentage : %.2f\n", percentage);
    printf("\n");
    return 0;
}