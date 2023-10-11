// Day to Year

#include<stdio.h>

float ConvertYear(float fD)
{
    float fY = 0.0f;

    fY = fD/365;

    return fY;
}

int main()
{
    float fDays = 0.0f;
    float fYear = 0.0f;

    printf("========================================\n");
    printf("Enter the Days :==>> ");
    scanf("%f",&fDays);
    printf("========================================\n");
    
    fYear = ConvertYear(fDays);

    printf("========================================\n");
    printf("According to Days is:==>>> %f Year\n",fYear);
    printf("========================================\n");

    return 0;                                                                                    
}
    