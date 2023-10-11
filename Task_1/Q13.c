//  Fahrenheit to Celsius  


#include<stdio.h>
#include<math.h>

float FtoC(float fNo)
{
    float fValue = 0.0f;

    fValue = ((fNo-32)*5)/9;

    return fValue;
    
}

int main()
{
    float fFahrenheit = 0.0f;
    float fCelsius = 0.0f;
 
    printf("========================================\n");
    printf("Enter the Temperature in Fahrenheit  :==>> ");
    scanf("%f",&fFahrenheit);
    printf("========================================\n");
    
    fCelsius = FtoC(fFahrenheit);

    printf("========================================\n");
    printf("Temperature in Celsius is :==>>> %f\n",fCelsius);
    printf("========================================\n");

    return 0;                                                                                    
}
    