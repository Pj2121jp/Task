// volume of Cylinder

#include<stdio.h>
#include<math.h>

#define PI 3.1416

float VolumeCylinder(float fRad, float fHig)
{
    float fValue = 0.0f;

    fValue = PI*(fRad*fRad)*fHig;
    return fValue;
    
}

int main()
{
    float fRadius = 0.0f;
    float fHight = 0.0f;
    float fVolume = 0.0f;

    printf("========================================\n");
    printf("Enter the Cylinder Radius :==>> ");
    scanf("%f",&fRadius);
    printf("========================================\n");
    printf("Enter the Cylinder Hight  :==>> ");
    scanf("%f",&fHight);
    printf("========================================\n");
    
    fVolume = VolumeCylinder(fRadius,fHight);

    printf("========================================\n");
    printf("Volume of Cylinder is :==>>> %f\n",fVolume);
    printf("========================================\n");

}