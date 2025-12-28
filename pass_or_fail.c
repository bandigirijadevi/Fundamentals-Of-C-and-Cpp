#include <stdio.h> 
int isPassed(int m1, int m2, int m3)  
{ 
    if (m1 >= 40 && m2 >= 40 && m3 >= 40) 
      return 1; 
   else
    return 0; 
} 
void main()  
{ 
    int subject1, subject2, subject3; 
    float average; 
    printf("Enter marks for subject1: "); 
    scanf("%d", &subject1); 
    printf("Enter marks for subject2: "); 
    scanf("%d", &subject2); 
    printf("Enter marks for subject3: "); 
    scanf("%d", &subject3); 
    average = (subject1 + subject2 + subject3) / 3.0; 
    printf("Average Marks: %.2f\n", average); 
    if (isPassed(subject1, subject2, subject3))
    printf("result: pass \n"); 
   else 
    printf("result: fail \n"); 
} 
 