// Volume of cone
#include<stdio.h>
#include<math.h>

#define PI 3.1416

float AreaParallelogram(float fRad, float fHig)
{
    float fValue = 0.0f;

    fValue = PI*(fRad*fRad)*fHig/3;
    return fValue;
    
}

int main()
{
    float fRadius = 0.0f;
    float fHight = 0.0f;
    float fVolume = 0.0f;

    printf("========================================\n");
    printf("Enter the Cone Radius :==>> ");
    scanf("%f",&fRadius);
    printf("========================================\n");
    printf("Enter the Cone Hight  :==>> ");
    scanf("%f",&fHight);
    printf("========================================\n");
    
    fVolume = AreaParallelogram(fRadius,fHight);

    printf("========================================\n");
    printf("Volume of Cone is :==>>> %f\n",fVolume);
    printf("========================================\n");

}