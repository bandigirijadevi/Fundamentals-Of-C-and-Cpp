#include <stdio.h> 
int main()  
{ 
    int choice, id; 
    printf(" KYC Verification System \n"); 
    printf("1 PAN Number \n"); 
    printf("2 AADHAR Number \n"); 
    printf("3 APAAR Id \n"); 
    printf("4 Driving License \n"); 
    printf("5 Passport \n"); 
    printf("Enter your choice (1-5): "); 
    scanf("%d", &choice); 
    switch(choice)  
    {  
         case 1:  
        printf("PAN Verified \n"); 
          break;    
        case 2:   
        printf("AADHAR Verified \n"); 
        break; 
        case 3:  
        printf("APAAR Verified \n"); 
        break;  
        case 4:  
        printf("Driving License Verified \n"); 
         break; 
        case 5:   
        printf("Passport Verified \n"); 
        break; 
        default: 
        printf("Not Verified \n"); 
    } 
    return 0; 
}