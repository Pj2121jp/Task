// Celsius to Fahrenheit


#include<stdio.h>
#include<math.h>

float CtoF(float fCels)
{
    float fValue = 0.0f;

    fValue = fCels*1.80+32;

    return fValue;
    
}

int main()
{
    float fCelsius = 0.0f;
   
    float fFahrenheit = 0.0f;

    printf("========================================\n");
    printf("Enter the Temperature in Celsius :==>> ");
    scanf("%f",&fCelsius);
    printf("========================================\n");
    
    fFahrenheit = CtoF(fCelsius);

    printf("========================================\n");
    printf("Temperature in Fahrenheit is  :==>>> %f\n",fFahrenheit);
    printf("========================================\n");

    return 0;                                                                                    
}
    