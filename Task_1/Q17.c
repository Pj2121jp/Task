// Parameter of rectangl
#include<stdio.h>


float ParameterRectangle(float fNo1, float fNo2)
{
    float fValue = 0.0f;

    fValue = 2*(fNo1+fNo2);

    return fValue;
    
}

int main()
{
    float fLength = 0.0f;
    float fWidth = 0.0f;
    float fParameter = 0.0f;

    printf("========================================\n");
    printf("Enter the Length of Rectangle :==>> ");
    scanf("%f",&fLength);;
    printf("========================================\n");
    printf("Enter the Width of Rectangle :==>> ");
    scanf("%f",&fWidth);
    printf("========================================\n");
    
    fParameter = ParameterRectangle(fLength,fWidth);

    printf("========================================\n");
    printf("Parameter of Rectangle  is :==>>> %f\n",fParameter);
    printf("========================================\n");

}