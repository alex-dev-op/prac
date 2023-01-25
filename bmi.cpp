#include <stdio.h> 

using namespace std;
  
int main() { 
float BMI, weight, height; 
 
BMI=weight/height; 
printf("enter the weight:"); 
scanf("%f",&weight); 
printf("enter the height:"); 
scanf("%f",&height); 
if(BMI<18.5) 
    { 
         printf("underweight"); 
    } 
elseif(BMI>=18.5 && BMI<=24.9) 
    { 
        printf("normal weight"); 
    } 
elseif(BMI>=25 && BMI<=29.9) 
    { 
        printf("overweight"); 
    } 
elseif(BMI>=30 && BMI<=34.9) 
    { 
        printf("obese grade 1"); 
    }     
elseif(BMI>=35 && BMI<=39.9) 
    { 
        printf("obese grade 2"); 
    } 
elseif(BMI>40) 
    { 
        printf("obese grade 3"); 
    } 
else 
{ 
    printf("invalid"); 
     
} 
    return 0; 
} 
