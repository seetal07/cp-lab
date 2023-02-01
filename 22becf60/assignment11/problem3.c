//write a progrgam to find the compound interest using function

#include <stdio.h>
#include <math.h>


float CmInt(float p, float r, float t)
{
    float ci;
    ci = p * (pow((1 + r / 100), t));
    return ci; 
}

int main()
{
    float principle, time, rate, CI;

    
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

   
     CI = CmInt(principle, rate, time);

  
    printf("Compound Interest = %f", CI);

    return 0;
}
